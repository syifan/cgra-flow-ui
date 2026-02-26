/**
 * CGRA Flow Job Runner
 *
 * A service that polls the job queue and processes jobs.
 * Uses Supabase service role for cross-user access.
 */

import { createClient } from '@supabase/supabase-js'
import { config } from 'dotenv'
import { claimNextJob, completeJob, failJob, executeJobFake, executeJob } from './jobProcessor.js'
import { upsertRunnerHeartbeat, markRunnerStopped } from './runnerHeartbeat.js'

// Load environment variables
config()

// Configuration
const SUPABASE_URL = process.env.SUPABASE_URL
const SUPABASE_SERVICE_ROLE_KEY = process.env.SUPABASE_SERVICE_ROLE_KEY
const RUNNER_ID = process.env.RUNNER_ID || `runner-${Date.now()}`
const POLL_INTERVAL_MS = parseInt(process.env.POLL_INTERVAL_MS || '5000', 10)
const RUNNER_MODE = process.env.RUNNER_MODE || 'real' // 'fake' or 'real'
const RUNNER_PROJECT_ID = process.env.RUNNER_PROJECT_ID || null
const RUNNER_ALLOW_FAKE_CLAIM = /^(true|1|yes)$/i.test(process.env.RUNNER_ALLOW_FAKE_CLAIM || 'false')
const RUNNER_HEARTBEAT_INTERVAL_MS = parseInt(process.env.RUNNER_HEARTBEAT_INTERVAL_MS || '10000', 10)

if (!['real', 'fake'].includes(RUNNER_MODE)) {
  console.error(`Error: invalid RUNNER_MODE="${RUNNER_MODE}". Expected "real" or "fake".`)
  process.exit(1)
}

// Validate required environment variables
if (!SUPABASE_URL || !SUPABASE_SERVICE_ROLE_KEY) {
  console.error('Error: Missing required environment variables')
  console.error('Please set SUPABASE_URL and SUPABASE_SERVICE_ROLE_KEY')
  process.exit(1)
}

// Create Supabase client with service role (bypasses RLS)
const supabase = createClient(SUPABASE_URL, SUPABASE_SERVICE_ROLE_KEY, {
  auth: {
    autoRefreshToken: false,
    persistSession: false
  }
})

// State
let isRunning = true
let currentJob = null
let heartbeatTimer = null
let heartbeatUnsupportedWarned = false

async function heartbeatTick() {
  const result = await upsertRunnerHeartbeat(supabase, {
    runnerId: RUNNER_ID,
    runnerMode: RUNNER_MODE,
    runnerProjectId: RUNNER_PROJECT_ID,
    version: process.env.npm_package_version || 'unknown'
  })
  if (!result.ok && !heartbeatUnsupportedWarned) {
    const msg = result.error?.message || String(result.error)
    // Backward-compatible behavior while old DB schema is still deployed.
    if (/upsert_runner_heartbeat/i.test(msg)) {
      heartbeatUnsupportedWarned = true
      console.warn('Heartbeat RPC not found. Apply latest Supabase migrations to enable runner heartbeat tracking.')
      return
    }
    console.warn(`Heartbeat update failed: ${msg}`)
  }
}

/**
 * Main polling loop
 */
async function runLoop() {
  console.log(`Runner ${RUNNER_ID} started`)
  console.log(`Mode: ${RUNNER_MODE}`)
  console.log(`Polling interval: ${POLL_INTERVAL_MS}ms`)
  console.log(`Heartbeat interval: ${RUNNER_HEARTBEAT_INTERVAL_MS}ms`)
  if (RUNNER_MODE === 'fake' && !RUNNER_ALLOW_FAKE_CLAIM) {
    console.log('Fake runner claim is DISABLED (set RUNNER_ALLOW_FAKE_CLAIM=true to opt in).')
  }
  if (RUNNER_PROJECT_ID) {
    console.log(`Project scope: ${RUNNER_PROJECT_ID}`)
  }
  console.log('Waiting for jobs...\n')

  await heartbeatTick()
  heartbeatTimer = setInterval(() => {
    heartbeatTick().catch((error) => {
      console.warn(`Heartbeat loop error: ${error.message}`)
    })
  }, RUNNER_HEARTBEAT_INTERVAL_MS)
  heartbeatTimer.unref?.()

  while (isRunning) {
    try {
      // Try to claim a job
      const job = await claimNextJob(
        supabase,
        RUNNER_ID,
        RUNNER_MODE,
        RUNNER_PROJECT_ID,
        RUNNER_ALLOW_FAKE_CLAIM
      )

      if (job) {
        currentJob = job
        console.log(`[${new Date().toISOString()}] Claimed job:`)
        console.log(`  ID: ${job.id}`)
        console.log(`  Type: ${job.type}`)
        console.log(`  Project: ${job.project_id}`)
        console.log(`  User: ${job.user_id}`)

        try {
          // Execute the job (fake or real based on mode)
          const resultInfo = RUNNER_MODE === 'real'
            ? await executeJob(job)
            : await executeJobFake(job)

          // Mark as completed
          await completeJob(supabase, job.id, resultInfo)
          console.log(`  ✓ Job completed successfully\n`)
        } catch (execError) {
          // Mark as failed
          console.error(`  ✗ Job execution failed: ${execError.message}`)
          if (execError.stack) {
            console.error(`  Stack trace: ${execError.stack}`)
          }
          // Use execError.jobInfo which contains job_package from the finally block
          await failJob(supabase, job.id, execError.message, execError.jobInfo || {})
          console.log('')
        }

        currentJob = null
      } else {
        // No jobs available, wait before polling again
        await sleep(POLL_INTERVAL_MS)
      }
    } catch (error) {
      console.error(`Error in run loop: ${error.message}`)
      // Wait before retrying on error
      await sleep(POLL_INTERVAL_MS)
    }
  }
}

/**
 * Sleep for specified milliseconds
 */
function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms))
}

/**
 * Graceful shutdown handler
 */
async function shutdown(signal) {
  console.log(`\nReceived ${signal}, shutting down gracefully...`)
  isRunning = false

  if (heartbeatTimer) {
    clearInterval(heartbeatTimer)
    heartbeatTimer = null
  }

  if (currentJob) {
    console.log(`Waiting for current job ${currentJob.id} to complete...`)
    // In a real implementation, you might want to:
    // - Wait with a timeout
    // - Or mark the job as 'queued' again so another runner can pick it up
  }

  const stopped = await markRunnerStopped(supabase, RUNNER_ID)
  if (!stopped.ok && !heartbeatUnsupportedWarned) {
    const msg = stopped.error?.message || String(stopped.error)
    if (!/mark_runner_stopped/i.test(msg)) {
      console.warn(`Failed to mark runner stopped: ${msg}`)
    }
  }

  console.log('Runner stopped')
  process.exit(0)
}

// Register shutdown handlers
process.on('SIGTERM', () => shutdown('SIGTERM'))
process.on('SIGINT', () => shutdown('SIGINT'))

// Start the runner
runLoop().catch(error => {
  console.error('Fatal error:', error)
  process.exit(1)
})
