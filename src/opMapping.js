// Shared operation mapping utilities between frontend checks and converter expectations

export const OPERATION_MAP = {
  phi: 'phi',
  shift: 'shl',
  shl: 'shl',
  select: 'sel',
  sel: 'sel',
  mac: 'mac',
  return: 'return',
  logic: 'logic',
  load: 'load',
  store: 'store',
  compare: 'icmp',
  icmp: 'icmp',
  not: 'not',
  add: 'add',
  mul: 'mul',
  grant_once: 'grant_once',
  grantOnce: 'grant_once',
  grant_predicate: 'grant_predicate',
  grantPredicate: 'grant_predicate',
  gep: 'gep',
  data_mov: 'data_mov',
  ctrl_mov: 'ctrl_mov',
  reserve: 'reserve',
  constant: 'constant',
  zext: 'zext',
  sext: 'sext',
  cast: 'cast',
  fadd: 'fadd',
  fmul: 'fmul',
  fsub: 'fsub',
  fdiv: 'fdiv',
  fmul_fadd: 'fmul_fadd',
  fadd_fadd: 'fadd_fadd',
  memset: 'memset',
  loop_control: 'loop_control'
};

export const mapFunctionalUnitKeyToOp = (key) => OPERATION_MAP[key] || key;

export const functionalUnitsToOps = (tileFunctionalUnits = {}) => {
  const ops = [];
  Object.entries(tileFunctionalUnits || {}).forEach(([key, enabled]) => {
    if (enabled) {
      const mapped = mapFunctionalUnitKeyToOp(key);
      if (mapped) ops.push(mapped);
    }
  });
  return Array.from(new Set(ops));
};

export const collectArchitectureOps = (architecture) => {
  const ops = new Set();
  const cgras = architecture?.CGRAs || [];
  cgras.forEach((cgra) => {
    (cgra?.PEs || []).forEach((pe) => {
      if (pe?.disabled) return;
      functionalUnitsToOps(pe.tileFunctionalUnits).forEach((op) => ops.add(op));
    });
  });
  return ops;
};
