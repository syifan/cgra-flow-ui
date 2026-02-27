
#=========================================================================
# VCgraTemplateRTL_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# CgraTemplateRTL
#-------------------------------------------------------------------------

class CgraTemplateRTL( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned short * address_lower;        
        unsigned short * address_upper;        
        unsigned char * cgra_id;        
        unsigned char * clk;        
        unsigned char * reset;        
        unsigned int * recv_from_cpu_pkt___05Fmsg;        
        unsigned char * recv_from_cpu_pkt___05Frdy;        
        unsigned char * recv_from_cpu_pkt___05Fval;        
        unsigned int * recv_from_inter_cgra_noc___05Fmsg;        
        unsigned char * recv_from_inter_cgra_noc___05Frdy;        
        unsigned char * recv_from_inter_cgra_noc___05Fval;        
        unsigned int * send_to_cpu_pkt___05Fmsg;        
        unsigned char * send_to_cpu_pkt___05Frdy;        
        unsigned char * send_to_cpu_pkt___05Fval;        
        unsigned int * send_to_inter_cgra_noc___05Fmsg;        
        unsigned char * send_to_inter_cgra_noc___05Frdy;        
        unsigned char * send_to_inter_cgra_noc___05Fval;

        // Verilator model
        void * model;

      } VCgraTemplateRTL_t;

      VCgraTemplateRTL_t * create_model( const char * );
      void destroy_model( VCgraTemplateRTL_t *);
      void comb_eval( VCgraTemplateRTL_t * );
      void seq_eval( VCgraTemplateRTL_t * );
      void assert_en( bool en );
      

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libCgraTemplateRTL_v.so', os.path.getmtime( './libCgraTemplateRTL_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libCgraTemplateRTL_v.so')

    # increment instance count
    CgraTemplateRTL.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".verilator1.vcd"
      else:
        verilator_vcd_file = "CgraTemplateRTL.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.address_lower = InPort( Bits9 )
    s.address_upper = InPort( Bits9 )
    s.cgra_id = InPort( Bits2 )
    s.recv_from_cpu_pkt = ValRdyRecvIfcRTL( IntraCgraPacket_4_4x1_4_8_2_CgraPayload__11cd3f8c0d91825c )
    s.recv_from_inter_cgra_noc = ValRdyRecvIfcRTL( InterCgraPacket_4_4x1_4_8_4_CgraPayload__9d404f857a1e94ff )
    s.send_to_cpu_pkt = ValRdySendIfcRTL( IntraCgraPacket_4_4x1_4_8_2_CgraPayload__11cd3f8c0d91825c )
    s.send_to_inter_cgra_noc = ValRdySendIfcRTL( InterCgraPacket_4_4x1_4_8_4_CgraPayload__9d404f857a1e94ff )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_address_lower = Wire( Bits9 )
    @update
    def isignal_s_DOT_address_lower():
      s.s_DOT_address_lower @= s.address_lower
    
    s.s_DOT_address_upper = Wire( Bits9 )
    @update
    def isignal_s_DOT_address_upper():
      s.s_DOT_address_upper @= s.address_upper
    
    s.s_DOT_cgra_id = Wire( Bits2 )
    @update
    def isignal_s_DOT_cgra_id():
      s.s_DOT_cgra_id @= s.cgra_id
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_recv_from_cpu_pkt_DOT_msg = Wire( Bits216 )
    @update
    def istruct_s_DOT_recv_from_cpu_pkt_DOT_msg():
      s.s_DOT_recv_from_cpu_pkt_DOT_msg @= s.recv_from_cpu_pkt.msg
    
    s.s_DOT_recv_from_cpu_pkt_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_recv_from_cpu_pkt_DOT_val():
      s.s_DOT_recv_from_cpu_pkt_DOT_val @= s.recv_from_cpu_pkt.val
    
    s.s_DOT_recv_from_inter_cgra_noc_DOT_msg = Wire( Bits219 )
    @update
    def istruct_s_DOT_recv_from_inter_cgra_noc_DOT_msg():
      s.s_DOT_recv_from_inter_cgra_noc_DOT_msg @= s.recv_from_inter_cgra_noc.msg
    
    s.s_DOT_recv_from_inter_cgra_noc_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_recv_from_inter_cgra_noc_DOT_val():
      s.s_DOT_recv_from_inter_cgra_noc_DOT_val @= s.recv_from_inter_cgra_noc.val
    
    s.s_DOT_send_to_cpu_pkt_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_send_to_cpu_pkt_DOT_rdy():
      s.s_DOT_send_to_cpu_pkt_DOT_rdy @= s.send_to_cpu_pkt.rdy
    
    s.s_DOT_send_to_inter_cgra_noc_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_send_to_inter_cgra_noc_DOT_rdy():
      s.s_DOT_send_to_inter_cgra_noc_DOT_rdy @= s.send_to_inter_cgra_noc.rdy
    
    s.s_DOT_recv_from_cpu_pkt_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_recv_from_cpu_pkt_DOT_rdy():
      s.recv_from_cpu_pkt.rdy @= s.s_DOT_recv_from_cpu_pkt_DOT_rdy
    
    s.s_DOT_recv_from_inter_cgra_noc_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_recv_from_inter_cgra_noc_DOT_rdy():
      s.recv_from_inter_cgra_noc.rdy @= s.s_DOT_recv_from_inter_cgra_noc_DOT_rdy
    
    s.s_DOT_send_to_cpu_pkt_DOT_msg = Wire( Bits216 )
    @update
    def ostruct_s_DOT_send_to_cpu_pkt_DOT_msg():
      s.send_to_cpu_pkt.msg.payload.ctrl_addr @= s.s_DOT_send_to_cpu_pkt_DOT_msg[0:3]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_idx[0] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[3:7]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_idx[1] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[7:11]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_idx[2] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[11:15]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_idx[3] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[15:19]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_from[0] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[19:20]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_from[1] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[20:21]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_from[2] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[21:22]
      s.send_to_cpu_pkt.msg.payload.ctrl.read_reg_from[3] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[22:23]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_idx[0] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[23:27]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_idx[1] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[27:31]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_idx[2] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[31:35]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_idx[3] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[35:39]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_from[0] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[39:41]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_from[1] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[41:43]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_from[2] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[43:45]
      s.send_to_cpu_pkt.msg.payload.ctrl.write_reg_from[3] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[45:47]
      s.send_to_cpu_pkt.msg.payload.ctrl.is_last_ctrl @= s.s_DOT_send_to_cpu_pkt_DOT_msg[47:48]
      s.send_to_cpu_pkt.msg.payload.ctrl.vector_factor_power @= s.s_DOT_send_to_cpu_pkt_DOT_msg[48:51]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[0] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[51:53]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[1] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[53:55]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[2] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[55:57]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[3] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[57:59]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[4] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[59:61]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[5] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[61:63]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[6] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[63:65]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[7] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[65:67]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[8] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[67:69]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[9] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[69:71]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[10] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[71:73]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_xbar_outport[11] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[73:75]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[0] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[75:79]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[1] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[79:83]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[2] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[83:87]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[3] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[87:91]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[4] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[91:95]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[5] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[95:99]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[6] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[99:103]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[7] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[103:107]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[8] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[107:111]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[9] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[111:115]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[10] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[115:119]
      s.send_to_cpu_pkt.msg.payload.ctrl.routing_xbar_outport[11] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[119:123]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_in[0] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[123:126]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_in[1] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[126:129]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_in[2] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[129:132]
      s.send_to_cpu_pkt.msg.payload.ctrl.fu_in[3] @= s.s_DOT_send_to_cpu_pkt_DOT_msg[132:135]
      s.send_to_cpu_pkt.msg.payload.ctrl.operation @= s.s_DOT_send_to_cpu_pkt_DOT_msg[135:142]
      s.send_to_cpu_pkt.msg.payload.data_addr @= s.s_DOT_send_to_cpu_pkt_DOT_msg[142:151]
      s.send_to_cpu_pkt.msg.payload.data.delay @= s.s_DOT_send_to_cpu_pkt_DOT_msg[151:152]
      s.send_to_cpu_pkt.msg.payload.data.bypass @= s.s_DOT_send_to_cpu_pkt_DOT_msg[152:153]
      s.send_to_cpu_pkt.msg.payload.data.predicate @= s.s_DOT_send_to_cpu_pkt_DOT_msg[153:154]
      s.send_to_cpu_pkt.msg.payload.data.payload @= s.s_DOT_send_to_cpu_pkt_DOT_msg[154:186]
      s.send_to_cpu_pkt.msg.payload.cmd @= s.s_DOT_send_to_cpu_pkt_DOT_msg[186:191]
      s.send_to_cpu_pkt.msg.vc_id @= s.s_DOT_send_to_cpu_pkt_DOT_msg[191:192]
      s.send_to_cpu_pkt.msg.opaque @= s.s_DOT_send_to_cpu_pkt_DOT_msg[192:200]
      s.send_to_cpu_pkt.msg.dst_cgra_y @= s.s_DOT_send_to_cpu_pkt_DOT_msg[200:201]
      s.send_to_cpu_pkt.msg.dst_cgra_x @= s.s_DOT_send_to_cpu_pkt_DOT_msg[201:203]
      s.send_to_cpu_pkt.msg.src_cgra_y @= s.s_DOT_send_to_cpu_pkt_DOT_msg[203:204]
      s.send_to_cpu_pkt.msg.src_cgra_x @= s.s_DOT_send_to_cpu_pkt_DOT_msg[204:206]
      s.send_to_cpu_pkt.msg.dst_cgra_id @= s.s_DOT_send_to_cpu_pkt_DOT_msg[206:208]
      s.send_to_cpu_pkt.msg.src_cgra_id @= s.s_DOT_send_to_cpu_pkt_DOT_msg[208:210]
      s.send_to_cpu_pkt.msg.dst @= s.s_DOT_send_to_cpu_pkt_DOT_msg[210:213]
      s.send_to_cpu_pkt.msg.src @= s.s_DOT_send_to_cpu_pkt_DOT_msg[213:216]
    
    s.s_DOT_send_to_cpu_pkt_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_send_to_cpu_pkt_DOT_val():
      s.send_to_cpu_pkt.val @= s.s_DOT_send_to_cpu_pkt_DOT_val
    
    s.s_DOT_send_to_inter_cgra_noc_DOT_msg = Wire( Bits219 )
    @update
    def ostruct_s_DOT_send_to_inter_cgra_noc_DOT_msg():
      s.send_to_inter_cgra_noc.msg.payload.ctrl_addr @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[0:3]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_idx[0] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[3:7]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_idx[1] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[7:11]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_idx[2] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[11:15]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_idx[3] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[15:19]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_from[0] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[19:20]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_from[1] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[20:21]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_from[2] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[21:22]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.read_reg_from[3] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[22:23]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_idx[0] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[23:27]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_idx[1] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[27:31]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_idx[2] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[31:35]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_idx[3] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[35:39]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_from[0] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[39:41]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_from[1] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[41:43]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_from[2] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[43:45]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.write_reg_from[3] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[45:47]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.is_last_ctrl @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[47:48]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.vector_factor_power @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[48:51]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[0] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[51:53]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[1] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[53:55]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[2] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[55:57]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[3] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[57:59]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[4] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[59:61]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[5] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[61:63]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[6] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[63:65]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[7] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[65:67]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[8] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[67:69]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[9] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[69:71]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[10] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[71:73]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_xbar_outport[11] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[73:75]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[0] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[75:79]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[1] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[79:83]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[2] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[83:87]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[3] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[87:91]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[4] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[91:95]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[5] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[95:99]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[6] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[99:103]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[7] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[103:107]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[8] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[107:111]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[9] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[111:115]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[10] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[115:119]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.routing_xbar_outport[11] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[119:123]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_in[0] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[123:126]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_in[1] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[126:129]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_in[2] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[129:132]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.fu_in[3] @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[132:135]
      s.send_to_inter_cgra_noc.msg.payload.ctrl.operation @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[135:142]
      s.send_to_inter_cgra_noc.msg.payload.data_addr @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[142:151]
      s.send_to_inter_cgra_noc.msg.payload.data.delay @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[151:152]
      s.send_to_inter_cgra_noc.msg.payload.data.bypass @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[152:153]
      s.send_to_inter_cgra_noc.msg.payload.data.predicate @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[153:154]
      s.send_to_inter_cgra_noc.msg.payload.data.payload @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[154:186]
      s.send_to_inter_cgra_noc.msg.payload.cmd @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[186:191]
      s.send_to_inter_cgra_noc.msg.vc_id @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[191:193]
      s.send_to_inter_cgra_noc.msg.opaque @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[193:201]
      s.send_to_inter_cgra_noc.msg.remote_src_port @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[201:203]
      s.send_to_inter_cgra_noc.msg.dst_tile_id @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[203:206]
      s.send_to_inter_cgra_noc.msg.src_tile_id @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[206:209]
      s.send_to_inter_cgra_noc.msg.dst_y @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[209:210]
      s.send_to_inter_cgra_noc.msg.dst_x @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[210:212]
      s.send_to_inter_cgra_noc.msg.src_y @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[212:213]
      s.send_to_inter_cgra_noc.msg.src_x @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[213:215]
      s.send_to_inter_cgra_noc.msg.dst @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[215:217]
      s.send_to_inter_cgra_noc.msg.src @= s.s_DOT_send_to_inter_cgra_noc_DOT_msg[217:219]
    
    s.s_DOT_send_to_inter_cgra_noc_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_send_to_inter_cgra_noc_DOT_val():
      s.send_to_inter_cgra_noc.val @= s.s_DOT_send_to_inter_cgra_noc_DOT_val

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.address_lower[0] = int(s.s_DOT_address_lower)
      
      _ffi_m.address_upper[0] = int(s.s_DOT_address_upper)
      
      _ffi_m.cgra_id[0] = int(s.s_DOT_cgra_id)
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      x = _ffi_m.recv_from_cpu_pkt___05Fmsg
      x[0] = int(s.s_DOT_recv_from_cpu_pkt_DOT_msg[0:32])
      x[1] = int(s.s_DOT_recv_from_cpu_pkt_DOT_msg[32:64])
      x[2] = int(s.s_DOT_recv_from_cpu_pkt_DOT_msg[64:96])
      x[3] = int(s.s_DOT_recv_from_cpu_pkt_DOT_msg[96:128])
      x[4] = int(s.s_DOT_recv_from_cpu_pkt_DOT_msg[128:160])
      x[5] = int(s.s_DOT_recv_from_cpu_pkt_DOT_msg[160:192])
      x[6] = int(s.s_DOT_recv_from_cpu_pkt_DOT_msg[192:216])
      
      _ffi_m.recv_from_cpu_pkt___05Fval[0] = int(s.s_DOT_recv_from_cpu_pkt_DOT_val)
      
      x = _ffi_m.recv_from_inter_cgra_noc___05Fmsg
      x[0] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_msg[0:32])
      x[1] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_msg[32:64])
      x[2] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_msg[64:96])
      x[3] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_msg[96:128])
      x[4] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_msg[128:160])
      x[5] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_msg[160:192])
      x[6] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_msg[192:219])
      
      _ffi_m.recv_from_inter_cgra_noc___05Fval[0] = int(s.s_DOT_recv_from_inter_cgra_noc_DOT_val)
      
      _ffi_m.send_to_cpu_pkt___05Frdy[0] = int(s.s_DOT_send_to_cpu_pkt_DOT_rdy)
      
      _ffi_m.send_to_inter_cgra_noc___05Frdy[0] = int(s.s_DOT_send_to_inter_cgra_noc_DOT_rdy)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_recv_from_cpu_pkt_DOT_rdy @= _ffi_m.recv_from_cpu_pkt___05Frdy[0]
      
      s.s_DOT_recv_from_inter_cgra_noc_DOT_rdy @= _ffi_m.recv_from_inter_cgra_noc___05Frdy[0]
      
      x = _ffi_m.send_to_cpu_pkt___05Fmsg
      s.s_DOT_send_to_cpu_pkt_DOT_msg[0:32] @= x[0]
      s.s_DOT_send_to_cpu_pkt_DOT_msg[32:64] @= x[1]
      s.s_DOT_send_to_cpu_pkt_DOT_msg[64:96] @= x[2]
      s.s_DOT_send_to_cpu_pkt_DOT_msg[96:128] @= x[3]
      s.s_DOT_send_to_cpu_pkt_DOT_msg[128:160] @= x[4]
      s.s_DOT_send_to_cpu_pkt_DOT_msg[160:192] @= x[5]
      s.s_DOT_send_to_cpu_pkt_DOT_msg[192:216] @= x[6]
      
      s.s_DOT_send_to_cpu_pkt_DOT_val @= _ffi_m.send_to_cpu_pkt___05Fval[0]
      
      x = _ffi_m.send_to_inter_cgra_noc___05Fmsg
      s.s_DOT_send_to_inter_cgra_noc_DOT_msg[0:32] @= x[0]
      s.s_DOT_send_to_inter_cgra_noc_DOT_msg[32:64] @= x[1]
      s.s_DOT_send_to_inter_cgra_noc_DOT_msg[64:96] @= x[2]
      s.s_DOT_send_to_inter_cgra_noc_DOT_msg[96:128] @= x[3]
      s.s_DOT_send_to_inter_cgra_noc_DOT_msg[128:160] @= x[4]
      s.s_DOT_send_to_inter_cgra_noc_DOT_msg[160:192] @= x[5]
      s.s_DOT_send_to_inter_cgra_noc_DOT_msg[192:219] @= x[6]
      
      s.s_DOT_send_to_inter_cgra_noc_DOT_val @= _ffi_m.send_to_inter_cgra_noc___05Fval[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 0:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' address_lower={s.address_lower}, address_upper={s.address_upper}, cgra_id={s.cgra_id}, clk={s.clk}, reset={s.reset}, recv_from_cpu_pkt.msg={s.recv_from_cpu_pkt.msg}, recv_from_cpu_pkt.rdy={s.recv_from_cpu_pkt.rdy}, recv_from_cpu_pkt.val={s.recv_from_cpu_pkt.val}, recv_from_inter_cgra_noc.msg={s.recv_from_inter_cgra_noc.msg}, recv_from_inter_cgra_noc.rdy={s.recv_from_inter_cgra_noc.rdy}, recv_from_inter_cgra_noc.val={s.recv_from_inter_cgra_noc.val}, send_to_cpu_pkt.msg={s.send_to_cpu_pkt.msg}, send_to_cpu_pkt.rdy={s.send_to_cpu_pkt.rdy}, send_to_cpu_pkt.val={s.send_to_cpu_pkt.val}, send_to_inter_cgra_noc.msg={s.send_to_inter_cgra_noc.msg}, send_to_inter_cgra_noc.rdy={s.send_to_inter_cgra_noc.rdy}, send_to_inter_cgra_noc.val={s.send_to_inter_cgra_noc.val},'

  def internal_line_trace( s ):
    return ''
