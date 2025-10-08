import { useCallback, useState } from 'react';
import { AppBar, Box, IconButton, Toolbar, Typography } from '@mui/material';
import MenuIcon from '@mui/icons-material/Menu';
import { Layout, Model } from 'flexlayout-react';
import 'flexlayout-react/style/dark.css';
import MainCanvas from './main_cancas';
import PropertyInspector from './PropertyInspector';

const NAVBAR_HEIGHT = 56;
const CGRA_DIMENSION = 4;
const PE_DIMENSION = 4;

const buildDefaultData = () => {
  const CGRAs = [];

  for (let cgraY = 0; cgraY < CGRA_DIMENSION; cgraY += 1) {
    for (let cgraX = 0; cgraX < CGRA_DIMENSION; cgraX += 1) {
      const PEs = [];

      const cgraId = `cgra-${cgraY}-${cgraX}`;
      const routerId = `router-${cgraY}-${cgraX}`;

      for (let peY = 0; peY < PE_DIMENSION; peY += 1) {
        for (let peX = 0; peX < PE_DIMENSION; peX += 1) {
          PEs.push({
            id: `pe-${cgraY}-${cgraX}-${peY}-${peX}`,
            x: peX,
            y: peY,
            cgraId,
            label: `PE (${peY}, ${peX})`,
            operation: 'ALU',
            latency: 1,
            enabled: true
          });
        }
      }

      CGRAs.push({
        id: cgraId,
        x: cgraX,
        y: cgraY,
        label: `CGRA (${cgraY}, ${cgraX})`,
        clockFrequency: 600,
        voltage: 0.9,
        router: {
          id: routerId,
          cgraId,
          routingStrategy: 'Shortest Path',
          bufferDepth: 8,
          bandwidth: 128
        },
        PEs
      });
    }
  }

  return { architecture: { CGRAs } };
};

const initialLayout = {
  global: {
    tabSetMinHeight: 200,
    tabEnableClose: false
  },
  borders: [],
  layout: {
    type: 'column',
    weight: 100,
    children: [
      {
        type: 'row',
        weight: 70,
        children: [
          {
            type: 'tabset',
            weight: 70,
            selected: 0,
            children: [
              {
                type: 'tab',
                name: 'Canvas',
                component: 'canvas'
              }
            ]
          },
          {
            type: 'tabset',
            weight: 30,
            selected: 0,
            children: [
              {
                type: 'tab',
                name: 'Right Panel',
                component: 'rightPanel'
              }
            ]
          }
        ]
      },
      {
        type: 'tabset',
        weight: 30,
        selected: 0,
        children: [
          {
            type: 'tab',
            name: 'Terminal',
            component: 'terminal'
          }
        ]
      }
    ]
  }
};

const defaultData = buildDefaultData();

function App() {
  const [model] = useState(() => Model.fromJson(initialLayout));
  const [architecture, setArchitecture] = useState(defaultData.architecture);
  const [selection, setSelection] = useState(null);

  const handlePropertyChange = useCallback((target, key, value) => {
    setArchitecture((prev) => ({
      ...prev,
      CGRAs: prev.CGRAs.map((cgra) => {
        if (target.type === 'cgra') {
          if (cgra.id !== target.id) return cgra;
          return { ...cgra, [key]: value };
        }

        if (target.type === 'router') {
          if (cgra.id !== target.cgraId) return cgra;
          return {
            ...cgra,
            router: {
              ...cgra.router,
              [key]: value
            }
          };
        }

        if (target.type === 'pe') {
          if (cgra.id !== target.cgraId) return cgra;
          return {
            ...cgra,
            PEs: cgra.PEs.map((pe) => (pe.id === target.id ? { ...pe, [key]: value } : pe))
          };
        }

        return cgra;
      })
    }));
  }, []);

  const factory = useCallback(
    (node) => {
      const component = node.getComponent();

      switch (component) {
        case 'canvas':
          return (
            <MainCanvas
              architecture={architecture}
              selection={selection}
              onSelectionChange={setSelection}
            />
          );
        case 'rightPanel':
          return (
            <PropertyInspector
              architecture={architecture}
              selection={selection}
              onPropertyChange={handlePropertyChange}
            />
          );
        case 'terminal':
          return (
            <Box
              sx={{
                height: '100%',
                p: 2,
                borderRadius: 1,
                bgcolor: 'rgba(15,118,110,0.16)',
                fontFamily: '"Fira Code", monospace',
                fontSize: '0.85rem',
                color: 'success.light'
              }}
            >
              ➜ Terminal ready. Use this space for build output, logs, or interactive tooling.
            </Box>
          );
        default:
          return null;
      }
    },
    [architecture, handlePropertyChange, selection]
  );

  return (
    <Box
      sx={{
        display: 'flex',
        flexDirection: 'column',
        minHeight: '100vh',
        bgcolor: 'background.default',
        color: 'text.primary'
      }}
    >
      <AppBar
        position="sticky"
        elevation={0}
        sx={{
          bgcolor: 'rgba(15,23,42,0.92)',
          color: 'common.white',
          backdropFilter: 'blur(12px)',
          borderBottom: '1px solid rgba(148, 163, 184, 0.2)'
        }}
      >
        <Toolbar
          disableGutters
          sx={{
            px: 3,
            minHeight: NAVBAR_HEIGHT,
            alignItems: 'center',
            justifyContent: 'space-between'
          }}
        >
          <Typography
            variant="h6"
            sx={{
              fontWeight: 700,
              letterSpacing: 2,
              textTransform: 'uppercase'
            }}
          >
            CGRA Flow
          </Typography>
          <IconButton
            color="inherit"
            edge="end"
            aria-label="open settings"
            sx={{
              border: '1px solid rgba(148, 163, 184, 0.35)',
              borderRadius: 2
            }}
          >
            <MenuIcon />
          </IconButton>
        </Toolbar>
      </AppBar>
      <Box
        component="main"
        sx={{
          flexGrow: 1,
          minHeight: 0,
          height: `calc(100vh - ${NAVBAR_HEIGHT}px)`,
          position: 'relative',
          overflow: 'hidden',
          '& .flexlayout__layout': {
            height: '100%',
            width: '100%'
          },
          '& .flexlayout__layout, & .flexlayout__tabset, & .flexlayout__tabset_header': {
            bgcolor: 'transparent'
          },
          '& .flexlayout__tab': {
            color: 'text.secondary'
          }
        }}
      >
        <Layout model={model} factory={factory} />
      </Box>
    </Box>
  );
}

export default App;
