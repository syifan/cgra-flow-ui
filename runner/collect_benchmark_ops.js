#!/usr/bin/env node
// Scans Neura MLIR benchmarks from the Docker container to collect required
// operations per benchmark and writes a consolidated index usable by the frontend.

import fs from 'fs';
import path from 'path';
import crypto from 'crypto';
import { exec } from 'child_process';
import { promisify } from 'util';

const execAsync = promisify(exec);

// Docker configuration - matches mappingExecutor.js
const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra-flow:latest';
const DOCKER_BENCHMARK_DIR = process.env.DOCKER_BENCHMARK_DIR || '/cgra/dataflow/test/e2e';
const OUTPUT_PATH = path.resolve(process.cwd(), 'public/benchmark_ops_index.json');

// Map MLIR neura op names to architecture operation strings.
const OPERATION_MAP = {
  phi: 'phi',
  select: 'sel',
  sel: 'sel',
  shl: 'shl',
  shift: 'shl',
  add: 'add',
  sub: 'sub',
  mul: 'mul',
  div: 'div',
  rem: 'rem',
  fadd: 'fadd',
  fsub: 'fsub',
  fmul: 'fmul',
  fdiv: 'fdiv',
  fmul_fadd: 'fmul_fadd',
  fadd_fadd: 'fadd_fadd',
  mac: 'mac',
  icmp: 'icmp',
  fcmp: 'fcmp',
  not: 'not',
  selp: 'sel',
  load: 'load',
  store: 'store',
  load_indexed: 'load',
  store_indexed: 'store',
  gep: 'gep',
  cast: 'cast',
  sext: 'sext',
  zext: 'zext',
  constant: 'constant',
  grant_once: 'grant_once',
  grant_predicate: 'grant_predicate',
  grant_always: 'grant_always',
  reserve: 'reserve',
  data_mov: 'data_mov',
  ctrl_mov: 'ctrl_mov',
  loop_control: 'loop_control',
  memset: 'memset',
  return: 'return'
};

const mapOp = (op) => OPERATION_MAP[op] || op;

const collectNeuraOpsFromText = (text) => {
  const regex = /\bneura\.([A-Za-z0-9_]+)\b/g;
  const raw = new Set();
  let match;
  while ((match = regex.exec(text)) !== null) {
    raw.add(match[1]);
  }
  const mapped = new Set();
  raw.forEach((op) => mapped.add(mapOp(op)));
  return { raw: Array.from(raw).sort(), ops: Array.from(mapped).sort() };
};

const hashContent = (content) => {
  const h = crypto.createHash('sha1');
  h.update(content);
  return h.digest('hex');
};

/**
 * Verify Docker image exists
 */
const verifyDockerImage = async () => {
  try {
    await execAsync(`docker image inspect ${DOCKER_IMAGE}`);
  } catch (error) {
    throw new Error(
      `Docker image "${DOCKER_IMAGE}" not found. ` +
      `Build it from the cgra-flow-docker directory using: docker build -t ${DOCKER_IMAGE} .`
    );
  }
};

/**
 * List benchmark directories from Docker container
 */
const listBenchmarksFromDocker = async () => {
  const { stdout } = await execAsync(
    `docker run --rm ${DOCKER_IMAGE} ls -1 ${DOCKER_BENCHMARK_DIR}`
  );
  return stdout.trim().split('\n').filter(Boolean);
};

/**
 * Read MLIR file content from Docker container
 */
const readFileFromDocker = async (filePath) => {
  const { stdout } = await execAsync(
    `docker run --rm ${DOCKER_IMAGE} cat "${filePath}"`
  );
  return stdout;
};

/**
 * List MLIR files in a benchmark directory from Docker container
 */
const listMlirFilesFromDocker = async (benchmarkName) => {
  const benchPath = `${DOCKER_BENCHMARK_DIR}/${benchmarkName}`;
  try {
    const { stdout } = await execAsync(
      `docker run --rm ${DOCKER_IMAGE} find "${benchPath}" -maxdepth 1 -name "*.mlir" -type f`
    );
    return stdout.trim().split('\n').filter(Boolean);
  } catch {
    return [];
  }
};

/**
 * Collect benchmark info from Docker container
 */
const collectBenchmarkFromDocker = async (benchmarkName) => {
  const mlirFiles = await listMlirFilesFromDocker(benchmarkName);

  if (mlirFiles.length === 0) return null;

  const allRaw = new Set();
  const allOps = new Set();
  const fileHashes = {};

  for (const filePath of mlirFiles) {
    const content = await readFileFromDocker(filePath);
    const { raw, ops } = collectNeuraOpsFromText(content);
    raw.forEach((r) => allRaw.add(r));
    ops.forEach((o) => allOps.add(o));
    fileHashes[path.basename(filePath)] = hashContent(content);
  }

  return {
    name: benchmarkName,
    path: `${DOCKER_BENCHMARK_DIR}/${benchmarkName}`,
    ops: Array.from(allOps).sort(),
    raw_ops: Array.from(allRaw).sort(),
    files: mlirFiles.map((p) => path.basename(p)).sort(),
    file_hashes: fileHashes
  };
};

/**
 * Scan benchmarks from Docker container
 */
const scan = async () => {
  await verifyDockerImage();

  const benchmarkNames = await listBenchmarksFromDocker();
  // eslint-disable-next-line no-console
  console.log(`Found ${benchmarkNames.length} potential benchmark directories`);

  const results = [];
  for (const name of benchmarkNames) {
    const benchmark = await collectBenchmarkFromDocker(name);
    if (benchmark) {
      results.push(benchmark);
    }
  }

  return results;
};

const main = async () => {
  try {
    const benchmarks = await scan();
    const payload = {
      generated_at: new Date().toISOString(),
      docker_image: DOCKER_IMAGE,
      benchmark_root: DOCKER_BENCHMARK_DIR,
      benchmarks
    };

    fs.mkdirSync(path.dirname(OUTPUT_PATH), { recursive: true });
    fs.writeFileSync(OUTPUT_PATH, JSON.stringify(payload, null, 2));
    // eslint-disable-next-line no-console
    console.log(`Wrote ${benchmarks.length} benchmarks to ${OUTPUT_PATH}`);
  } catch (err) {
    // eslint-disable-next-line no-console
    console.error('Failed to collect benchmark ops:', err.message);
    process.exitCode = 1;
  }
};

if (import.meta.url === `file://${process.argv[1]}`) {
  main();
}
