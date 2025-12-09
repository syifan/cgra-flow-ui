/**
 * Job processor for claiming and executing jobs from the queue.
 */

// Track if we've already warned about missing RPC
let rpcWarningShown = false

/**
 * Claim the next available job atomically.
 * Uses FOR UPDATE SKIP LOCKED to prevent race conditions between multiple runners.
 *
 * @param {import('@supabase/supabase-js').SupabaseClient} supabase
 * @param {string} runnerId
 * @returns {Promise<object|null>} The claimed job or null if no jobs available
 */
export async function claimNextJob(supabase, runnerId) {
  // Use a raw SQL query with FOR UPDATE SKIP LOCKED for atomic claiming
  // This ensures only one runner can claim a job even with concurrent runners
  const { data, error } = await supabase.rpc('claim_next_job', {
    p_runner_id: runnerId
  })

  if (error) {
    // If the RPC doesn't exist yet, fall back to a simple approach
    // (This is less safe but works for single runner)
    // Check for PostgREST error (PGRST202) or PostgreSQL error (42883)
    const isFunctionNotFound =
      error.code === 'PGRST202' ||
      error.code === '42883' ||
      error.message?.includes('Could not find the function')

    if (isFunctionNotFound) {
      if (!rpcWarningShown) {
        console.warn('claim_next_job RPC not found, using fallback method')
        rpcWarningShown = true
      }
      return claimNextJobFallback(supabase, runnerId)
    }
    throw error
  }

  return data
}

/**
 * Fallback method for claiming jobs when RPC is not available.
 * Less safe for concurrent runners but works for single runner setup.
 *
 * @param {import('@supabase/supabase-js').SupabaseClient} supabase
 * @param {string} runnerId
 * @returns {Promise<object|null>}
 */
async function claimNextJobFallback(supabase, runnerId) {
  // Find the oldest queued job
  const { data: jobs, error: selectError } = await supabase
    .from('jobs')
    .select('*')
    .eq('status', 'queued')
    .order('created_at', { ascending: true })
    .limit(1)

  if (selectError) throw selectError
  if (!jobs || jobs.length === 0) return null

  const job = jobs[0]

  // Try to claim it by updating status to 'running'
  const { data: updatedJob, error: updateError } = await supabase
    .from('jobs')
    .update({
      status: 'running',
      started_at: new Date().toISOString(),
      info: { ...job.info, runner_id: runnerId }
    })
    .eq('id', job.id)
    .eq('status', 'queued') // Only if still queued (basic race protection)
    .select()
    .single()

  if (updateError) {
    // Job was claimed by another runner
    if (updateError.code === 'PGRST116') return null
    throw updateError
  }

  return updatedJob
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
export async function failJob(supabase, jobId, errorMessage) {
  const { error } = await supabase
    .from('jobs')
    .update({
      status: 'failed',
      completed_at: new Date().toISOString(),
      error_message: errorMessage
    })
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
