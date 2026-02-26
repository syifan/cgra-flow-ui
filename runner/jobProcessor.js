/**
 * Job processor for claiming and executing jobs from the queue.
 */

import { executeMappingJob } from './mappingExecutor.js';

/**
 * Claim the next available job atomically.
 * Uses FOR UPDATE SKIP LOCKED to prevent race conditions between multiple runners.
 *
 * @param {import('@supabase/supabase-js').SupabaseClient} supabase
 * @param {string} runnerId
 * @param {string|null} targetProjectId - Optional project filter for test isolation
 * @returns {Promise<object|null>} The claimed job or null if no jobs available
 */
export async function claimNextJob(supabase, runnerId, targetProjectId = null) {
  // Test-only path: scope claims to one project to avoid queue interference
  if (targetProjectId) {
    const { data: queuedJob, error: selectError } = await supabase
      .from('jobs')
      .select('*')
      .eq('status', 'queued')
      .eq('project_id', targetProjectId)
      .order('created_at', { ascending: true })
      .limit(1)
      .maybeSingle()

    if (selectError) {
      throw selectError
    }
    if (!queuedJob) {
      return null
    }

    const nextInfo = {
      ...(queuedJob.info || {}),
      runner_id: runnerId
    }

    const { data: claimedJob, error: updateError } = await supabase
      .from('jobs')
      .update({
        status: 'running',
        started_at: new Date().toISOString(),
        updated_at: new Date().toISOString(),
        info: nextInfo
      })
      .eq('id', queuedJob.id)
      .eq('status', 'queued')
      .select('*')
      .maybeSingle()

    if (updateError) {
      throw updateError
    }

    return claimedJob || null
  }

  const { data, error } = await supabase.rpc('claim_next_job', {
    p_runner_id: runnerId
  })

  if (error) {
    throw error
  }

  // RPC returns an array (SETOF), return first item or null
  return data && data.length > 0 ? data[0] : null
}

/**
 * Mark a job as completed successfully.
 *
 * @param {import('@supabase/supabase-js').SupabaseClient} supabase
 * @param {string} jobId
 * @param {object} resultInfo - Additional info to store in the job
 */
export async function completeJob(supabase, jobId, resultInfo = {}) {
  const { error } = await supabase
    .from('jobs')
    .update({
      status: 'success',
      completed_at: new Date().toISOString(),
      info: resultInfo
    })
    .eq('id', jobId)

  if (error) throw error
}

/**
 * Mark a job as failed.
 *
 * @param {import('@supabase/supabase-js').SupabaseClient} supabase
 * @param {string} jobId
 * @param {string} errorMessage
 */
export async function failJob(supabase, jobId, errorMessage, info) {
  const update = {
    status: 'failed',
    completed_at: new Date().toISOString(),
    error_message: errorMessage
  }

  if (info !== undefined) {
    update.info = info
  }

  const { error } = await supabase
    .from('jobs')
    .update(update)
    .eq('id', jobId)

  if (error) throw error
}

/**
 * Simulate job execution with random duration.
 * This is a fake implementation for testing.
 *
 * @param {object} job - The job to process
 * @returns {Promise<object>} Result info
 */
export async function executeJobFake(job) {
  // Random duration between 10-30 seconds
  const durationMs = Math.floor(Math.random() * 20000) + 10000
  const durationSec = (durationMs / 1000).toFixed(1)

  console.log(`  Simulating ${job.type} job execution for ${durationSec}s...`)

  await new Promise(resolve => setTimeout(resolve, durationMs))

  // Return fake result info
  return {
    ...job.info,
    execution_time_ms: durationMs,
    completed_by: 'fake_runner',
    result: `Fake ${job.type} completed successfully`
  }
}

/**
 * Execute a job based on its type (real implementation)
 *
 * @param {object} job - The job to process
 * @returns {Promise<object>} Result info
 */
export async function executeJob(job) {
  switch (job.type) {
    case 'mapping':
      return await executeMappingJob(job);

    case 'verification':
    case 'layout':
      throw new Error(`Job type "${job.type}" not yet implemented`);

    default:
      throw new Error(`Unknown job type: ${job.type}`);
  }
}
