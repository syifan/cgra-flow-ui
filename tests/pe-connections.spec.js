import { test, expect } from './fixtures.js';

test.describe('PE Connections', () => {
  test('creates PE links when adding new CGRAs', async ({ workspacePage: page }) => {

    const peConnections = page.locator('svg .layer-pe-connections line.pe-connection');
    const initialConnectionCount = await peConnections.count();
    expect(initialConnectionCount).toBe(48);

    const rowsInput = page.getByTestId('property-multiCgraRows');
    await rowsInput.clear();
    await rowsInput.fill('5');
    await page.keyboard.press('Enter');

    const cgraNodes = page.locator('svg .layer-cgra-nodes g.cgra-node');
    await expect(cgraNodes).toHaveCount(5);

    const peNodes = page.locator('svg .layer-pe-nodes g.pe-node');
    await expect(peNodes).toHaveCount(80);

    const updatedConnectionCount = await peConnections.count();
    // 136 architectural links render as 272 SVG lines because each bidirectional edge is drawn twice.
    expect(updatedConnectionCount).toBe(272);
  });
});
