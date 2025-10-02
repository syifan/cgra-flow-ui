import { useMemo, useState } from 'react';
import Panel from './components/Panel.jsx';
import ToggleSwitch from './components/ToggleSwitch.jsx';
import StatBadge from './components/StatBadge.jsx';
import './styles/app.scss';

const kernels = [
  { id: 'fir', name: 'FIR Filter', description: 'Streaming DSP kernel' },
  { id: 'matmul', name: 'Matrix Multiply', description: 'Dense compute kernel' },
  { id: 'fft', name: 'FFT', description: 'Signal processing kernel' }
];

const layouts = ['Snake', 'Row Major', 'Column Major'];
const pipelines = ['Default', 'Aggressive', 'Energy Efficient'];

const heuristics = [
  { id: 'balance', label: 'Balance Ops' },
  { id: 'coalesce', label: 'Coalesce Memory' },
  { id: 'pipelining', label: 'Enable Pipelining' },
  { id: 'unroll', label: 'Loop Unrolling' },
  { id: 'dse', label: 'Design Space Exploration' }
];

const mapperOptions = ['ILP', 'Simulated Annealing', 'Greedy'];

const initialLog = [
  { id: 1, message: 'Loaded kernel fir_graph.json', level: 'info' },
  { id: 2, message: 'DFG validation completed', level: 'success' }
];

