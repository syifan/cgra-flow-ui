/**
 * AI CGRA Configuration Extractor
 * Parses AI responses and extracts validated CGRA configurations
 */

import { getAllFunctionUnits, getUnitForInstruction, FUNCTION_UNIT_TO_INSTRUCTIONS } from '../../shared/functionalUnitMapping.js';

// Valid parameter ranges for validation
const VALID_CONFIG_RANGES = {
  cgra_rows: { min: 2, max: 8 },
  cgra_columns: { min: 2, max: 8 },
  configMemSize: [8, 16, 32, 64, 128, 256, 512],
  data_spm_kb: [4, 8, 16, 32, 64],
  multi_cgra_rows: { min: 1, max: 4 },
  multi_cgra_columns: { min: 1, max: 4 }
};

// Default FU types - derived from the canonical source in functionalUnitMapping.js
const DEFAULT_FU_TYPES = getAllFunctionUnits();

/**
 * Validate and fix a single configuration
 * @param {Object} config - Raw configuration from AI
 * @returns {Object} - { config: fixedConfig, fixes: string[] }
 */
export function validateAndFixConfig(config) {
  const fixedConfig = {};
  const fixes = [];

  // Validate cgra_rows
  let rows = config.cgra_rows ?? config.rows ?? 4;
  rows = parseInt(rows, 10);
  if (isNaN(rows) || rows < VALID_CONFIG_RANGES.cgra_rows.min) {
    fixes.push(`cgra_rows ${rows} -> ${VALID_CONFIG_RANGES.cgra_rows.min} (min)`);
    rows = VALID_CONFIG_RANGES.cgra_rows.min;
  } else if (rows > VALID_CONFIG_RANGES.cgra_rows.max) {
    fixes.push(`cgra_rows ${rows} -> ${VALID_CONFIG_RANGES.cgra_rows.max} (max)`);
    rows = VALID_CONFIG_RANGES.cgra_rows.max;
  }
  fixedConfig.cgra_rows = rows;

  // Validate cgra_columns
  let cols = config.cgra_columns ?? config.columns ?? 4;
  cols = parseInt(cols, 10);
  if (isNaN(cols) || cols < VALID_CONFIG_RANGES.cgra_columns.min) {
    fixes.push(`cgra_columns ${cols} -> ${VALID_CONFIG_RANGES.cgra_columns.min} (min)`);
    cols = VALID_CONFIG_RANGES.cgra_columns.min;
  } else if (cols > VALID_CONFIG_RANGES.cgra_columns.max) {
    fixes.push(`cgra_columns ${cols} -> ${VALID_CONFIG_RANGES.cgra_columns.max} (max)`);
    cols = VALID_CONFIG_RANGES.cgra_columns.max;
  }
  fixedConfig.cgra_columns = cols;

  // Validate configMemSize (must be in valid list)
  let cfgMem = config.configMemSize ?? config.config_mem_size ?? 64;
  cfgMem = parseInt(cfgMem, 10);
  if (isNaN(cfgMem) || !VALID_CONFIG_RANGES.configMemSize.includes(cfgMem)) {
    const nearest = findNearestValid(cfgMem, VALID_CONFIG_RANGES.configMemSize);
    fixes.push(`configMemSize ${cfgMem} -> ${nearest} (nearest valid)`);
    cfgMem = nearest;
  }
  fixedConfig.configMemSize = cfgMem;

  // Validate data_spm_kb (must be in valid list)
  let dataMem = config.data_spm_kb ?? config.data_mem_size ?? 8;
  dataMem = parseInt(dataMem, 10);
  if (isNaN(dataMem) || !VALID_CONFIG_RANGES.data_spm_kb.includes(dataMem)) {
    const nearest = findNearestValid(dataMem, VALID_CONFIG_RANGES.data_spm_kb);
    fixes.push(`data_spm_kb ${dataMem} -> ${nearest} (nearest valid)`);
    dataMem = nearest;
  }
  fixedConfig.data_spm_kb = dataMem;

  // Validate multi_cgra_rows
  let mcRows = config.multi_cgra_rows ?? 1;
  mcRows = parseInt(mcRows, 10);
  if (isNaN(mcRows) || mcRows < VALID_CONFIG_RANGES.multi_cgra_rows.min) {
    mcRows = VALID_CONFIG_RANGES.multi_cgra_rows.min;
    fixes.push(`multi_cgra_rows -> ${mcRows}`);
  } else if (mcRows > VALID_CONFIG_RANGES.multi_cgra_rows.max) {
    mcRows = VALID_CONFIG_RANGES.multi_cgra_rows.max;
    fixes.push(`multi_cgra_rows -> ${mcRows}`);
  }
  fixedConfig.multi_cgra_rows = mcRows;

  // Validate multi_cgra_columns
  let mcCols = config.multi_cgra_columns ?? 1;
  mcCols = parseInt(mcCols, 10);
  if (isNaN(mcCols) || mcCols < VALID_CONFIG_RANGES.multi_cgra_columns.min) {
    mcCols = VALID_CONFIG_RANGES.multi_cgra_columns.min;
    fixes.push(`multi_cgra_columns -> ${mcCols}`);
  } else if (mcCols > VALID_CONFIG_RANGES.multi_cgra_columns.max) {
    mcCols = VALID_CONFIG_RANGES.multi_cgra_columns.max;
    fixes.push(`multi_cgra_columns -> ${mcCols}`);
  }
  fixedConfig.multi_cgra_columns = mcCols;

  // Validate fu_types - normalize instruction names to FU names
  let fuTypes = config.fu_types ?? DEFAULT_FU_TYPES;
  if (Array.isArray(fuTypes)) {
    // Map each entry: if it's a valid FU name keep it, if it's an instruction name resolve to its FU
    const resolvedFus = new Set();
    const invalidEntries = [];
    for (const entry of fuTypes) {
      if (DEFAULT_FU_TYPES.includes(entry)) {
        resolvedFus.add(entry);
      } else {
        // Try to resolve as an instruction name
        const unit = getUnitForInstruction(entry);
        if (unit) {
          resolvedFus.add(unit);
        } else {
          invalidEntries.push(entry);
        }
      }
    }
    if (invalidEntries.length > 0) {
      fixes.push(`Resolved/removed invalid FU types: ${invalidEntries.join(', ')}`);
    }
    fixedConfig.fu_types = resolvedFus.size > 0 ? [...resolvedFus] : DEFAULT_FU_TYPES;
  } else {
    fixedConfig.fu_types = DEFAULT_FU_TYPES;
  }

  // Keep explanation
  fixedConfig.explanation = config.explanation ?? '';

  return { config: fixedConfig, fixes };
}

