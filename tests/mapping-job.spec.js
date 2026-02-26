import { test, expect } from "./fixtures.js";
import { spawn } from "child_process";
import path from "path";

test.describe("Mapping job lifecycle", () => {
  test("completes full mapping job cycle: queued -> running -> success", async ({
    workspacePage: page,
    projectId,
  }) => {
    // Increase timeout for this test since the fake runner takes 10-30 seconds
    test.setTimeout(120000);

    let runnerProcess;

    try {
      // Navigate to the Mapping tab (tabs are now numbered)
      await page.getByText("2. Mapping").first().click();

      // Wait for the mapping panel to be visible
      await expect(
        page.getByText("Dependency Graph")
      ).toBeVisible();

      // Verify initial state - no pending jobs
      await expect(
        page.locator('.MuiChip-label:has-text("No pending jobs")')
      ).toBeVisible();

      // Ensure FIR benchmark is selected (some environments may start with no benchmark selected).
      const benchmarkSelector = page.locator("header button").filter({
        hasText: /Current:|No benchmark selected|No current benchmark/
      }).first();
      await expect(benchmarkSelector).toBeVisible();

      const selectorLabel = (await benchmarkSelector.textContent()) || "";
      if (
        selectorLabel.includes("No benchmark selected") ||
        selectorLabel.includes("No current benchmark") ||
        selectorLabel.includes("| 0 selected")
      ) {
        await benchmarkSelector.click();
        const selectorDialog = page.getByRole("dialog", { name: "Select Benchmarks" });
        await expect(selectorDialog).toBeVisible();
        await selectorDialog.getByRole("button", { name: /FIR/i }).first().click();
        await selectorDialog.getByRole("button", { name: "Done" }).click();
        await expect(benchmarkSelector).toContainText(/Current: FIR/i);
      }

      // Click Start Mapping button
      await page.getByRole("button", { name: "Start Mapping" }).click();

      // The architecture may or may not require confirmation depending on enabled units.
      // Support both flows:
      // 1) Missing units dialog appears and requires confirmation
      // 2) Job queues directly without a dialog
      const confirmDialog = page.getByRole("dialog", { name: "Missing Functional Units" });
      const queuedToast = page.locator("text=Mapping job queued successfully");
      const firstSignal = await Promise.race([
        confirmDialog
          .waitFor({ state: "visible", timeout: 5000 })
          .then(() => "confirm"),
        queuedToast
          .waitFor({ state: "visible", timeout: 5000 })
          .then(() => "queued"),
      ]).catch(() => null);

      if (firstSignal === "confirm") {
        await confirmDialog.getByRole("button", { name: "Start Mapping" }).click();
      }

      // Wait for success notification
      await expect(queuedToast).toBeVisible({ timeout: 5000 });

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

      // Verify benchmark selector is disabled when locked
      await expect(benchmarkSelector).toBeDisabled();

      // ===== PHASE 2: Start runner and verify RUNNING state =====

      // Now start the runner to pick up the job
      const runnerDir = path.join(import.meta.dirname, "..", "runner");
      runnerProcess = spawn("node", ["index.js"], {
        cwd: runnerDir,
        stdio: "pipe",
        env: {
          ...process.env,
          POLL_INTERVAL_MS: "1000", // Poll every 1 second for faster tests
          RUNNER_PROJECT_ID: projectId, // Isolate test runner from global queue backlog
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
      await expect(benchmarkSelector).toBeDisabled();

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

      // Verify benchmark selector is enabled again
      await expect(benchmarkSelector).toBeEnabled();
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
