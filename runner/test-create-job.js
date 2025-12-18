/**
 * Test script to create a sample mapping job
 * Run with: node test-create-job.js
 */

import { createClient } from '@supabase/supabase-js';
import { config } from 'dotenv';

config();

const supabase = createClient(
  process.env.SUPABASE_URL,
  process.env.SUPABASE_SERVICE_ROLE_KEY,
  {
    auth: {
      autoRefreshToken: false,
      persistSession: false
    }
  }
);

// Sample architecture (minimal 2x2 CGRA)
const sampleArchitecture = {
  version: 1,
  architecture: {
    id: 'test-device',
    name: 'Test CGRA Device',
    totalSramKb: 1024,
    interTopology: 'Mesh',
    multiCgraRows: 1,
    multiCgraColumns: 1,
    vectorLanes: 1,
    dataBitwidth: 32,
    CGRAs: [
      {
        id: 'cgra-0-0',
        label: 'CGRA (0, 0)',
        x: 0,
        y: 0,
        intraTopology: 'Mesh',
        sramBanks: 4,
        perCgraRows: 4,
        perCgraColumns: 4,
        configMemoryEntries: 20,
        PEs: []
      }
    ]
  }
};

// Add all PEs for 4x4 grid
for (let row = 0; row < 4; row++) {
  for (let col = 0; col < 4; col++) {
    sampleArchitecture.architecture.CGRAs[0].PEs.push({
      id: `pe-0-0-${row}-${col}`,
      // Label format is (x, y) = (col, row) for Cartesian coordinates
      label: `PE (${col}, ${row})`,
      x: col,
      y: row,
      disabled: false,
      tileFunctionalUnits: {
        phi: true,
        add: true,
        mul: true,
        load: true,
        store: true,
        shift: true,
        logic: true
      }
    });
  }
}

async function createTestJob() {
  console.log('Creating test mapping job...\n');

  // First, we need a user and project
  // For testing, let's try to find any existing user/project or create them

  // Get first user (for testing)
  const { data: users, error: usersError } = await supabase.auth.admin.listUsers();

  if (usersError) {
    console.error('Error fetching users:', usersError);
    console.log('\nPlease create a user first by signing up in the UI');
    return;
  }

  if (!users || users.users.length === 0) {
    console.error('No users found in the database');
    console.log('\nPlease create a user first by signing up in the UI at http://localhost:5173');
    return;
  }

  const userId = users.users[0].id;
  console.log(`Using user: ${userId}`);

  // Get or create a project
  const { data: projects, error: projectsError } = await supabase
    .from('projects')
    .select('*')
    .eq('user_id', userId)
    .limit(1);

  if (projectsError) {
    console.error('Error fetching projects:', projectsError);
    return;
  }

  let projectId;
  if (projects && projects.length > 0) {
    projectId = projects[0].id;
    console.log(`Using existing project: ${projectId}`);
  } else {
    // Create a test project
    const { data: newProject, error: createError } = await supabase
      .from('projects')
      .insert({
        user_id: userId,
        name: 'Test Project',
        data: sampleArchitecture  // Same structure as UI: { version: 1, architecture: { ... } }
      })
      .select()
      .single();

    if (createError) {
      console.error('Error creating project:', createError);
      return;
    }

    projectId = newProject.id;
    console.log(`Created new project: ${projectId}`);
  }

  // Create the job (architecture comes from project, not job.info)
  const { data: job, error: jobError } = await supabase
    .from('jobs')
    .insert({
      project_id: projectId,
      user_id: userId,
      type: 'mapping',
      info: {
        benchmarks: ['fir']  // Start with just one benchmark
      }
    })
    .select()
    .single();

  if (jobError) {
    console.error('Error creating job:', jobError);
    return;
  }

  console.log('\n✓ Job created successfully!');
  console.log(`  Job ID: ${job.id}`);
  console.log(`  Status: ${job.status}`);
  console.log(`  Type: ${job.type}`);
  console.log(`  Benchmarks: ${job.info.benchmarks.join(', ')}`);
  console.log('\nThe runner should pick this up shortly...\n');
}

createTestJob().catch(error => {
  console.error('Fatal error:', error);
  process.exit(1);
});
