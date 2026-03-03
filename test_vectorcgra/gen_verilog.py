#!/usr/bin/env python3
"""Generate Verilog using CgraTemplateRTL_test"""
import sys
sys.path.insert(0, '/cgra')

from VectorCGRA.cgra.test.CgraTemplateRTL_test import test_cgra_universal
import os

output_dir = '/tmp/verilog'
os.chdir(output_dir)

opts = {
    'test_verilog': 'zeros',
    'test_yosys_verilog': '',
    'dump_textwave': False,
    'dump_vcd': False,
    'dump_vtb': False,
    'max_cycles': None
}

print(f"Generating Verilog in {output_dir}...")
test_cgra_universal(opts)
print("SUCCESS")

# List generated files
print("\nGenerated files:")
for f in sorted(os.listdir('.')):
    if f.endswith('.v'):
        size = os.path.getsize(f)
        print(f"  {f} ({size:,} bytes)")
