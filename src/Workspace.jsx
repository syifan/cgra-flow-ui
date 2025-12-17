import { useCallback, useEffect, useMemo, useRef, useState } from 'react';
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
import { Layout, Model } from 'flexlayout-react';
import MenuIcon from '@mui/icons-material/Menu';
import SaveIcon from '@mui/icons-material/Save';
import HomeIcon from '@mui/icons-material/Home';
import CheckCircleIcon from '@mui/icons-material/CheckCircle';
import LockIcon from '@mui/icons-material/Lock';
import 'flexlayout-react/style/dark.css';
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
import { collectArchitectureOps } from './opMapping';
import {
  DesignTab,
  MappingTab,
  VerificationTab,
  LayoutTab,
  BenchmarkSelector
} from './workspace';

const NAVBAR_HEIGHT = 56;

const DEFAULT_BENCHMARKS = {};

const mainLayout = {
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
        type: 'tabset',
        weight: 100,
        selected: 0,
        children: [
          { type: 'tab', name: '1. Design', component: 'design' },
          { type: 'tab', name: '2. Mapping', component: 'mapping' },
          { type: 'tab', name: '3. Verification', component: 'verification' },
          { type: 'tab', name: '4. Layout', component: 'layout' }
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
  const [appState, setAppState] = useState(null);
  const [projectName, setProjectName] = useState('');
  const [selection, setSelection] = useState(null);
  const [menuAnchorEl, setMenuAnchorEl] = useState(null);
  const [loading, setLoading] = useState(true);
  const [saving, setSaving] = useState(false);
  const [hasUnsavedChanges, setHasUnsavedChanges] = useState(false);
  const [autoSaveCountdown, setAutoSaveCountdown] = useState(0);
  const [pendingJob, setPendingJob] = useState(null);
  const [latestMappingJob, setLatestMappingJob] = useState(null);
  const [graphData, setGraphData] = useState({});
  const [model] = useState(() => Model.fromJson(mainLayout));
  const [currentBenchmark, setCurrentBenchmark] = useState(null);
  // Benchmark index loaded from public/benchmark_ops_index.json
  const [benchmarkIndex, setBenchmarkIndex] = useState(null);
  const [availableBenchmarks, setAvailableBenchmarks] = useState(DEFAULT_BENCHMARKS);
  const savedStateRef = useRef(null);
  const appStateRef = useRef(null);
  const latestJobGraphsLoggedRef = useRef(null);
  const autoSaveIntervalRef = useRef(null);
  const { showError, showSuccess, showConfirm } = useNotification();

  // Project is locked when there's a queued or running job
  const isLocked = pendingJob !== null;

  // Selected benchmarks are stored in appState (memoized by values to prevent unnecessary re-renders)
  // eslint-disable-next-line react-hooks/exhaustive-deps
  const selectedBenchmarks = useMemo(() => {
    return appState?.selectedBenchmarks || DEFAULT_BENCHMARKS;
  }, [JSON.stringify(appState?.selectedBenchmarks)]);

  // Helper to get list of selected benchmark names
  const getSelectedBenchmarkNames = useCallback(() => {
    return Object.entries(selectedBenchmarks)
      .filter(([, selected]) => selected)
      .map(([name]) => name);
  }, [selectedBenchmarks]);

  const setSelectedBenchmarks = useCallback((updater) => {
    if (isLocked) return;
    setAppState((prev) => {
      if (!prev) return prev;
      const prevBenchmarks = prev.selectedBenchmarks || DEFAULT_BENCHMARKS;
      const newBenchmarks = typeof updater === 'function'
        ? updater(prevBenchmarks)
        : updater;
      return { ...prev, selectedBenchmarks: newBenchmarks };
    });
  }, [isLocked]);

  const AUTO_SAVE_DELAY = 10; // seconds

  // Keep appStateRef in sync for access in async callbacks
  useEffect(() => {
    appStateRef.current = appState;
  }, [appState]);

  // Fetch and log graph JSONs when a mapping job finishes
  useEffect(() => {
    const logGraphs = async () => {
      if (!latestMappingJob || latestMappingJob.status !== 'success') return;
      if (latestJobGraphsLoggedRef.current === latestMappingJob.id) return;

      const benchmarks = latestMappingJob.info?.benchmarks || latestMappingJob.info || {};
      const graphFilesByBenchmark = {};

      // Normalize structure: latestMappingJob.info may be an object keyed by benchmark
      for (const [bench, result] of Object.entries(benchmarks)) {
        if (result && Array.isArray(result.graph_files)) {
          graphFilesByBenchmark[bench] = result.graph_files;
        }
      }

      const fetchGraph = async (url) => {
        const response = await fetch(url);
        if (!response.ok) throw new Error(`HTTP ${response.status}`);
        const contentType = response.headers.get('content-type') || '';
        if (!contentType.includes('application/json')) {
          throw new Error(`Expected JSON but got '${contentType}'`);
        }
        return response.json();
      };

      const allFetches = [];
      for (const [bench, files] of Object.entries(graphFilesByBenchmark)) {
        files.forEach((f) => {
          if (f?.publicUrl) {
            allFetches.push(
              fetchGraph(f.publicUrl)
                .then((json) => ({ bench, file: f.file, json }))
                .catch((err) => {
                  console.warn(`Failed to fetch graph ${f.file} for ${bench}: ${err.message}`);
                  return null;
                })
            );
          }
        });
      }

      const graphs = (await Promise.all(allFetches)).filter(Boolean);

      if (graphs.length > 0) {
        const grouped = graphs.reduce((acc, g) => {
          const key = g.bench || 'unknown';
          acc[key] = acc[key] || [];
          acc[key].push({ file: g.file, json: g.json });
          return acc;
        }, {});
        setGraphData(grouped);
        console.log('Mapping graphs for job', latestMappingJob.id, grouped);
      } else {
        setGraphData({});
        console.log('Mapping job has no graphs to display', latestMappingJob.id);
      }

      latestJobGraphsLoggedRef.current = latestMappingJob.id;
    };

    logGraphs();
  }, [latestMappingJob]);

  // Fetch and subscribe to jobs for this project
  useEffect(() => {
    if (!projectId) return;

    const fetchJobs = async () => {
      // Fetch pending job (queued or running)
      const { data: pendingData, error: pendingError } = await supabase
        .from('jobs')
        .select('*')
        .eq('project_id', projectId)
        .in('status', ['queued', 'running'])
        .order('created_at', { ascending: false })
        .limit(1)
        .maybeSingle();

      if (pendingError) {
        console.error('Error fetching pending jobs:', pendingError);
      } else {
        setPendingJob(pendingData);
      }

      // Fetch latest mapping job (any status) for status display
      const { data: latestData, error: latestError } = await supabase
        .from('jobs')
        .select('*')
        .eq('project_id', projectId)
        .eq('type', 'mapping')
        .order('created_at', { ascending: false })
        .limit(1)
        .maybeSingle();

      if (latestError) {
        console.error('Error fetching latest mapping job:', latestError);
      } else {
        setLatestMappingJob(latestData);
      }
    };

    fetchJobs();

    // Subscribe to job changes for this project
    const subscription = supabase
      .channel(`jobs:project_id=eq.${projectId}`)
      .on(
        'postgres_changes',
        {
          event: '*',
          schema: 'public',
          table: 'jobs',
          filter: `project_id=eq.${projectId}`
        },
        () => {
          // Refetch jobs on any change
          fetchJobs();
        }
      )
      .subscribe();

    return () => {
      subscription.unsubscribe();
    };
  }, [projectId]);

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

      // Normalize selectedBenchmarks to include available benchmarks once loaded later
      initialState.selectedBenchmarks = {
        ...availableBenchmarks,
        ...initialState.selectedBenchmarks
      };

      // Restore current benchmark if saved
      if (initialState.currentBenchmark) {
        setCurrentBenchmark(initialState.currentBenchmark);
      }

      setAppState(initialState);
      savedStateRef.current = JSON.stringify(initialState);
      setHasUnsavedChanges(false);

      setLoading(false);
    };

    loadProject();
  }, [projectId, navigate, showError, availableBenchmarks]);

  // Load benchmark ops index (generated by runner/collect_benchmark_ops.js)
  useEffect(() => {
    const loadIndex = async () => {
      try {
        const response = await fetch('/benchmark_ops_index.json');
        if (!response.ok) throw new Error(`HTTP ${response.status}`);
        const json = await response.json();
        setBenchmarkIndex(json);

        const names = (json?.benchmarks || []).map((b) => b.name);
        const defaults = Object.fromEntries(names.map((n) => [n, false]));
        setAvailableBenchmarks(defaults);

        // Backfill any missing selectedBenchmarks in existing state
        setAppState((prev) => {
          if (!prev) return prev;
          return {
            ...prev,
            selectedBenchmarks: {
              ...defaults,
              ...prev.selectedBenchmarks
            }
          };
        });
      } catch (err) {
        console.warn('Failed to load benchmark ops index; falling back to built-in list', err);
      }
    };

    loadIndex();
  }, []);

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

  // Debounced auto-save: save after countdown reaches 0
  useEffect(() => {
    if (!hasUnsavedChanges || !projectId || !appState || saving || isLocked) {
      // Clear countdown when not in unsaved state or locked
      if (!hasUnsavedChanges || isLocked) {
        setAutoSaveCountdown(0);
        if (autoSaveIntervalRef.current) {
          clearInterval(autoSaveIntervalRef.current);
          autoSaveIntervalRef.current = null;
        }
      }
      return;
    }

    // Start countdown
    setAutoSaveCountdown(AUTO_SAVE_DELAY);

    // Update countdown every second
    autoSaveIntervalRef.current = setInterval(() => {
      setAutoSaveCountdown((prev) => {
        if (prev <= 1) {
          return 0;
        }
        return prev - 1;
      });
    }, 1000);

    const timeoutId = setTimeout(async () => {
      // Clear the interval before saving
      if (autoSaveIntervalRef.current) {
        clearInterval(autoSaveIntervalRef.current);
        autoSaveIntervalRef.current = null;
      }

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
        // Only clear unsaved indicator if current state matches what we saved
        const currentStateString = JSON.stringify(appStateRef.current);
        setHasUnsavedChanges(currentStateString !== savedStateRef.current);
      }
    }, AUTO_SAVE_DELAY * 1000);

    return () => {
      clearTimeout(timeoutId);
      if (autoSaveIntervalRef.current) {
        clearInterval(autoSaveIntervalRef.current);
        autoSaveIntervalRef.current = null;
      }
    };
  }, [hasUnsavedChanges, projectId, appState, saving, showError, isLocked]);

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
    if (!projectId || !appState || saving || isLocked) return;

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
      // Only clear unsaved indicator if current state matches what we saved
      const currentStateString = JSON.stringify(appStateRef.current);
      setHasUnsavedChanges(currentStateString !== savedStateRef.current);
      showSuccess('Project saved successfully');
    }
  }, [projectId, appState, saving, isLocked, handleCloseMenu, showError, showSuccess]);

  const handleStartMapping = useCallback(async () => {
    if (!projectId || isLocked || !appState) return;

    // Collect selected benchmarks
    const benchmarks = getSelectedBenchmarkNames();

    if (benchmarks.length === 0) {
      showError('Please select at least one benchmark');
      return;
    }

    // Preflight: require benchmark index if available and check ops coverage
    if (benchmarks.length > 0 && benchmarkIndex?.benchmarks) {
      const indexMap = Object.fromEntries(
        (benchmarkIndex.benchmarks || []).map((b) => [b.name, b])
      );

      const missingBenchmarks = benchmarks.filter((b) => !indexMap[b]);
      if (missingBenchmarks.length > 0) {
        showError(`Benchmarks not found in index: ${missingBenchmarks.join(', ')}`);
        return;
      }

      const requiredOps = new Set();
      benchmarks.forEach((b) => {
        (indexMap[b]?.ops || []).forEach((op) => requiredOps.add(op));
      });

      const availableOps = collectArchitectureOps(appState.architecture || {});
      const missingOps = Array.from(requiredOps).filter((op) => !availableOps.has(op));

      if (missingOps.length > 0) {
        const confirmed = await showConfirm({
          title: 'Missing Functional Units',
          message: `The architecture lacks support for: ${missingOps.join(', ')}. Continue anyway?`,
          confirmText: 'Start Mapping',
          cancelText: 'Go Back'
        });
        if (!confirmed) return;
      }
    }

    // Get current user
    const { data: { user } } = await supabase.auth.getUser();
    if (!user) {
      showError('You must be logged in to start a mapping job');
      return;
    }

    // Save project first before creating job
    setSaving(true);
    const { error: saveError } = await supabase
      .from('projects')
      .update({ data: appState })
      .eq('id', projectId);

    if (saveError) {
      setSaving(false);
      console.error('Error saving project before mapping:', saveError);
      showError('Failed to save project: ' + saveError.message);
      return;
    }

    savedStateRef.current = JSON.stringify(appState);
    setHasUnsavedChanges(false);
    setSaving(false);

    // Insert job into Supabase
    const { data: newJob, error } = await supabase
      .from('jobs')
      .insert({
        project_id: projectId,
        user_id: user.id,
        type: 'mapping',
        status: 'queued',
        info: { benchmarks }
      })
      .select()
      .single();

    if (error) {
      console.error('Error creating job:', error);
      showError('Failed to start mapping job: ' + error.message);
    } else {
      // Optimistically update the lock state immediately
      setPendingJob(newJob);
      setLatestMappingJob(newJob);
      showSuccess('Mapping job queued successfully');
    }
  }, [projectId, isLocked, appState, getSelectedBenchmarkNames, showError, showSuccess, benchmarkIndex, showConfirm]);

  const factory = useCallback(
    (node) => {
      const component = node.getComponent();
      const selectedBenchmarkNames = getSelectedBenchmarkNames();

      switch (component) {
        case 'design':
          return (
            <DesignTab
              architecture={architecture}
              selection={selection}
              onSelectionChange={setSelection}
              onPropertyChange={handlePropertyChange}
              disabled={isLocked}
            />
          );
        case 'mapping':
          return (
            <MappingTab
              latestMappingJob={latestMappingJob}
              graphData={graphData}
              isLocked={isLocked}
              onStartMapping={handleStartMapping}
              selectedBenchmarkNames={selectedBenchmarkNames}
            />
          );
        case 'verification':
          return <VerificationTab />;
        case 'layout':
          return <LayoutTab />;
        default:
          return null;
      }
    },
    [architecture, selection, handlePropertyChange, isLocked, latestMappingJob, graphData, handleStartMapping, getSelectedBenchmarkNames]
  );

  const handleCurrentBenchmarkChange = useCallback((benchmarkName) => {
    setCurrentBenchmark(benchmarkName);
    // Save current benchmark in app state
    setAppState((prev) => {
      if (!prev) return prev;
      return { ...prev, currentBenchmark: benchmarkName };
    });
  }, []);

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
                  <CircularProgress size={16} color="inherit" />
                ) : hasUnsavedChanges ? (
                  <Box sx={{ position: 'relative', display: 'inline-flex', ml: 0.5 }}>
                    <CircularProgress
                      variant="determinate"
                      value={(autoSaveCountdown / AUTO_SAVE_DELAY) * 100}
                      size={16}
                      thickness={5}
                      sx={{ color: 'warning.main' }}
                    />
                    <Box
                      sx={{
                        top: 0,
                        left: 0,
                        bottom: 0,
                        right: 0,
                        position: 'absolute',
                        display: 'flex',
                        alignItems: 'center',
                        justifyContent: 'center'
                      }}
                    >
                      <Typography
                        variant="caption"
                        component="div"
                        sx={{ fontSize: '8px', lineHeight: 1, color: 'warning.main' }}
                      >
                        {autoSaveCountdown}
                      </Typography>
                    </Box>
                  </Box>
                ) : (
                  <CheckCircleIcon />
                )
              }
              label={saving ? 'Saving...' : hasUnsavedChanges ? 'To be saved' : 'Saved'}
              color={saving ? 'info' : hasUnsavedChanges ? 'warning' : 'success'}
              variant="outlined"
              sx={{ ml: 1 }}
            />
            <Chip
              size="small"
              icon={isLocked ? <LockIcon /> : <CheckCircleIcon />}
              label={
                isLocked
                  ? `1 job ${pendingJob?.status === 'running' ? 'running' : 'queued'}`
                  : 'No pending jobs'
              }
              color={isLocked ? 'error' : 'default'}
              variant="outlined"
              sx={{ ml: 1 }}
            />
          </Box>
          <Box sx={{ display: 'flex', alignItems: 'center', gap: 2 }}>
            <BenchmarkSelector
              availableBenchmarks={availableBenchmarks}
              selectedBenchmarks={selectedBenchmarks}
              currentBenchmark={currentBenchmark}
              onSelectionChange={setSelectedBenchmarks}
              onCurrentChange={handleCurrentBenchmarkChange}
              disabled={isLocked}
            />
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
        <MenuItem onClick={handleSaveToSupabase} disabled={saving || isLocked}>
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

      {/* Main Tab Content */}
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
