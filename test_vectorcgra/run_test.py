#!/usr/bin/env python3
import sys
import os

# Set up paths correctly - must run from /cgra for relative imports to work
os.chdir('/cgra')
sys.path.insert(0, '/cgra')

from VectorCGRA.multi_cgra.test.MeshMultiCgraTemplateRTL_test import test_mesh_multi_cgra_universal, test_simplified_multi_cgra

def main():
    arch_yaml_path = '/tmp/architecture.yaml'
    output_dir = '/tmp/verilog'
    
    cmdline_opts = {
        'test_verilog': 'zeros',
        'test_yosys_verilog': '',
        'dump_textwave': False,
        'dump_vcd': False,
        'dump_vtb': False,
        'max_cycles': None
    }
    
    print(f"Generating Verilog from {arch_yaml_path}...")
    os.chdir(output_dir)
    
    success = True
    
    try:
        print("\n=== Running test_mesh_multi_cgra_universal ===")
        test_mesh_multi_cgra_universal(cmdline_opts, arch_yaml_path)
        print("✓ test_mesh_multi_cgra_universal completed")
    except Exception as e:
        print(f"✗ test_mesh_multi_cgra_universal failed: {e}")
        import traceback
        traceback.print_exc()
        success = False
    
    try:
        print("\n=== Running test_simplified_multi_cgra ===")
        test_simplified_multi_cgra(cmdline_opts, arch_yaml_path)
        print("✓ test_simplified_multi_cgra completed")
    except Exception as e:
        print(f"✗ test_simplified_multi_cgra failed: {e}")
        import traceback
        traceback.print_exc()
        success = False
    
    # List generated files
    print("\n=== Generated Verilog files ===")
    for f in sorted(os.listdir('.')):
        if f.endswith('.v'):
            size = os.path.getsize(f)
            print(f"  {f} ({size:,} bytes)")
    
    if success:
        print("\n✓ Verilog generation completed successfully")
        sys.exit(0)
    else:
        print("\n✗ Verilog generation completed with errors")
        sys.exit(1)

if __name__ == '__main__':
    main()
