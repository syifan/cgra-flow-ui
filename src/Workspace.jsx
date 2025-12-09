import { useCallback, useEffect, useRef, useState } from 'react';
import { useParams, useNavigate } from 'react-router-dom';
import { useNotification } from './contexts/NotificationContext';
import { supabase } from './lib/supabase';
import {
  AppBar,
  Box,
  ButtonBase,
  Chip,
  CircularProgress,
  IconButton,
  ListItemIcon,
  ListItemText,
  Menu,
  MenuItem,
  Toolbar,
  Typography
} from '@mui/material';
import MenuIcon from '@mui/icons-material/Menu';
import SaveIcon from '@mui/icons-material/Save';
import HomeIcon from '@mui/icons-material/Home';
import CheckCircleIcon from '@mui/icons-material/CheckCircle';
import EditIcon from '@mui/icons-material/Edit';
import SyncIcon from '@mui/icons-material/Sync';
import { Layout, Model } from 'flexlayout-react';
import 'flexlayout-react/style/dark.css';
import MainCanvas from './main_cancas';
import PropertyInspector from './PropertyInspector';
import { defaultAppData } from './app_data';
import {
  normalizeArchitecture,
  resizeArchitectureGrid,
  updateCgraDimensions
} from './architectureUtils';
import {
  reconcilePeConnectionsAfterCgraResize,
  updatePeConnectionsForDirection
} from './peConnections.js';

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

const cloneAppData = (data) => {
  const cloned = JSON.parse(JSON.stringify(data));
  if (cloned?.architecture) {
    cloned.architecture = normalizeArchitecture(cloned.architecture);
  }
  return cloned;
};

