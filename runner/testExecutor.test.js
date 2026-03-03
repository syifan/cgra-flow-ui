/**
 * Unit tests for testExecutor.js — cases.txt parser.
 *
 * Run with: node --test testExecutor.test.js
 */

import { test } from 'node:test';
import assert from 'node:assert/strict';
import path from 'path';
import { fileURLToPath } from 'url';
import { parseCasesFile } from './testExecutor.js';

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const CASES_FILE = path.resolve(__dirname, '../run_tests/cases.txt');

test('parseCasesFile returns an array of cases', async () => {
  const cases = await parseCasesFile(CASES_FILE);
  assert.ok(Array.isArray(cases), 'should return an array');
  assert.ok(cases.length > 0, 'should have at least one case');
});

test('every case has required fields', async () => {
  const cases = await parseCasesFile(CASES_FILE);
  for (const c of cases) {
    assert.ok(typeof c.label === 'string' && c.label.length > 0, `label should be non-empty string: ${JSON.stringify(c)}`);
    assert.ok(typeof c.cmd === 'string' && c.cmd.startsWith('pytest'), `cmd should start with pytest: ${JSON.stringify(c)}`);
    assert.ok(typeof c.file === 'string' && c.file.length > 0, `file should be non-empty string: ${JSON.stringify(c)}`);
    assert.ok(c.caseName === null || typeof c.caseName === 'string', `caseName should be null or string: ${JSON.stringify(c)}`);
  }
});

test('CtrlMemDynamicRTL parses correctly', async () => {
  const cases = await parseCasesFile(CASES_FILE);
  const c = cases.find((x) => x.file === 'mem/ctrl/test/CtrlMemDynamicRTL_test.py');
  assert.ok(c, 'should find CtrlMemDynamicRTL case');
  assert.equal(c.caseName, null);
  assert.equal(c.label, 'CtrlMemDynamicRTL');
  assert.ok(c.cmd.includes('-xvs'), 'cmd should include -xvs');
});

test('test with explicit ::caseName is parsed correctly', async () => {
  const cases = await parseCasesFile(CASES_FILE);
  const c = cases.find((x) => x.caseName === 'test_verilog_homo_2x2_4x4');
  assert.ok(c, 'should find test_verilog_homo_2x2_4x4 case');
  assert.equal(c.file, 'multi_cgra/test/MeshMultiCgraRTL_test.py');
  assert.equal(c.caseName, 'test_verilog_homo_2x2_4x4');
});

test('FIR scalar translation case has correct caseName', async () => {
  const cases = await parseCasesFile(CASES_FILE);
  const c = cases.find((x) => x.caseName === 'test_multi_CGRA_fir_scalar_translation');
  assert.ok(c, 'should find FIR scalar translation case');
  assert.equal(c.file, 'multi_cgra/test/MeshMultiCgraRTL_test.py');
});

test('Ring network case has no caseName (whole-file target)', async () => {
  const cases = await parseCasesFile(CASES_FILE);
  const c = cases.find((x) => x.file === 'noc/PyOCN/pymtl3_net/ringnet/test/RingNetworkRTL_test.py');
  assert.ok(c, 'should find ring network case');
  assert.equal(c.caseName, null);
});

test('file paths do not start with ../', async () => {
  const cases = await parseCasesFile(CASES_FILE);
  for (const c of cases) {
    assert.ok(!c.file.startsWith('../'), `file should not start with ../ : ${c.file}`);
  }
});

test('parseCasesFile throws on missing file', async () => {
  await assert.rejects(
    () => parseCasesFile('/nonexistent/path/cases.txt'),
    /Cannot read cases file/
  );
});
