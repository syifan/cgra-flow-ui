import { useState } from 'react';
import { AppBar, Box, Button, Toolbar, Typography } from '@mui/material';
import { Layout, Model } from 'flexlayout-react';
import 'flexlayout-react/style/dark.css';

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

function App() {
  const [model] = useState(() => Model.fromJson(initialLayout));

  const factory = (node) => {
    const component = node.getComponent();

    switch (component) {
      case 'canvas':
        return (
          <Box
            sx={{
              height: '100%',
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'center',
              borderRadius: 1,
              bgcolor: 'rgba(59,130,246,0.08)',
              color: 'text.secondary',
              fontSize: '1.1rem',
              fontWeight: 500
            }}
          >
            Main canvas placeholder
          </Box>
        );
      case 'rightPanel':
        return (
          <Box
            sx={{
              height: '100%',
              p: 2.5,
              display: 'flex',
              flexDirection: 'column',
              gap: 2,
              borderRadius: 1,
              bgcolor: 'rgba(148,163,184,0.08)',
              color: 'text.secondary'
            }}
          >
            <Typography variant="subtitle1" color="text.primary">
              Inspector
            </Typography>
            <Typography variant="body2">
              Use this panel to show kernel metadata, selection details, or configuration forms.
            </Typography>
          </Box>
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
  };

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
      <AppBar position="static" color="default" elevation={1}>
        <Toolbar>
          <Typography variant="h6" sx={{ flexGrow: 1 }}>
            CGRA-Flow Workspace
          </Typography>
          <Button color="inherit">New Project</Button>
        </Toolbar>
      </AppBar>
      <Box
        sx={{
          flexGrow: 1,
          minHeight: 0,
          '.flexlayout__layout, .flexlayout__tabset, .flexlayout__tabset_header': {
            bgcolor: 'transparent'
          },
          '.flexlayout__tab': {
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
