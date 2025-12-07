import { test as base, expect } from '@playwright/test';
import path from 'path';
import fs from 'fs';

const PROJECT_FILE = path.join(import.meta.dirname, '.auth', 'project.json');

/**
 * Extended test fixture that provides a workspace page.
 * This automatically navigates to the workspace with the test project.
 */
export const test = base.extend({
  /**
   * workspacePage fixture - navigates to the workspace before each test
   */
  workspacePage: async ({ page }, use) => {
    // Read the project ID from the auth setup
    const projectData = JSON.parse(fs.readFileSync(PROJECT_FILE, 'utf-8'));
    const { projectId } = projectData;

    // Navigate to the workspace
    await page.goto(`/workspace/${projectId}`);
    await page.waitForLoadState('networkidle');

    // Wait for the canvas to be ready (indicates workspace is loaded)
    // Use a more specific selector for the main canvas SVG (the one with CGRA nodes)
    await expect(page.locator('svg .layer-cgra-nodes')).toBeVisible({ timeout: 10000 });

    // Provide the page to the test
    await use(page);
  },

  /**
   * projectId fixture - provides the test project ID
   */
  projectId: async ({}, use) => {
    const projectData = JSON.parse(fs.readFileSync(PROJECT_FILE, 'utf-8'));
    await use(projectData.projectId);
  }
});

export { expect };
