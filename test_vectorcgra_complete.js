#!/usr/bin/env node
/**
 * Complete test with all dependencies
 */

import { promises as fs } from 'fs';
import path from 'path';
import { exec } from 'child_process';
import { promisify } from 'util';
import yaml from 'js-yaml';

const execAsync = promisify(exec);

const TEST_DIR = './test_vectorcgra';
const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra/cgra-flow:ui';

const testArchitecture = {
  architecture: { name: 'NeuraMultiCgra', version: '1.0' },
  multi_cgra_defaults: {
    base_topology: 'mesh',
    rows: 1,
    columns: 1,
    memory: { capacity: 256, 'data bitwidth': 64, 'vector lanes': 1 }
  },
  cgra_defaults: { rows: 2, columns: 2, configMemSize: 64, 'per bank sram': 8 },
  tile_defaults: { num_registers: 16, fu_types: ['alu', 'mul', 'lsu', 'rhaul', 'rhauld'] }
};

async function main() {
  console.log('🧪 VectorCGRA Complete Test\n');

  await fs.mkdir(TEST_DIR, { recursive: true });
  const verilogDir = path.join(TEST_DIR, 'verilog');
  await fs.mkdir(verilogDir, { recursive: true });

  const archYamlPath = path.join(TEST_DIR, 'architecture.yaml');
  await fs.writeFile(archYamlPath, yaml.dump(testArchitecture, { sortKeys: false, lineWidth: -1 }));
  console.log('✓ Created architecture.yaml');

  const absoluteArchYaml = path.resolve(archYamlPath);
  const absoluteVerilogDir = path.resolve(verilogDir);

  const dockerCommand = [
    'docker run --rm',
    `-v "${absoluteArchYaml}:/tmp/architecture.yaml"`,
    `-v "${absoluteVerilogDir}:/tmp/verilog"`,
    DOCKER_IMAGE,
    'bash -c',
    `"cd /cgra/VectorCGRA && git submodule update --init --recursive && source /cgra/venv/bin/activate && pip install pyyaml && cd /cgra && python3 -c \\"from VectorCGRA.multi_cgra.test.MeshMultiCgraTemplateRTL_test import test_mesh_multi_cgra_universal, test_simplified_multi_cgra; import os; os.chdir('/tmp/verilog'); opts = {'test_verilog': 'zeros', 'test_yosys_verilog': '', 'dump_textwave': False, 'dump_vcd': False, 'dump_vtb': False, 'max_cycles': None}; test_mesh_multi_cgra_universal(opts, '/tmp/architecture.yaml'); test_simplified_multi_cgra(opts, '/tmp/architecture.yaml'); print('SUCCESS')\\""`
  ].join(' ');

  console.log('🚀 Running VectorCGRA test (this may take a few minutes)...\n');

  try {
    const { stdout, stderr } = await execAsync(dockerCommand, {
      timeout: 600000,
      maxBuffer: 50 * 1024 * 1024
    });

    console.log(stdout);
    if (stderr && !stderr.includes('Cloning')) console.log('STDERR:', stderr);

    const files = await fs.readdir(verilogDir);
    const verilogFiles = files.filter(f => f.endsWith('.v'));

    if (verilogFiles.length === 0) {
      console.log('\n⚠️  No Verilog files generated');
      process.exit(1);
    }

    console.log(`\n✅ SUCCESS! Generated ${verilogFiles.length} Verilog file(s):`);
    for (const file of verilogFiles) {
      const stats = await fs.stat(path.join(verilogDir, file));
      console.log(`  - ${file} (${stats.size.toLocaleString()} bytes)`);
    }

    // Show snippet of first file
    const firstFile = path.join(verilogDir, verilogFiles[0]);
    const content = await fs.readFile(firstFile, 'utf8');
    const lines = content.split('\n').slice(0, 20);
    console.log(`\n📄 First 20 lines of ${verilogFiles[0]}:`);
    lines.forEach(line => console.log(`   ${line}`));

  } catch (error) {
    console.error('\n❌ FAILED:', error.message);
    if (error.stdout) console.log('\nSTDOUT:', error.stdout);
    if (error.stderr) console.log('\nSTDERR:', error.stderr);
    process.exit(1);
  }
}

main();