function Workspace() {
  const { projectId } = useParams();
  const navigate = useNavigate();
  const [model] = useState(() => Model.fromJson(initialLayout));
  const [appState, setAppState] = useState(null);
  const [projectName, setProjectName] = useState('');
  const [selection, setSelection] = useState(null);
  const [menuAnchorEl, setMenuAnchorEl] = useState(null);
  const [loading, setLoading] = useState(true);
  const [saving, setSaving] = useState(false);
  const [hasUnsavedChanges, setHasUnsavedChanges] = useState(false);
  const savedStateRef = useRef(null);
  const { showError, showSuccess, showConfirm } = useNotification();

  // Load project data from Supabase on mount
  useEffect(() => {
    const loadProject = async () => {
      if (!projectId) {
        showError('No project ID provided');
        navigate('/dashboard');
        return;
      }

      setLoading(true);
      const { data, error } = await supabase
        .from('projects')
        .select('*')
        .eq('id', projectId)
        .single();

      if (error) {
        console.error('Error loading project:', error);
        showError('Failed to load project: ' + error.message);
        navigate('/dashboard');
        return;
      }

      if (!data) {
        showError('Project not found');
        navigate('/dashboard');
        return;
      }

      setProjectName(data.name || 'Untitled Project');

      // Use project data if available, otherwise use default
      let initialState;
      if (data.data && Object.keys(data.data).length > 0) {
        initialState = cloneAppData(data.data);
      } else {
        initialState = cloneAppData(defaultAppData);
      }
      setAppState(initialState);
      savedStateRef.current = JSON.stringify(initialState);
      setHasUnsavedChanges(false);

      setLoading(false);
    };

    loadProject();
  }, [projectId, navigate, showError]);

  // Track unsaved changes by comparing current state to saved state
  useEffect(() => {
    if (!appState || !savedStateRef.current) return;
    const currentStateString = JSON.stringify(appState);
    setHasUnsavedChanges(currentStateString !== savedStateRef.current);
  }, [appState]);

  // Warn user before leaving page with unsaved changes
  useEffect(() => {
    const handleBeforeUnload = (event) => {
      if (hasUnsavedChanges) {
        event.preventDefault();
        event.returnValue = '';
      }
    };

    window.addEventListener('beforeunload', handleBeforeUnload);
    return () => window.removeEventListener('beforeunload', handleBeforeUnload);
  }, [hasUnsavedChanges]);

  // Debounced auto-save: save 10 seconds after last change
  useEffect(() => {
    if (!hasUnsavedChanges || !projectId || !appState || saving) return;

    const timeoutId = setTimeout(async () => {
      setSaving(true);
      const { error } = await supabase
        .from('projects')
        .update({ data: appState })
        .eq('id', projectId);

      setSaving(false);

      if (error) {
        console.error('Auto-save failed:', error);
        showError('Auto-save failed: ' + error.message);
      } else {
        savedStateRef.current = JSON.stringify(appState);
        setHasUnsavedChanges(false);
      }
    }, 10000); // 10 seconds

    return () => clearTimeout(timeoutId);
  }, [hasUnsavedChanges, projectId, appState, saving, showError]);

  const architecture = appState?.architecture;

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

  const handlePropertyChange = useCallback(
    (target, key, value) => {
      setAppState((prev) => {
        const currentArchitecture = prev?.architecture;
        if (!currentArchitecture) return prev;

        const nextArchitecture = (() => {
          if (target.type === 'device') {
            const updated = setValueAtPath(currentArchitecture, key, value);

            if (key === 'multiCgraRows' || key === 'multiCgraColumns') {
              return resizeArchitectureGrid(
                updated,
                updated.multiCgraRows,
                updated.multiCgraColumns
              );
            }

            return updated;
          }

          if (target.type === 'cgra') {
            let connectionDelta = null;

            const nextCgras = currentArchitecture.CGRAs.map((cgra) => {
              if (cgra.id !== target.id) return cgra;
              const updatedCgra = setValueAtPath(cgra, key, value);

              if (key === 'perCgraRows' || key === 'perCgraColumns') {
                const previousPeIds = Array.isArray(cgra.PEs)
                  ? cgra.PEs.map((pe) => pe.id)
                  : [];

                const nextRows =
                  key === 'perCgraRows' ? value : updatedCgra.perCgraRows;
                const nextColumns =
                  key === 'perCgraColumns' ? value : updatedCgra.perCgraColumns;
                const resizedCgra = updateCgraDimensions(updatedCgra, nextRows, nextColumns);

                const nextPeIds = Array.isArray(resizedCgra.PEs)
                  ? resizedCgra.PEs.map((pe) => pe.id)
                  : [];

                const previousSet = new Set(previousPeIds);
                const nextSet = new Set(nextPeIds);

                const removedPeIds = previousPeIds.filter((id) => !nextSet.has(id));
                const addedPeIds = nextPeIds.filter((id) => !previousSet.has(id));

                connectionDelta = {
                  addedPeIds,
                  removedPeIds
                };

                return resizedCgra;
              }

              return updatedCgra;
            });

            let nextConnections = currentArchitecture.PEConnections;

            if (connectionDelta) {
              const architectureForConnections = {
                ...currentArchitecture,
                CGRAs: nextCgras,
                PEConnections: nextConnections
              };

              nextConnections = reconcilePeConnectionsAfterCgraResize({
                architecture: architectureForConnections,
                previousConnections: nextConnections,
                addedPeIds: connectionDelta.addedPeIds,
                removedPeIds: connectionDelta.removedPeIds
              });
            }

            return {
              ...currentArchitecture,
              CGRAs: nextCgras,
              PEConnections: nextConnections
            };
          }

          if (target.type === 'pe') {
            if (typeof key === 'string' && key.startsWith('outgoingLinks.')) {
              const direction = key.slice('outgoingLinks.'.length);
              const nextConnections = updatePeConnectionsForDirection(
                currentArchitecture,
                target.id,
                direction,
                Boolean(value)
              );

              return {
                ...currentArchitecture,
                PEConnections: nextConnections
              };
            }

            return {
              ...currentArchitecture,
              CGRAs: currentArchitecture.CGRAs.map((cgra) => {
                if (cgra.id !== target.cgraId) return cgra;
                const nextPEs = cgra.PEs.map((pe) =>
                  pe.id === target.id ? setValueAtPath(pe, key, value) : pe
                );
                const hasChanged = nextPEs.some((pe, index) => pe !== cgra.PEs[index]);
                if (!hasChanged) {
                  return cgra;
                }

                return {
                  ...cgra,
                  PEs: nextPEs
                };
              })
            };
          }

          return currentArchitecture;
        })();

        if (nextArchitecture === currentArchitecture) {
          return prev;
        }

        return {
          ...prev,
          architecture: nextArchitecture
        };
      });
    },
    [setValueAtPath]
  );

  const handleOpenMenu = useCallback((event) => {
    setMenuAnchorEl(event.currentTarget);
  }, []);

  const handleCloseMenu = useCallback(() => {
    setMenuAnchorEl(null);
  }, []);

  const handleBackToDashboard = useCallback(async () => {
    handleCloseMenu();

    if (hasUnsavedChanges) {
      const confirmed = await showConfirm({
        title: 'Unsaved Changes',
        message: 'You have unsaved changes. Are you sure you want to leave? Your changes will be lost.',
        confirmText: 'Leave',
        cancelText: 'Stay',
        confirmColor: 'error'
      });

      if (!confirmed) return;
    }

    navigate('/dashboard');
  }, [handleCloseMenu, hasUnsavedChanges, showConfirm, navigate]);

  const handleSaveToSupabase = useCallback(async () => {
    handleCloseMenu();
    if (!projectId || !appState) return;

    setSaving(true);
    const { error } = await supabase
      .from('projects')
      .update({ data: appState })
      .eq('id', projectId);

    setSaving(false);

    if (error) {
      console.error('Error saving project:', error);
      showError('Failed to save project: ' + error.message);
    } else {
      savedStateRef.current = JSON.stringify(appState);
      setHasUnsavedChanges(false);
      showSuccess('Project saved successfully');
    }
  }, [projectId, appState, handleCloseMenu, showError, showSuccess]);

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

  // Show loading state
  if (loading) {
    return (
      <Box
        sx={{
          minHeight: '100vh',
          display: 'flex',
          alignItems: 'center',
          justifyContent: 'center',
          bgcolor: 'background.default',
          flexDirection: 'column',
          gap: 2
        }}
      >
        <CircularProgress />
        <Typography variant="body2" sx={{ color: 'text.secondary' }}>
          Loading project...
        </Typography>
      </Box>
    );
  }

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
          <Box sx={{ display: 'flex', alignItems: 'center', gap: 2 }}>
            <ButtonBase
              onClick={handleBackToDashboard}
              sx={{
                borderRadius: 1,
                px: 1,
                py: 0.5,
                '&:hover': {
                  bgcolor: 'rgba(148, 163, 184, 0.1)'
                }
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
            </ButtonBase>
            <Typography
              variant="body2"
              sx={{
                color: 'text.secondary',
                borderLeft: '1px solid rgba(148, 163, 184, 0.3)',
                pl: 2
              }}
            >
              {projectName}
            </Typography>
            <Chip
              size="small"
              icon={
                saving ? (
                  <SyncIcon sx={{ animation: 'spin 1s linear infinite', '@keyframes spin': { from: { transform: 'rotate(0deg)' }, to: { transform: 'rotate(360deg)' } } }} />
                ) : hasUnsavedChanges ? (
                  <EditIcon />
                ) : (
                  <CheckCircleIcon />
                )
              }
              label={saving ? 'Saving...' : hasUnsavedChanges ? 'Unsaved' : 'Saved'}
              color={saving ? 'info' : hasUnsavedChanges ? 'warning' : 'success'}
              variant="outlined"
              sx={{ ml: 1 }}
            />
          </Box>
          <Box sx={{ display: 'flex', alignItems: 'center', gap: 1 }}>
            <IconButton
              color="inherit"
              edge="end"
              aria-label="open settings"
              sx={{
                border: '1px solid rgba(148, 163, 184, 0.35)',
                borderRadius: 2
              }}
              onClick={handleOpenMenu}
            >
              <MenuIcon />
            </IconButton>
          </Box>
        </Toolbar>
      </AppBar>
      <Menu
        anchorEl={menuAnchorEl}
        open={Boolean(menuAnchorEl)}
        onClose={handleCloseMenu}
        anchorOrigin={{ vertical: 'bottom', horizontal: 'right' }}
        transformOrigin={{ vertical: 'top', horizontal: 'right' }}
      >
        <MenuItem onClick={handleSaveToSupabase} disabled={saving}>
          <ListItemIcon>
            <SaveIcon fontSize="small" />
          </ListItemIcon>
          <ListItemText>Save project</ListItemText>
        </MenuItem>
        <MenuItem onClick={handleBackToDashboard}>
          <ListItemIcon>
            <HomeIcon fontSize="small" />
          </ListItemIcon>
          <ListItemText>Back to dashboard</ListItemText>
        </MenuItem>
      </Menu>
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

export default Workspace;

