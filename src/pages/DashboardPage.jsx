import { useState, useEffect, useCallback } from 'react';
import {
  AppBar,
  Box,
  Button,
  Card,
  CardActionArea,
  CardContent,
  Container,
  Dialog,
  DialogActions,
  DialogContent,
  DialogTitle,
  Grid,
  IconButton,
  Menu,
  MenuItem,
  TextField,
  Toolbar,
  Typography
} from '@mui/material';
import AddIcon from '@mui/icons-material/Add';
import MoreVertIcon from '@mui/icons-material/MoreVert';
import LogoutIcon from '@mui/icons-material/Logout';
import GridViewIcon from '@mui/icons-material/GridView';
import { useNavigate } from 'react-router-dom';
import { useAuth } from '../contexts/AuthContext';
import { useNotification } from '../contexts/NotificationContext';
import { supabase } from '../lib/supabase';

function DashboardPage() {
  const navigate = useNavigate();
  const { user, signOut } = useAuth();
  const { showError, showConfirm } = useNotification();
  const [projects, setProjects] = useState([]);
  const [loading, setLoading] = useState(true);
  const [createDialogOpen, setCreateDialogOpen] = useState(false);
  const [newProjectName, setNewProjectName] = useState('');
  const [newProjectDescription, setNewProjectDescription] = useState('');
  const [menuAnchorEl, setMenuAnchorEl] = useState(null);
  const [selectedProject, setSelectedProject] = useState(null);

  const fetchProjects = useCallback(async () => {
    if (!user) return;

    const { data, error } = await supabase
      .from('projects')
      .select('*')
      .eq('user_id', user.id)
      .order('updated_at', { ascending: false });

    if (error) {
      console.error('Error fetching projects:', error);
    } else {
      setProjects(data || []);
    }
    setLoading(false);
  }, [user]);

  useEffect(() => {
    fetchProjects();
  }, [fetchProjects]);

  const handleCreateProject = async () => {
    if (!user?.id || !newProjectName.trim()) return;

    const { data, error } = await supabase
      .from('projects')
      .insert([
        {
          name: newProjectName.trim(),
          description: newProjectDescription.trim(),
          user_id: user.id
        }
      ])
      .select()
      .single();

    if (error) {
      console.error('Error creating project:', error);
      showError('Failed to create project: ' + error.message);
    } else {
      setProjects([data, ...projects]);
      setCreateDialogOpen(false);
      setNewProjectName('');
      setNewProjectDescription('');
    }
  };

  const handleOpenProject = (project) => {
    navigate(`/workspace/${project.id}`);
  };

  const handleMenuOpen = (event, project) => {
    event.stopPropagation();
    setMenuAnchorEl(event.currentTarget);
    setSelectedProject(project);
  };

  const handleMenuClose = () => {
    setMenuAnchorEl(null);
    setSelectedProject(null);
  };

  const handleDeleteProject = async () => {
    if (!selectedProject) return;

    const confirmed = await showConfirm({
      title: 'Delete Project',
      message: `Are you sure you want to delete "${selectedProject.name}"? This action cannot be undone.`,
      confirmText: 'Delete',
      confirmColor: 'error'
    });

    if (!confirmed) {
      handleMenuClose();
      return;
    }

    const { error } = await supabase
      .from('projects')
      .delete()
      .eq('id', selectedProject.id);

    if (error) {
      console.error('Error deleting project:', error);
      showError('Failed to delete project: ' + error.message);
    } else {
      setProjects(projects.filter((p) => p.id !== selectedProject.id));
    }
    handleMenuClose();
  };

  const handleSignOut = async () => {
    const { error } = await signOut();
    if (error) {
      showError('Failed to sign out: ' + error.message);
      return;
    }
    navigate('/');
  };

  const formatDate = (dateString) => {
    return new Date(dateString).toLocaleDateString('en-US', {
      year: 'numeric',
      month: 'short',
      day: 'numeric'
    });
  };

  return (
    <Box
      sx={{
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
          backdropFilter: 'blur(12px)',
          borderBottom: '1px solid rgba(148, 163, 184, 0.2)'
        }}
      >
        <Toolbar sx={{ justifyContent: 'space-between' }}>
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
          <Box sx={{ display: 'flex', alignItems: 'center', gap: 2 }}>
            <Typography variant="body2" sx={{ color: 'text.secondary' }}>
              {user?.email}
            </Typography>
            <IconButton
              color="inherit"
              onClick={handleSignOut}
              title="Sign out"
            >
              <LogoutIcon />
            </IconButton>
          </Box>
        </Toolbar>
      </AppBar>

      <Container maxWidth="lg" sx={{ py: 4 }}>
        <Box
          sx={{
            display: 'flex',
            justifyContent: 'space-between',
            alignItems: 'center',
            mb: 4
          }}
        >
          <Typography variant="h4" sx={{ fontWeight: 600 }}>
            My Projects
          </Typography>
          <Button
            variant="contained"
            startIcon={<AddIcon />}
            onClick={() => setCreateDialogOpen(true)}
            sx={{
              background: 'linear-gradient(135deg, #3aa8ff 0%, #5ad786 100%)',
              '&:hover': {
                background: 'linear-gradient(135deg, #2d8ad9 0%, #4bc274 100%)'
              }
            }}
          >
            New Project
          </Button>
        </Box>

        {loading ? (
          <Typography sx={{ color: 'text.secondary', textAlign: 'center', py: 8 }}>
            Loading projects...
          </Typography>
        ) : projects.length === 0 ? (
          <Card
            sx={{
              p: 6,
              textAlign: 'center',
              bgcolor: 'background.paper',
              border: '1px dashed rgba(148, 163, 184, 0.3)'
            }}
          >
            <GridViewIcon sx={{ fontSize: 64, color: 'text.secondary', mb: 2 }} />
            <Typography variant="h6" sx={{ mb: 1 }}>
              No projects yet
            </Typography>
            <Typography variant="body2" sx={{ color: 'text.secondary', mb: 3 }}>
              Create your first CGRA architecture project to get started.
            </Typography>
            <Button
              variant="contained"
              startIcon={<AddIcon />}
              onClick={() => setCreateDialogOpen(true)}
              sx={{
                background: 'linear-gradient(135deg, #3aa8ff 0%, #5ad786 100%)',
                '&:hover': {
                  background: 'linear-gradient(135deg, #2d8ad9 0%, #4bc274 100%)'
                }
              }}
            >
              Create Project
            </Button>
          </Card>
        ) : (
          <Grid container spacing={3}>
            {projects.map((project) => (
              <Grid size={{ xs: 12, sm: 6, md: 4 }} key={project.id}>
                <Card
                  sx={{
                    height: '100%',
                    bgcolor: 'background.paper',
                    border: '1px solid rgba(148, 163, 184, 0.15)',
                    transition: 'transform 0.2s, border-color 0.2s',
                    position: 'relative',
                    '&:hover': {
                      transform: 'translateY(-2px)',
                      borderColor: 'primary.main'
                    }
                  }}
                >
                  <CardActionArea
                    onClick={() => handleOpenProject(project)}
                    sx={{ height: '100%' }}
                  >
                    <CardContent>
                      <Typography variant="h6" sx={{ fontWeight: 600, mb: 1, pr: 5 }}>
                        {project.name}
                      </Typography>
                      <Typography
                        variant="body2"
                        sx={{
                          color: 'text.secondary',
                          mb: 2,
                          minHeight: 40,
                          overflow: 'hidden',
                          textOverflow: 'ellipsis',
                          display: '-webkit-box',
                          WebkitLineClamp: 2,
                          WebkitBoxOrient: 'vertical'
                        }}
                      >
                        {project.description || 'No description'}
                      </Typography>
                      <Typography variant="caption" sx={{ color: 'text.secondary' }}>
                        Updated {formatDate(project.updated_at)}
                      </Typography>
                    </CardContent>
                  </CardActionArea>
                  <IconButton
                    size="small"
                    onClick={(e) => handleMenuOpen(e, project)}
                    sx={{
                      position: 'absolute',
                      top: 16,
                      right: 16,
                      zIndex: 1
                    }}
                  >
                    <MoreVertIcon fontSize="small" />
                  </IconButton>
                </Card>
              </Grid>
            ))}
          </Grid>
        )}
      </Container>

      {/* Create Project Dialog */}
      <Dialog
        open={createDialogOpen}
        onClose={() => setCreateDialogOpen(false)}
        maxWidth="sm"
        fullWidth
      >
        <DialogTitle>Create New Project</DialogTitle>
        <DialogContent>
          <TextField
            autoFocus
            fullWidth
            label="Project Name"
            value={newProjectName}
            onChange={(e) => setNewProjectName(e.target.value)}
            margin="normal"
            required
          />
          <TextField
            fullWidth
            label="Description"
            value={newProjectDescription}
            onChange={(e) => setNewProjectDescription(e.target.value)}
            margin="normal"
            multiline
            rows={3}
          />
        </DialogContent>
        <DialogActions sx={{ px: 3, pb: 2 }}>
          <Button onClick={() => setCreateDialogOpen(false)}>Cancel</Button>
          <Button
            variant="contained"
            onClick={handleCreateProject}
            disabled={!newProjectName.trim()}
          >
            Create
          </Button>
        </DialogActions>
      </Dialog>

      {/* Project Menu */}
      <Menu
        anchorEl={menuAnchorEl}
        open={Boolean(menuAnchorEl)}
        onClose={handleMenuClose}
      >
        <MenuItem onClick={handleDeleteProject} sx={{ color: 'error.main' }}>
          Delete Project
        </MenuItem>
      </Menu>
    </Box>
  );
}

export default DashboardPage;
