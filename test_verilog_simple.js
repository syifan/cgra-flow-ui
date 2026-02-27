#!/usr/bin/env node
/**
 * Simple Verilog generation test using the working test function
 */

import { promises as fs } from 'fs';
import path from 'path';
import { exec } from 'child_process';
import { promisify } from 'util';

const execAsync = promisify(exec);

const TEST_DIR = './test_vectorcgra';
const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra/cgra-flow:ui';

async function main() {
  console.log('🧪 Verilog Generation Test (using CgraTemplateRTL_test)\n');

  const verilogDir = path.join(TEST_DIR, 'verilog');
  await fs.mkdir(verilogDir, { recursive: true });

  const absoluteVerilogDir = path.resolve(verilogDir);
  const absoluteScriptDir = path.resolve(TEST_DIR);

  const dockerCommand = `docker run --rm -v "${absoluteVerilogDir}:/tmp/verilog" -v "${absoluteScriptDir}/gen_verilog.py:/tmp/gen_verilog.py" ${DOCKER_IMAGE} bash -c "source /cgra/venv/bin/activate && python3 /tmp/gen_verilog.py"`;

  console.log('🚀 Running VectorCGRA test...\n');

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
      console.log(`  - ${file} (${(stats.size / 1024).toFixed(1)} KB)`);
    }

    // Show snippet
    const sverilogFile = verilogFiles.find(f => f.includes('pickled'));
    if (sverilogFile) {
      const content = await fs.readFile(path.join(verilogDir, sverilogFile), 'utf8');
      const lines = content.split('\n').slice(0, 15);
      console.log(`\n📄 First 15 lines of ${sverilogFile}:`);
      lines.forEach(line => console.log(`   ${line}`));
    }

  } catch (error) {
    console.error('\n❌ FAILED:', error.message);
    if (error.stdout) console.log('\nSTDOUT:', error.stdout);
    if (error.stderr) console.log('\nSTDERR:', error.stderr);
    process.exit(1);
  }
}

main();
