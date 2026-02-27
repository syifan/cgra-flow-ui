# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCgraTemplateRTL.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCgraTemplateRTL \
	VCgraTemplateRTL__1 \
	VCgraTemplateRTL__2 \
	VCgraTemplateRTL__3 \
	VCgraTemplateRTL__4 \
	VCgraTemplateRTL__5 \
	VCgraTemplateRTL__6 \
	VCgraTemplateRTL__7 \
	VCgraTemplateRTL__8 \
	VCgraTemplateRTL__9 \
	VCgraTemplateRTL__10 \
	VCgraTemplateRTL__11 \
	VCgraTemplateRTL__12 \
	VCgraTemplateRTL__13 \
	VCgraTemplateRTL__14 \
	VCgraTemplateRTL__15 \
	VCgraTemplateRTL__16 \
	VCgraTemplateRTL__17 \
	VCgraTemplateRTL__18 \
	VCgraTemplateRTL__19 \
	VCgraTemplateRTL__20 \
	VCgraTemplateRTL__21 \
	VCgraTemplateRTL__22 \
	VCgraTemplateRTL__23 \
	VCgraTemplateRTL__24 \
	VCgraTemplateRTL__25 \
	VCgraTemplateRTL__26 \
	VCgraTemplateRTL___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCgraTemplateRTL__Slow \
	VCgraTemplateRTL__1__Slow \
	VCgraTemplateRTL__2__Slow \
	VCgraTemplateRTL__3__Slow \
	VCgraTemplateRTL__4__Slow \
	VCgraTemplateRTL__5__Slow \
	VCgraTemplateRTL__6__Slow \
	VCgraTemplateRTL__7__Slow \
	VCgraTemplateRTL__8__Slow \
	VCgraTemplateRTL__9__Slow \
	VCgraTemplateRTL__10__Slow \
	VCgraTemplateRTL__11__Slow \
	VCgraTemplateRTL__12__Slow \
	VCgraTemplateRTL__13__Slow \
	VCgraTemplateRTL__14__Slow \
	VCgraTemplateRTL__15__Slow \
	VCgraTemplateRTL__16__Slow \
	VCgraTemplateRTL__17__Slow \
	VCgraTemplateRTL__18__Slow \
	VCgraTemplateRTL__19__Slow \
	VCgraTemplateRTL___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCgraTemplateRTL__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