/**
 * Find nearest valid value from a list
 */
function findNearestValid(value, validList) {
  return validList.reduce((prev, curr) =>
    Math.abs(curr - value) < Math.abs(prev - value) ? curr : prev
  );
}

/**
 * Extract CGRA configuration from AI response
 * @param {string} aiResponse - Full AI response text
 * @returns {Object|null} - Extracted configurations or null
 */
export function extractCgraConfig(aiResponse) {
  try {
    // Find JSON block in response
    const jsonMatch = aiResponse.match(/```json\s*([\s\S]*?)\s*```/);
    if (!jsonMatch) {
      return null;
    }

    const configStr = jsonMatch[1];
    const parsed = JSON.parse(configStr);

    const configs = {
      high_performance: null,
      balanced: null,
      low_power: null
    };

    // Extract and validate each mode
    if (parsed.high_performance) {
      const { config, fixes } = validateAndFixConfig(parsed.high_performance);
      configs.high_performance = config;
      if (fixes.length > 0) {
        console.log('High performance config auto-fixed:', fixes);
      }
    }

    if (parsed.balanced) {
      const { config, fixes } = validateAndFixConfig(parsed.balanced);
      configs.balanced = config;
      if (fixes.length > 0) {
        console.log('Balanced config auto-fixed:', fixes);
      }
    }

    if (parsed.low_power) {
      const { config, fixes } = validateAndFixConfig(parsed.low_power);
      configs.low_power = config;
      if (fixes.length > 0) {
        console.log('Low power config auto-fixed:', fixes);
      }
    }

    // Check if any valid config was extracted
    if (!configs.high_performance && !configs.balanced && !configs.low_power) {
      return null;
    }

    return configs;
  } catch (error) {
    console.warn('Failed to extract CGRA config:', error);
    return null;
  }
}

/**
 * Get default FU types list
 * @returns {string[]} Default FU types
 */
export function getDefaultFuTypes() {
  return [...DEFAULT_FU_TYPES];
}
