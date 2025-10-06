import { useMemo, useState } from 'react';
import {
  Box,
  Button,
  Card,
  CardContent,
  CardHeader,
  Chip,
  Container,
  Divider,
  FormControlLabel,
  Grid,
  List,
  ListItem,
  ListItemButton,
  ListItemText,
  MenuItem,
  Paper,
  Slider,
  Stack,
  Switch,
  Tab,
  Tabs,
  TextField,
  Typography
} from '@mui/material';
import { alpha, useTheme } from '@mui/material/styles';
import AddIcon from '@mui/icons-material/Add';
import CloseIcon from '@mui/icons-material/Close';

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

const createDefaultConfig = (id, name) => ({
  id,
  name,
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

function App() {
  const theme = useTheme();
  const [selectedKernel, setSelectedKernel] = useState(kernels[0].id);
  const [cgras, setCgras] = useState([createDefaultConfig(1, 'CGRA 1')]);
  const [activeCgraId, setActiveCgraId] = useState(1);
  const [log, setLog] = useState(initialLog);
  const [status, setStatus] = useState('Idle');

  const activeCgra = cgras.find((c) => c.id === activeCgraId) || cgras[0];
  const config = activeCgra;

  const selectedKernelInfo = useMemo(
    () => kernels.find((kernel) => kernel.id === selectedKernel),
    [selectedKernel]
  );

  const handleConfigChange = (key, value) => {
    setCgras((prev) =>
      prev.map((cgra) =>
        cgra.id === activeCgraId
          ? {
              ...cgra,
              [key]: value
            }
          : cgra
      )
    );
  };

  const toggleHeuristic = (id) => {
    setCgras((prev) =>
      prev.map((cgra) =>
        cgra.id === activeCgraId
          ? {
              ...cgra,
              heuristicSettings: {
                ...cgra.heuristicSettings,
                [id]: !cgra.heuristicSettings[id]
              }
            }
          : cgra
      )
    );
  };

  const addCgra = () => {
    const newId = Math.max(...cgras.map((c) => c.id)) + 1;
    const newCgra = createDefaultConfig(newId, `CGRA ${newId}`);
    setCgras((prev) => [...prev, newCgra]);
    setActiveCgraId(newId);
  };

  const removeCgra = (id) => {
    if (cgras.length <= 1) return;
    setCgras((prev) => prev.filter((c) => c.id !== id));
    if (activeCgraId === id) {
      setActiveCgraId(cgras[0].id === id ? cgras[1].id : cgras[0].id);
    }
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
    setCgras((prev) =>
      prev.map((cgra) =>
        cgra.id === activeCgraId
          ? {
              ...cgra,
              tileRows: 4,
              tileCols: 4,
              bitWidth: 16,
              vectorLength: 8
            }
          : cgra
      )
    );
  };

  const statusColor = status === 'Complete' ? 'success' : status === 'Idle' ? 'default' : 'info';
  const levelColors = {
    info: theme.palette.info.light,
    success: theme.palette.success.main,
    warning: theme.palette.warning.main,
    error: theme.palette.error.main
  };

  return (
    <Box
      sx={{
        minHeight: '100vh',
        py: { xs: 4, md: 6 },
        background: 'radial-gradient(circle at top left, #1e293b, #0f172a 45%, #020617 100%)'
      }}
    >
      <Container maxWidth="xl">
        <Stack spacing={4}>
          <Stack
            direction={{ xs: 'column', md: 'row' }}
            spacing={3}
            alignItems={{ xs: 'flex-start', md: 'center' }}
            justifyContent="space-between"
          >
            <Box>
              <Typography variant="h4" component="h1" gutterBottom>
                CGRA-Flow Interactive Workspace
              </Typography>
              <Typography variant="body1" color="text.secondary">
                Design, explore, and map kernels onto coarse-grained reconfigurable architectures.
              </Typography>
            </Box>
            <Stack direction={{ xs: 'column', sm: 'row' }} spacing={2} alignItems="center">
              <Chip label={`Status: ${status}`} color={statusColor} variant={status === 'Idle' ? 'outlined' : 'filled'} />
              <Button variant="outlined" onClick={handleReset} color="inherit">
                Reset
              </Button>
              <Button variant="contained" onClick={handleRun}>
                Compile &amp; Map
              </Button>
            </Stack>
          </Stack>

          <Card>
            <CardContent sx={{ py: 2 }}>
              <Stack direction="row" spacing={2} alignItems="center">
                <Tabs
                  value={activeCgraId}
                  onChange={(_, newValue) => setActiveCgraId(newValue)}
                  sx={{ flexGrow: 1 }}
                >
                  {cgras.map((cgra) => (
                    <Tab
                      key={cgra.id}
                      value={cgra.id}
                      label={
                        <Box
                          sx={{
                            display: 'flex',
                            alignItems: 'center',
                            gap: 1
                          }}
                        >
                          <span>{cgra.name}</span>
                          {cgras.length > 1 && (
                            <Box
                              component="span"
                              onClick={(e) => {
                                e.stopPropagation();
                                removeCgra(cgra.id);
                              }}
                              sx={{
                                display: 'inline-flex',
                                cursor: 'pointer',
                                ml: 0.5,
                                '&:hover': {
                                  opacity: 0.7
                                }
                              }}
                            >
                              <CloseIcon fontSize="small" />
                            </Box>
                          )}
                        </Box>
                      }
                    />
                  ))}
                </Tabs>
                <Button
                  variant="outlined"
                  size="small"
                  startIcon={<AddIcon />}
                  onClick={addCgra}
                >
                  Add CGRA
                </Button>
              </Stack>
            </CardContent>
          </Card>

          <Box
            sx={{
              display: 'grid',
              gap: { xs: 3, md: 3.5 },
              alignItems: 'stretch',
              gridTemplateColumns: {
                xs: '1fr',
                md: 'minmax(0, 320px) minmax(0, 1fr) minmax(0, 320px)',
                lg: 'minmax(0, 360px) minmax(0, 1fr) minmax(0, 360px)'
              }
            }}
          >
            <Stack spacing={3} sx={{ height: '100%' }}>
              <Card sx={{ flexGrow: 1 }}>
                <CardHeader title="Dataflow Graph" />
                <CardContent>
                    <Box
                      sx={{
                        display: 'grid',
                        gridTemplateColumns: 'repeat(3, minmax(0, 1fr))',
                        gap: 1.5,
                        mb: 2
                      }}
                    >
                      {Array.from({ length: 9 }).map((_, index) => (
                        <Paper
                          key={index}
                          elevation={0}
                          sx={{
                            py: 2,
                            borderRadius: 2,
                            display: 'flex',
                            alignItems: 'center',
                            justifyContent: 'center',
                            backgroundColor: alpha(theme.palette.primary.main, 0.12),
                            color: theme.palette.primary.light,
                            fontWeight: 600
                          }}
                        >
                          {index + 1}
                        </Paper>
                      ))}
                    </Box>
                    <Typography variant="caption" color="text.secondary">
                      Abstract representation of the current DFG.
                    </Typography>
                  </CardContent>
                </Card>

                <Card>
                  <CardHeader title="Kernel Library" subheader="Select a kernel to configure" />
                  <CardContent sx={{ pt: 0 }}>
                    <List disablePadding>
                      {kernels.map((kernel) => (
                        <ListItem disablePadding key={kernel.id}>
                          <ListItemButton
                            selected={kernel.id === selectedKernel}
                            onClick={() => setSelectedKernel(kernel.id)}
                            sx={{
                              borderRadius: 2,
                              mb: 1,
                              '&.Mui-selected': {
                                backgroundColor: alpha(theme.palette.primary.main, 0.2)
                              }
                            }}
                          >
                            <ListItemText
                              primary={kernel.name}
                              secondary={kernel.description}
                              primaryTypographyProps={{ fontWeight: 600 }}
                            />
                          </ListItemButton>
                        </ListItem>
                      ))}
                    </List>
                  </CardContent>
                </Card>

                <Card>
                  <CardHeader title="Data Resources" />
                  <CardContent>
                    <Stack spacing={2}>
                      <TextField
                        label="Input DFG"
                        value={`graphs/${selectedKernel}.json`}
                        InputProps={{ readOnly: true }}
                      />
                      <TextField
                        label="Kernel Parameters"
                        value={`configs/${selectedKernel}.yaml`}
                        InputProps={{ readOnly: true }}
                      />
                      <Typography variant="caption" color="text.secondary">
                        Paths mirror the original CGRA-Flow Python assets.
                      </Typography>
                    </Stack>
                  </CardContent>
                </Card>
              </Stack>

            <Stack spacing={3} sx={{ height: '100%' }}>
              <Card>
                <CardHeader title="Architecture Configuration" />
                <CardContent>
                    <Grid container spacing={2}>
                      <Grid item xs={12} sm={6}>
                        <TextField
                          label="Architecture"
                          select
                          fullWidth
                          value={config.architecture}
                          onChange={(event) => handleConfigChange('architecture', event.target.value)}
                        >
                          {['AIE Tile', 'Versal', 'Custom Mesh'].map((option) => (
                            <MenuItem key={option} value={option}>
                              {option}
                            </MenuItem>
                          ))}
                        </TextField>
                      </Grid>
                      <Grid item xs={12} sm={3}>
                        <TextField
                          label="Tile Rows"
                          type="number"
                          value={config.tileRows}
                          onChange={(event) => handleConfigChange('tileRows', Number(event.target.value))}
                          inputProps={{ min: 1 }}
                          fullWidth
                        />
                      </Grid>
                      <Grid item xs={12} sm={3}>
                        <TextField
                          label="Tile Columns"
                          type="number"
                          value={config.tileCols}
                          onChange={(event) => handleConfigChange('tileCols', Number(event.target.value))}
                          inputProps={{ min: 1 }}
                          fullWidth
                        />
                      </Grid>
                      <Grid item xs={12} sm={3}>
                        <TextField
                          label="Bit Width"
                          type="number"
                          value={config.bitWidth}
                          onChange={(event) => handleConfigChange('bitWidth', Number(event.target.value))}
                          inputProps={{ min: 1 }}
                          fullWidth
                        />
                      </Grid>
                      <Grid item xs={12} sm={3}>
                        <TextField
                          label="Vector Length"
                          type="number"
                          value={config.vectorLength}
                          onChange={(event) => handleConfigChange('vectorLength', Number(event.target.value))}
                          inputProps={{ min: 1 }}
                          fullWidth
                        />
                      </Grid>
                      <Grid item xs={12} sm={6}>
                        <TextField
                          label="Routing Mode"
                          select
                          fullWidth
                          value={config.routingMode}
                          onChange={(event) => handleConfigChange('routingMode', event.target.value)}
                        >
                          {['Dynamic', 'Static', 'Hybrid'].map((option) => (
                            <MenuItem key={option} value={option}>
                              {option}
                            </MenuItem>
                          ))}
                        </TextField>
                      </Grid>
                    </Grid>
                    <Divider sx={{ my: 3 }} />
                    <Stack direction={{ xs: 'column', md: 'row' }} spacing={2}>
                      <FormControlLabel
                        control={
                          <Switch
                            checked={config.enableDebug}
                            onChange={(event) => handleConfigChange('enableDebug', event.target.checked)}
                          />
                        }
                        label="Enable Debug"
                      />
                      <FormControlLabel
                        control={
                          <Switch
                            checked={config.autoClockGating}
                            onChange={(event) => handleConfigChange('autoClockGating', event.target.checked)}
                          />
                        }
                        label="Automatic Clock Gating"
                      />
                      <FormControlLabel
                        control={
                          <Switch
                            checked={config.autoPlaceRegisters}
                            onChange={(event) => handleConfigChange('autoPlaceRegisters', event.target.checked)}
                          />
                        }
                        label="Auto Register Placement"
                      />
                    </Stack>
                    <Box sx={{ mt: 4 }}>
                      <Stack direction="row" justifyContent="space-between" alignItems="center" sx={{ mb: 1 }}>
                        <Typography variant="subtitle2" color="text.secondary">
                          Power Budget
                        </Typography>
                        <Typography variant="h6">{config.powerCap} W</Typography>
                      </Stack>
                      <Slider
                        value={config.powerCap}
                        onChange={(_, value) =>
                          handleConfigChange('powerCap', Array.isArray(value) ? value[0] : value)
                        }
                        min={10}
                        max={75}
                        step={1}
                        valueLabelDisplay="auto"
                      />
                    </Box>
                  </CardContent>
                </Card>

                <Card>
                  <CardHeader title="Mapping Parameters" subheader="Align toolchain knobs with architecture goals" />
                  <CardContent>
                    <Grid container spacing={2}>
                      <Grid item xs={12} md={4}>
                        <TextField
                          label="Mapper"
                          select
                          fullWidth
                          value={config.mapper}
                          onChange={(event) => handleConfigChange('mapper', event.target.value)}
                        >
                          {mapperOptions.map((option) => (
                            <MenuItem key={option} value={option}>
                              {option}
                            </MenuItem>
                          ))}
                        </TextField>
                      </Grid>
                      <Grid item xs={12} md={4}>
                        <TextField
                          label="Pipeline Strategy"
                          select
                          fullWidth
                          value={config.pipeline}
                          onChange={(event) => handleConfigChange('pipeline', event.target.value)}
                        >
                          {pipelines.map((option) => (
                            <MenuItem key={option} value={option}>
                              {option}
                            </MenuItem>
                          ))}
                        </TextField>
                      </Grid>
                      <Grid item xs={12} md={4}>
                        <TextField
                          label="Layout Preset"
                          select
                          fullWidth
                          value={config.layout}
                          onChange={(event) => handleConfigChange('layout', event.target.value)}
                        >
                          {layouts.map((layout) => (
                            <MenuItem key={layout} value={layout}>
                              {layout}
                            </MenuItem>
                          ))}
                        </TextField>
                      </Grid>
                    </Grid>
                    <Divider sx={{ my: 3 }} />
                    <Grid container spacing={1}>
                      {heuristics.map((heuristic) => (
                        <Grid item xs={12} sm={6} key={heuristic.id}>
                          <FormControlLabel
                            control={
                              <Switch
                                checked={config.heuristicSettings[heuristic.id]}
                                onChange={() => toggleHeuristic(heuristic.id)}
                              />
                            }
                            label={heuristic.label}
                          />
                        </Grid>
                      ))}
                    </Grid>
                  </CardContent>
                </Card>

                <Card>
                  <CardHeader title="Execution Overview" />
                  <CardContent>
                    <Grid container spacing={2}>
                      {[{
                        label: 'Tile Array',
                        value: `${config.tileRows} x ${config.tileCols}`
                      },
                      { label: 'Vector', value: `${config.vectorLength}` },
                      { label: 'Bit Width', value: `${config.bitWidth}-bit` },
                      { label: 'Mapper', value: config.mapper },
                      { label: 'Pipeline', value: config.pipeline },
                      { label: 'Power', value: `${config.powerCap} W` }].map((stat) => (
                        <Grid item xs={12} sm={6} md={4} key={stat.label}>
                          <Paper
                            elevation={0}
                            sx={{
                              p: 2,
                              textAlign: 'center',
                              borderRadius: 2,
                              backgroundColor: alpha(theme.palette.common.white, 0.04)
                            }}
                          >
                            <Typography variant="overline" display="block" color="text.secondary">
                              {stat.label}
                            </Typography>
                            <Typography variant="h6">{stat.value}</Typography>
                          </Paper>
                        </Grid>
                      ))}
                    </Grid>
                  </CardContent>
                </Card>
              </Stack>

            <Stack spacing={3} sx={{ height: '100%' }}>
              <Card>
                <CardHeader title="Layout Preview" subheader="Shows placement strategy" />
                <CardContent>
                    <Box
                      sx={{
                        borderRadius: 3,
                        p: 2,
                        backgroundColor: alpha(theme.palette.primary.main, 0.08)
                      }}
                    >
                      <Box
                        sx={{
                          display: 'grid',
                          gridTemplateColumns: `repeat(${config.tileCols}, minmax(0, 1fr))`,
                          gap: 1.5
                        }}
                      >
                        {Array.from({ length: config.tileRows * config.tileCols }).map((_, index) => (
                          <Paper
                            key={index}
                            elevation={0}
                            sx={{
                              py: 1.5,
                              borderRadius: 2,
                              textAlign: 'center',
                              backgroundColor: index % 2 === 0
                                ? alpha(theme.palette.primary.main, 0.18)
                                : alpha(theme.palette.secondary.main, 0.18)
                            }}
                          >
                            <Typography variant="body2" fontWeight={600}>
                              {(index % config.tileCols) + 1}
                            </Typography>
                          </Paper>
                        ))}
                      </Box>
                      <Stack direction="row" spacing={2} sx={{ mt: 2 }}>
                        <Stack direction="row" spacing={1} alignItems="center">
                          <Box
                            sx={{
                              width: 12,
                              height: 12,
                              borderRadius: '50%',
                              backgroundColor: alpha(theme.palette.primary.main, 0.8)
                            }}
                          />
                          <Typography variant="caption">Compute Tile</Typography>
                        </Stack>
                        <Stack direction="row" spacing={1} alignItems="center">
                          <Box
                            sx={{
                              width: 12,
                              height: 12,
                              borderRadius: '50%',
                              backgroundColor: alpha(theme.palette.secondary.main, 0.8)
                            }}
                          />
                          <Typography variant="caption">Route Node</Typography>
                        </Stack>
                      </Stack>
                    </Box>
                  </CardContent>
                </Card>

                <Card>
                  <CardHeader title="Mapping Log" />
                  <CardContent sx={{ maxHeight: 300, overflowY: 'auto', pr: 1 }}>
                    <List disablePadding>
                      {log.map((entry) => (
                        <ListItem
                          key={entry.id}
                          sx={{
                            mb: 1,
                            borderRadius: 2,
                            backgroundColor: alpha(levelColors[entry.level] ?? theme.palette.info.light, 0.12),
                            borderLeft: `4px solid ${levelColors[entry.level] ?? theme.palette.info.light}`
                          }}
                        >
                          <ListItemText
                            primary={entry.message}
                            secondary={entry.level.toUpperCase()}
                            primaryTypographyProps={{ fontWeight: 500 }}
                          />
                        </ListItem>
                      ))}
                    </List>
                  </CardContent>
                </Card>

                <Card>
                  <CardHeader title="Next Actions" />
                  <CardContent>
                    <Stack spacing={2}>
                      <Button variant="outlined" color="primary" fullWidth>
                        Export Mapping JSON
                      </Button>
                      <Button variant="outlined" color="primary" fullWidth>
                        Launch RTL Generator
                      </Button>
                      <Button variant="outlined" color="primary" fullWidth>
                        Open Console
                      </Button>
                    </Stack>
                  </CardContent>
                </Card>
              </Stack>
          </Box>
        </Stack>
      </Container>
    </Box>
  );
}

export default App;
