import { useCallback, useState } from 'react';
import { AppBar, Box, IconButton, Toolbar, Typography } from '@mui/material';
import MenuIcon from '@mui/icons-material/Menu';
import { Layout, Model } from 'flexlayout-react';
import 'flexlayout-react/style/dark.css';
import MainCanvas from './main_cancas';
import PropertyInspector from './PropertyInspector';
import { defaultArchitecture } from './app_data';

const NAVBAR_HEIGHT = 56;

const initialLayout = {
  global: {
    tabSetMinHeight: 200,
    tabEnableClose: false
  },
  borders: [],
  layout: {
    type: 'row',
    weight: 100,
    children: [
      {
        type: 'column',
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
                name: 'Mapping',
                component: 'mapping'
              },
              {
                type: 'tab',
                name: 'Verification',
                component: 'verification'
              },
              {
                type: 'tab',
                name: 'Layout',
                component: 'layout'
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
            name: 'Properties',
            component: 'properties'
          },
          {
            type: 'tab',
            name: 'GenAI',
            component: 'genai'
          }
        ]
      }
    ]
  }
};

function App() {
  const [model] = useState(() => Model.fromJson(initialLayout));
  const [architecture, setArchitecture] = useState(defaultArchitecture);
  const [selection, setSelection] = useState(null);

  const setValueAtPath = useCallback((object, keyPath, value) => {
    const keys = Array.isArray(keyPath) ? keyPath : keyPath.split('.');

    if (!object || keys.length === 0) {
      return object;
    }

    const [currentKey, ...rest] = keys;

    if (rest.length === 0) {
      return {
        ...object,
        [currentKey]: value
      };
    }

    const nextValue = setValueAtPath(object[currentKey] ?? {}, rest, value);

    if (nextValue === object[currentKey]) {
      return object;
    }

    return {
      ...object,
      [currentKey]: nextValue
    };
  }, []);

  const handlePropertyChange = useCallback((target, key, value) => {
    setArchitecture((prev) => {
      if (!prev) return prev;

      if (target.type === 'device') {
        return setValueAtPath(prev, key, value);
      }

      return {
        ...prev,
        CGRAs: prev.CGRAs.map((cgra) => {
          if (target.type === 'cgra') {
            if (cgra.id !== target.id) return cgra;
            return setValueAtPath(cgra, key, value);
          }

          if (target.type === 'pe') {
            if (cgra.id !== target.cgraId) return cgra;
            return {
              ...cgra,
              PEs: cgra.PEs.map((pe) =>
                pe.id === target.id ? setValueAtPath(pe, key, value) : pe
              )
            };
          }

          return cgra;
        })
      };
    });
  }, [setValueAtPath]);

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
        case 'properties':
          return (
            <PropertyInspector
              architecture={architecture}
              selection={selection}
              onPropertyChange={handlePropertyChange}
            />
          );
        case 'genai':
          return (
            <Box
              sx={{
                height: '100%',
                p: 3,
                borderRadius: 1,
                border: '1px dashed rgba(148, 163, 184, 0.3)',
                display: 'flex',
                alignItems: 'center',
                justifyContent: 'center',
                color: 'text.secondary'
              }}
            >
              GenAI workspace coming soon.
            </Box>
          );
        case 'mapping':
          return (
            <Box
              sx={{
                height: '100%',
                p: 3,
                borderRadius: 1,
                border: '1px dashed rgba(148, 163, 184, 0.3)',
                display: 'flex',
                alignItems: 'center',
                justifyContent: 'center',
                color: 'text.secondary'
              }}
            >
              Mapping workspace coming soon.
            </Box>
          );
        case 'verification':
          return (
            <Box
              sx={{
                height: '100%',
                p: 3,
                borderRadius: 1,
                border: '1px dashed rgba(148, 163, 184, 0.3)',
                display: 'flex',
                alignItems: 'center',
                justifyContent: 'center',
                color: 'text.secondary'
              }}
            >
              Verification workspace coming soon.
            </Box>
          );
        case 'layout':
          return (
            <Box
              sx={{
                height: '100%',
                p: 3,
                borderRadius: 1,
                border: '1px dashed rgba(148, 163, 184, 0.3)',
                display: 'flex',
                alignItems: 'center',
                justifyContent: 'center',
                color: 'text.secondary'
              }}
            >
              Layout workspace coming soon.
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
