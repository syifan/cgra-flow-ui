import { test, expect } from './fixtures.js';

test.describe('Initial layout', () => {
  test('renders all expected tabs', async ({ workspacePage: page }) => {
    // workspacePage fixture already navigates to the workspace

    const expectedTabs = ['1. Design', '2. Mapping', '3. Verification', '4. Layout'];

    for (const tabLabel of expectedTabs) {
      const tab = page.getByText(tabLabel, { exact: true }).first();
      await expect(tab).toBeVisible();
    }
  });
});
