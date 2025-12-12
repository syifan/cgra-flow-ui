/**
 * CGRA Flow Job Runner
 *
 * A service that polls the job queue and processes jobs.
 * Uses Supabase service role for cross-user access.
 */

import { createClient } from '@supabase/supabase-js'
import { config } from 'dotenv'
import { claimNextJob, completeJob, failJob, executeJobFake, executeJob } from './jobProcessor.js'

// Load environment variables
config()

// Configuration
const SUPABASE_URL = process.env.SUPABASE_URL
const SUPABASE_SERVICE_ROLE_KEY = process.env.SUPABASE_SERVICE_ROLE_KEY
const RUNNER_ID = process.env.RUNNER_ID || `runner-${Date.now()}`
const POLL_INTERVAL_MS = parseInt(process.env.POLL_INTERVAL_MS || '5000', 10)
const RUNNER_MODE = process.env.RUNNER_MODE || 'fake' // 'fake' or 'real'

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

/**
 * Main polling loop
 */
async function runLoop() {
  console.log(`Runner ${RUNNER_ID} started`)
  console.log(`Mode: ${RUNNER_MODE}`)
  console.log(`Polling interval: ${POLL_INTERVAL_MS}ms`)
  console.log('Waiting for jobs...\n')

  while (isRunning) {
    try {
      // Try to claim a job
      const job = await claimNextJob(supabase, RUNNER_ID)

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
          await failJob(supabase, job.id, execError.message)
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

  if (currentJob) {
    console.log(`Waiting for current job ${currentJob.id} to complete...`)
    // In a real implementation, you might want to:
    // - Wait with a timeout
    // - Or mark the job as 'queued' again so another runner can pick it up
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
