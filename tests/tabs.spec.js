import { test, expect } from './fixtures.js';

test.describe('Initial layout', () => {
  test('renders all expected tabs', async ({ workspacePage: page }) => {
    // workspacePage fixture already navigates to the workspace

    const expectedTabs = ['Canvas', 'Properties', 'GenAI', 'Mapping', 'Verification', 'Layout'];

    for (const tabLabel of expectedTabs) {
      const tab = page.getByText(tabLabel, { exact: true }).first();
      await expect(tab).toBeVisible();
    }
  });
});