function App() {
  const [selectedKernel, setSelectedKernel] = useState(kernels[0].id);
  const [config, setConfig] = useState({
    architecture: 'AIE Tile',
    tileRows: 4,
    tileCols: 4,
    bitWidth: 16,
    vectorLength: 8,
    routingMode: 'Dynamic',
    enableDebug: true,
    powerCap: 35,
    heuristicSettings: Object.fromEntries(heuristics.map((h) => [h.id, true])),
    mapper: mapperOptions[0],
    pipeline: pipelines[0],
    layout: layouts[0],
    autoClockGating: true,
    autoPlaceRegisters: false
  });
  const [log, setLog] = useState(initialLog);
  const [status, setStatus] = useState('Idle');

  const selectedKernelInfo = useMemo(
    () => kernels.find((kernel) => kernel.id === selectedKernel),
    [selectedKernel]
  );

  const handleConfigChange = (key, value) => {
    setConfig((prev) => ({
      ...prev,
      [key]: value
    }));
  };

  const toggleHeuristic = (id) => {
    setConfig((prev) => ({
      ...prev,
      heuristicSettings: {
        ...prev.heuristicSettings,
        [id]: !prev.heuristicSettings[id]
      }
    }));
  };

  const appendLog = (message, level = 'info') => {
    setLog((prev) => [
      ...prev,
      {
        id: prev.length + 1,
        message,
        level
      }
    ]);
  };

  const handleRun = () => {
    setStatus('Compiling kernel…');
    appendLog(`Compiling ${selectedKernelInfo?.name ?? 'kernel'} with ${config.mapper} mapper`);

    setTimeout(() => {
      setStatus('Mapping dataflow graph…');
      appendLog('Generating mapping directives', 'info');
    }, 400);

    setTimeout(() => {
      setStatus('Complete');
      appendLog('Mapping completed successfully', 'success');
    }, 1200);
  };

  const handleReset = () => {
    setStatus('Idle');
    setLog([...initialLog]);
    setConfig((prev) => ({
      ...prev,
      tileRows: 4,
      tileCols: 4,
      bitWidth: 16,
      vectorLength: 8
    }));
  };

  return (
    <div className="app-shell">
      <header className="app-header">
        <div>
          <h1>CGRA-Flow Interactive Workspace</h1>
          <p>Design, explore, and map kernels onto coarse-grained reconfigurable architectures.</p>
        </div>
        <div className="header-actions">
          <StatBadge label="Status" value={status} variant={status === 'Complete' ? 'success' : 'info'} inline />
          <button type="button" className="outline" onClick={handleReset}>
            Reset
          </button>
          <button type="button" onClick={handleRun}>
            Compile &amp; Map
          </button>
        </div>
      </header>
      <div className="workspace">
        <aside className="left-pane">
          <Panel title="Dataflow Graph">
            <div className="graph-preview">
              <div className="graph-grid">
                {Array.from({ length: 9 }).map((_, index) => (
                  <div key={index} className="graph-node">
                    <span>{index + 1}</span>
                  </div>
                ))}
              </div>
              <p className="graph-caption">Abstract representation of the current DFG.</p>
            </div>
          </Panel>
          <Panel title="Kernel Library" subtitle="Select a kernel to configure">
            <ul className="kernel-list">
              {kernels.map((kernel) => (
                <li key={kernel.id} className={kernel.id === selectedKernel ? 'active' : ''}>
                  <button type="button" onClick={() => setSelectedKernel(kernel.id)}>
                    <div className="kernel-name">{kernel.name}</div>
                    <div className="kernel-description">{kernel.description}</div>
                  </button>
                </li>
              ))}
            </ul>
          </Panel>
          <Panel title="Data Resources">
            <div className="resource-list">
              <label className="resource-item">
                Input DFG
                <input type="text" value={`graphs/${selectedKernel}.json`} readOnly />
              </label>
              <label className="resource-item">
                Kernel Parameters
                <input type="text" value={`configs/${selectedKernel}.yaml`} readOnly />
              </label>
              <div className="resource-footnote">Paths mirror the original CGRA-Flow Python assets.</div>
            </div>
          </Panel>
        </aside>
        <main className="center-pane">
          <Panel title="Architecture Configuration">
            <div className="form-grid">
              <label>
                Architecture
                <select value={config.architecture} onChange={(event) => handleConfigChange('architecture', event.target.value)}>
                  <option>AIE Tile</option>
                  <option>Versal</option>
                  <option>Custom Mesh</option>
                </select>
              </label>
              <label>
                Tile Rows
                <input
                  type="number"
                  min="1"
                  value={config.tileRows}
                  onChange={(event) => handleConfigChange('tileRows', Number(event.target.value))}
                />
              </label>
              <label>
                Tile Columns
                <input
                  type="number"
                  min="1"
                  value={config.tileCols}
                  onChange={(event) => handleConfigChange('tileCols', Number(event.target.value))}
                />
              </label>
              <label>
                Bit Width
                <input
                  type="number"
                  min="1"
                  value={config.bitWidth}
                  onChange={(event) => handleConfigChange('bitWidth', Number(event.target.value))}
                />
              </label>
              <label>
                Vector Length
                <input
                  type="number"
                  min="1"
                  value={config.vectorLength}
                  onChange={(event) => handleConfigChange('vectorLength', Number(event.target.value))}
                />
              </label>
              <label>
                Routing Mode
                <select value={config.routingMode} onChange={(event) => handleConfigChange('routingMode', event.target.value)}>
                  <option>Dynamic</option>
                  <option>Static</option>
                  <option>Hybrid</option>
                </select>
              </label>
            </div>
            <div className="toggle-row">
              <ToggleSwitch
                id="debug"
                label="Enable Debug"
                checked={config.enableDebug}
                onCheckedChange={(value) => handleConfigChange('enableDebug', value)}
              />
              <ToggleSwitch
                id="clock-gating"
                label="Automatic Clock Gating"
                checked={config.autoClockGating}
                onCheckedChange={(value) => handleConfigChange('autoClockGating', value)}
              />
              <ToggleSwitch
                id="registers"
                label="Auto Register Placement"
                checked={config.autoPlaceRegisters}
                onCheckedChange={(value) => handleConfigChange('autoPlaceRegisters', value)}
              />
            </div>
            <div className="slider-field">
              <div>
                <span>Power Budget</span>
                <strong>{config.powerCap} W</strong>
              </div>
              <input
                type="range"
                min="10"
                max="75"
                value={config.powerCap}
                onChange={(event) => handleConfigChange('powerCap', Number(event.target.value))}
              />
            </div>
          </Panel>
          <Panel title="Mapping Parameters" subtitle="Align toolchain knobs with architecture goals">
            <div className="form-grid">
              <label>
                Mapper
                <select value={config.mapper} onChange={(event) => handleConfigChange('mapper', event.target.value)}>
                  {mapperOptions.map((option) => (
                    <option key={option}>{option}</option>
                  ))}
                </select>
              </label>
              <label>
                Pipeline Strategy
                <select value={config.pipeline} onChange={(event) => handleConfigChange('pipeline', event.target.value)}>
                  {pipelines.map((option) => (
                    <option key={option}>{option}</option>
                  ))}
                </select>
              </label>
              <label>
                Layout Preset
                <select value={config.layout} onChange={(event) => handleConfigChange('layout', event.target.value)}>
                  {layouts.map((layout) => (
                    <option key={layout}>{layout}</option>
                  ))}
                </select>
              </label>
            </div>
            <div className="heuristic-grid">
              {heuristics.map((heuristic) => (
                <ToggleSwitch
                  key={heuristic.id}
                  id={heuristic.id}
                  label={heuristic.label}
                  checked={config.heuristicSettings[heuristic.id]}
                  onCheckedChange={() => toggleHeuristic(heuristic.id)}
                />
              ))}
            </div>
          </Panel>
          <Panel title="Execution Overview">
            <div className="summary-grid">
              <StatBadge label="Tile Array" value={`${config.tileRows} x ${config.tileCols}`} />
              <StatBadge label="Vector" value={`${config.vectorLength}`} />
              <StatBadge label="Bit Width" value={`${config.bitWidth}-bit`} />
              <StatBadge label="Mapper" value={config.mapper} />
              <StatBadge label="Pipeline" value={config.pipeline} />
              <StatBadge label="Power" value={`${config.powerCap} W`} />
            </div>
          </Panel>
        </main>
        <aside className="right-pane">
          <Panel title="Layout Preview" subtitle="Shows placement strategy">
            <div className="layout-preview">
              <div className="layout-grid">
                {Array.from({ length: config.tileRows * config.tileCols }).map((_, index) => (
                  <div key={index} className="layout-cell">
                    <span>{(index % config.tileCols) + 1}</span>
                  </div>
                ))}
              </div>
              <div className="layout-legend">
                <span className="legend-item">
                  <span className="legend-color primary" />Compute Tile
                </span>
                <span className="legend-item">
                  <span className="legend-color accent" />Route Node
                </span>
              </div>
            </div>
          </Panel>
          <Panel title="Mapping Log">
            <div className="log-view">
              <ul>
                {log.map((entry) => (
                  <li key={entry.id} className={entry.level}>
                    <span className="level">[{entry.level.toUpperCase()}]</span>
                    <span>{entry.message}</span>
                  </li>
                ))}
              </ul>
            </div>
          </Panel>
          <Panel title="Next Actions">
            <div className="next-steps">
              <button type="button" className="outline">
                Export Mapping JSON
              </button>
              <button type="button" className="outline">
                Launch RTL Generator
              </button>
              <button type="button" className="outline">
                Open Console
              </button>
            </div>
          </Panel>
        </aside>
      </div>
    </div>
  );
}

export default App;
