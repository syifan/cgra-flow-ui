// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraTemplateRTL.h for the primary calling header

#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL__Syms.h"

void VCgraTemplateRTL::_settle__TOP__18(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_settle__TOP__18\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted;
    if (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][4U] >> 4U))))) {
        if (((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
               & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted))) 
              & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [0U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [0U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 1U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 1U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [1U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [1U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (2U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 2U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 2U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [2U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [2U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (4U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 3U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 3U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [3U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [3U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (8U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 4U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 4U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [4U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [4U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x10U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 5U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 5U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [5U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [5U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x20U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 6U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 6U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [6U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [6U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x40U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 7U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 7U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [7U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [7U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x80U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 8U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 8U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [8U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [8U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x100U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 9U) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                             >> 9U))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [9U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [9U])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x200U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 0xaU) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                               >> 0xaU))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [0xaU]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [0xaU])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x400U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 0xbU) & (~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted) 
                               >> 0xbU))) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__send_data___05Frdy
              [0xbU]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
             [0xbU])) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next 
                = (0x800U | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next));
        }
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_opt___05Frdy) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next = 0U;
        }
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_accepted_next = 0U;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_data___05Frdy[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__recv_data___05Frdy
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_fu_crossbar___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_fu_crossbar___05Fval
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_fu_crossbar___05Fval
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_fu_crossbar___05Fval
        [3U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [1U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [2U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [3U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [4U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [5U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [6U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__tile___05F2__send_data___05Fval[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_out_or_link___05Fsend___05Fval
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem___05Fsend_ctrl___05Frdy 
        = ((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Frecv_opt___05Frdy) 
             | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element_done)) 
            & ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar_done))) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__fu_crossbar___05Frecv_opt___05Frdy) 
              | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__fu_crossbar_done)));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [0U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [0U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [0U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [0U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [0U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[0U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [0U][7U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [1U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [1U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [1U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [1U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [1U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[1U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [1U][7U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [2U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [2U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [2U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [2U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [2U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[2U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [2U][7U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [3U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [3U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [3U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [3U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [3U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[3U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [3U][7U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [4U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [4U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [4U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [4U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [4U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[4U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [4U][7U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [5U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [5U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [5U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [5U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [5U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[5U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [5U][7U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [6U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [6U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [6U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [6U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [6U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[6U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [6U][7U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][0U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [0U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [0U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][1U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][1U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [1U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [1U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][2U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][2U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [2U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [2U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][2U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][2U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][3U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][3U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [3U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [3U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][3U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][3U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][4U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][4U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [4U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [4U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][4U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][4U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][5U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][5U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [5U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [5U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][5U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][5U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][6U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][6U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [6U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [6U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][6U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][6U]));
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
        [7U][7U];
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [8U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                         [9U])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                             [7U][7U] 
                                             < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                             [7U][7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xaU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
    if ((((((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                           [0xbU])) & (7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                                                 [7U]
                                                 [7U] 
                                                 < 
                                                 vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_count_wire
                                                 [7U]
                                                 [7U]))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter_next[7U][7U] 
            = (7U & ((IData)(1U) + vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_counter
                     [7U][7U]));
    }
}
