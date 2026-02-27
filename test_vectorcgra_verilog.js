#!/usr/bin/env node
/**
 * Test script to verify VectorCGRA Verilog generation
 * 
 * This script:
 * 1. Creates a simple architecture YAML
 * 2. Runs VectorCGRA test in Docker
 * 3. Checks generated Verilog files
 */

import { promises as fs } from 'fs';
import path from 'path';
import { exec } from 'child_process';
import { promisify } from 'util';
import yaml from 'js-yaml';

const execAsync = promisify(exec);

const TEST_DIR = './test_vectorcgra';
const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra/cgra-flow:ui';

// Simple test architecture (2x2 CGRA)
const testArchitecture = {
  architecture: {
    name: 'NeuraMultiCgra',
    version: '1.0'
  },
  multi_cgra_defaults: {
    base_topology: 'mesh',
    rows: 1,
    columns: 1,
    memory: {
      capacity: 256,
      'data bitwidth': 64,
      'vector lanes': 1
    }
  },
  cgra_defaults: {
    rows: 2,
    columns: 2,
    configMemSize: 64,
    'per bank sram': 8
  },
  tile_defaults: {
    num_registers: 16,
    fu_types: ['alu', 'mul', 'lsu', 'rhaul', 'rhauld']
  }
};

async function main() {
  console.log('🧪 VectorCGRA Verilog Generation Test\n');

  // Step 1: Create test directory
  console.log('📁 Setting up test directory...');
  await fs.mkdir(TEST_DIR, { recursive: true });
  const verilogDir = path.join(TEST_DIR, 'verilog');
  await fs.mkdir(verilogDir, { recursive: true });

  // Step 2: Write architecture YAML
  console.log('📝 Creating architecture YAML...');
  const archYamlPath = path.join(TEST_DIR, 'architecture.yaml');
  const yamlContent = yaml.dump(testArchitecture, {
    sortKeys: false,
    defaultFlowStyle: false,
    lineWidth: -1
  });
  await fs.writeFile(archYamlPath, yamlContent, 'utf8');
  console.log(`   Created: ${archYamlPath}`);
  console.log('\n   YAML content:');
  console.log('   ' + yamlContent.split('\n').join('\n   '));

  // Step 3: Create Python wrapper script
  console.log('\n🐍 Creating Python test script...');
  const pythonScript = `#!/usr/bin/env python3
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
        print("\\n=== Running test_mesh_multi_cgra_universal ===")
        test_mesh_multi_cgra_universal(cmdline_opts, arch_yaml_path)
        print("✓ test_mesh_multi_cgra_universal completed")
    except Exception as e:
        print(f"✗ test_mesh_multi_cgra_universal failed: {e}")
        import traceback
        traceback.print_exc()
        success = False
    
    try:
        print("\\n=== Running test_simplified_multi_cgra ===")
        test_simplified_multi_cgra(cmdline_opts, arch_yaml_path)
        print("✓ test_simplified_multi_cgra completed")
    except Exception as e:
        print(f"✗ test_simplified_multi_cgra failed: {e}")
        import traceback
        traceback.print_exc()
        success = False
    
    # List generated files
    print("\\n=== Generated Verilog files ===")
    for f in sorted(os.listdir('.')):
        if f.endswith('.v'):
            size = os.path.getsize(f)
            print(f"  {f} ({size:,} bytes)")
    
    if success:
        print("\\n✓ Verilog generation completed successfully")
        sys.exit(0)
    else:
        print("\\n✗ Verilog generation completed with errors")
        sys.exit(1)

if __name__ == '__main__':
    main()
`;

  const pythonScriptPath = path.join(TEST_DIR, 'run_test.py');
  await fs.writeFile(pythonScriptPath, pythonScript, 'utf8');
  console.log(`   Created: ${pythonScriptPath}`);

  // Step 4: Verify Docker image
  console.log('\n🐳 Verifying Docker image...');
  try {
    await execAsync(`docker image inspect ${DOCKER_IMAGE}`);
    console.log(`   ✓ Docker image found: ${DOCKER_IMAGE}`);
  } catch (error) {
    console.error(`   ✗ Docker image not found: ${DOCKER_IMAGE}`);
    console.error(`   Build it with: cd cgra-flow-docker && docker build -t ${DOCKER_IMAGE} .`);
    process.exit(1);
  }

  // Step 5: Run VectorCGRA test in Docker
  console.log('\n🚀 Running VectorCGRA test in Docker...');
  const absoluteArchYaml = path.resolve(archYamlPath);
  const absoluteVerilogDir = path.resolve(verilogDir);
  const absolutePythonScript = path.resolve(pythonScriptPath);

  const dockerCommand = [
    'docker run --rm',
    `-v "${absoluteArchYaml}:/tmp/architecture.yaml"`,
    `-v "${absoluteVerilogDir}:/tmp/verilog"`,
    `-v "${absolutePythonScript}:/tmp/run_test.py"`,
    DOCKER_IMAGE,
    'bash -c "source /cgra/venv/bin/activate && cd /cgra && python3 /tmp/run_test.py"'
  ].join(' ');

  console.log(`   Command: ${dockerCommand}\n`);

  try {
    const { stdout, stderr } = await execAsync(dockerCommand, {
      timeout: 300000, // 5 minutes
      maxBuffer: 50 * 1024 * 1024
    });

    console.log('=== STDOUT ===');
    console.log(stdout);
    
    if (stderr) {
      console.log('\n=== STDERR ===');
      console.log(stderr);
    }

    // Step 6: Check generated files
    console.log('\n📊 Checking generated Verilog files...');
    const files = await fs.readdir(verilogDir);
    const verilogFiles = files.filter(f => f.endsWith('.v'));

    if (verilogFiles.length === 0) {
      console.log('   ✗ No Verilog files generated');
      process.exit(1);
    }

    console.log(`   ✓ Found ${verilogFiles.length} Verilog file(s):`);
    for (const file of verilogFiles) {
      const filePath = path.join(verilogDir, file);
      const stats = await fs.stat(filePath);
      console.log(`     - ${file} (${stats.size.toLocaleString()} bytes)`);
    }

    // Show first few lines of first Verilog file
    const firstVerilog = path.join(verilogDir, verilogFiles[0]);
    const content = await fs.readFile(firstVerilog, 'utf8');
    const lines = content.split('\n').slice(0, 10);
    console.log(`\n📄 First 10 lines of ${verilogFiles[0]}:`);
    lines.forEach(line => console.log(`   ${line}`));

    console.log('\n✅ Test PASSED: VectorCGRA successfully generated Verilog!');
    process.exit(0);

  } catch (error) {
    console.error('\n❌ Test FAILED:');
    console.error(error.message);
    
    if (error.stdout) {
      console.log('\n=== STDOUT ===');
      console.log(error.stdout);
    }
    
    if (error.stderr) {
      console.log('\n=== STDERR ===');
      console.log(error.stderr);
    }

    // Check if any files were generated despite error
    try {
      const files = await fs.readdir(verilogDir);
      const verilogFiles = files.filter(f => f.endsWith('.v'));
      if (verilogFiles.length > 0) {
        console.log(`\n⚠️  Note: ${verilogFiles.length} Verilog file(s) were generated despite errors`);
      }
    } catch (e) {
      // Ignore
    }

    process.exit(1);
  }
}

main().catch(error => {
  console.error('Fatal error:', error);
  process.exit(1);
});
