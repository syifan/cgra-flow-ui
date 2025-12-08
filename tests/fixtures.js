import { test as base, expect } from '@playwright/test';
import path from 'path';
import fs from 'fs';

const PROJECT_FILE = path.join(import.meta.dirname, '.auth', 'project.json');

// Helper function to read project data with error handling
function readProjectData() {
  let projectData;
  try {
    projectData = JSON.parse(fs.readFileSync(PROJECT_FILE, 'utf-8'));
  } catch (error) {
    throw new Error(
      `Failed to read project file at ${PROJECT_FILE}. ` +
      `Make sure the auth setup ran successfully. Error: ${error.message}`
    );
  }

  if (!projectData.projectId) {
    throw new Error('Project ID not found in project file');
  }

  return projectData;
}

/**
 * Extended test fixture that provides a workspace page.
 * This automatically navigates to the workspace with the test project.
 */
export const test = base.extend({
  /**
   * workspacePage fixture - navigates to the workspace before each test
   */
  workspacePage: async ({ page }, use) => {
    const { projectId } = readProjectData();

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
    const { projectId } = readProjectData();
    await use(projectId);
  }
});

export { expect };
