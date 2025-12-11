import { test, expect } from "./fixtures.js";
import { spawn } from "child_process";
import path from "path";

test.describe("Mapping job lifecycle", () => {
  test("completes full mapping job cycle: queued -> running -> success", async ({
    workspacePage: page,
  }) => {
    // Increase timeout for this test since the fake runner takes 10-30 seconds
    test.setTimeout(120000);

    let runnerProcess;

    try {
      // Navigate to the Mapping tab
      await page.getByText("Mapping", { exact: true }).first().click();

      // Wait for the mapping panel to be visible
      await expect(
        page.getByText("Select benchmarks to map on your CGRA design:")
      ).toBeVisible();

      // Verify initial state - no pending jobs
      await expect(
        page.locator('.MuiChip-label:has-text("No pending jobs")')
      ).toBeVisible();

      // Select the FIR benchmark
      const firCheckbox = page.getByRole("checkbox").first();
      await firCheckbox.check();

      // Click Start Mapping button
      await page.getByRole("button", { name: "Start Mapping" }).click();

      // Wait for success notification
      await expect(
        page.locator("text=Mapping job queued successfully")
      ).toBeVisible({ timeout: 5000 });

      // ===== PHASE 1: Verify QUEUED state (before runner starts) =====

      // Verify job is queued - check for locked indicator with "queued" text
      await expect(
        page.locator('.MuiChip-label:has-text("1 job queued")')
      ).toBeVisible({ timeout: 5000 });

      // Verify the Mapping tab shows "Queued" status
      await expect(page.getByText("Queued", { exact: true })).toBeVisible({
        timeout: 5000,
      });

      // Verify UI is locked - Start Mapping button should be disabled
      await expect(
        page.getByRole("button", { name: "Start Mapping" })
      ).toBeDisabled();

      // Verify checkboxes are disabled when locked
      await expect(firCheckbox).toBeDisabled();

      // ===== PHASE 2: Start runner and verify RUNNING state =====

      // Now start the runner to pick up the job
      const runnerDir = path.join(import.meta.dirname, "..", "runner");
      runnerProcess = spawn("node", ["index.js"], {
        cwd: runnerDir,
        stdio: "pipe",
        env: {
          ...process.env,
          POLL_INTERVAL_MS: "1000", // Poll every 1 second for faster tests
        },
      });

      runnerProcess.stdout.on("data", (data) => {
        console.log(`[Runner] ${data.toString().trim()}`);
      });

      runnerProcess.stderr.on("data", (data) => {
        console.error(`[Runner Error] ${data.toString().trim()}`);
      });

      runnerProcess.on("error", (err) => {
        console.error(`[Runner] Failed to start: ${err.message}`);
      });

      // Wait for job to be picked up by runner (status changes to running)
      await expect(
        page.locator('.MuiChip-label:has-text("1 job running")')
      ).toBeVisible({ timeout: 15000 });

      // Verify the Mapping tab shows "Running" status
      await expect(page.getByText("Running", { exact: true })).toBeVisible({
        timeout: 5000,
      });

      // UI should still be locked while running
      await expect(
        page.getByRole("button", { name: "Start Mapping" })
      ).toBeDisabled();
      await expect(firCheckbox).toBeDisabled();

      // ===== PHASE 3: Wait for SUCCESS state =====

      // Wait for job to complete (fake runner takes 10-30 seconds)
      // The job completes and status changes to success, UI unlocks
      await expect(
        page.locator('.MuiChip-label:has-text("No pending jobs")')
      ).toBeVisible({ timeout: 60000 });

      // Verify the Mapping tab shows "Success" status
      await expect(
        page.locator('.MuiChip-label:has-text("Success")')
      ).toBeVisible({ timeout: 5000 });

      // Verify UI is unlocked - Start Mapping button should be enabled again
      await expect(
        page.getByRole("button", { name: "Start Mapping" })
      ).toBeEnabled();

      // Verify checkboxes are enabled again
      await expect(firCheckbox).toBeEnabled();
    } finally {
      // Always clean up the runner process
      if (runnerProcess) {
        runnerProcess.kill("SIGTERM");
        // Wait for graceful shutdown
        await new Promise((resolve) => setTimeout(resolve, 1000));
      }
    }
  });
});
