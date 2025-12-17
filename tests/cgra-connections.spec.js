import { test, expect } from './fixtures.js';

test.describe('CGRA Connections', () => {
  test('creates new connections when adding new CGRAs to the grid', async ({ workspacePage: page }) => {
    const cgraNodes = page.locator('.layer-cgra-nodes g.cgra-node');
    const connections = page.locator('.layer-cgra-connections line.cgra-connection');

    await expect(cgraNodes).toHaveCount(1);
    await expect(connections).toHaveCount(0);

    const rowsInput = page.getByTestId('property-multiCgraRows');
    const columnsInput = page.getByTestId('property-multiCgraColumns');

    await rowsInput.clear();
    await rowsInput.fill('2');
    await page.keyboard.press('Enter');
    await expect(cgraNodes).toHaveCount(2);
    await expect(connections).toHaveCount(2);

    await columnsInput.clear();
    await columnsInput.fill('2');
    await page.keyboard.press('Enter');
    await expect(cgraNodes).toHaveCount(4);
    await expect(connections).toHaveCount(8);

    await rowsInput.clear();
    await rowsInput.fill('3');
    await page.keyboard.press('Enter');
    await expect(cgraNodes).toHaveCount(6);
    await expect(connections).toHaveCount(14);

    await columnsInput.clear();
    await columnsInput.fill('3');
    await page.keyboard.press('Enter');
    await expect(cgraNodes).toHaveCount(9);
    await expect(connections).toHaveCount(24);
  });

  test('creates connections for new CGRAs in different topologies', async ({ workspacePage: page }) => {
    const topologyInput = page.locator('input[data-testid="property-interTopology"]');
    const parentDiv = topologyInput.locator('..');
    await parentDiv.click();
    await page.getByRole('option', { name: 'KingMesh' }).click();

    const rowsInput = page.getByTestId('property-multiCgraRows');
    const columnsInput = page.getByTestId('property-multiCgraColumns');

    await rowsInput.fill('3');
    await columnsInput.fill('3');
    await page.keyboard.press('Enter');

    const cgraNodes = page.locator('.layer-cgra-nodes g.cgra-node');
    await expect(cgraNodes).toHaveCount(9);

    const connections = page.locator('.layer-cgra-connections line.cgra-connection');
    const kingMeshConnections = await connections.count();
    expect(kingMeshConnections).toBeGreaterThan(24);
  });

  test('maintains connections when reducing and then increasing grid size', async ({ workspacePage: page }) => {
    const cgraNodes = page.locator('.layer-cgra-nodes g.cgra-node');
    const connections = page.locator('.layer-cgra-connections line.cgra-connection');
    const rowsInput = page.getByTestId('property-multiCgraRows');
    const columnsInput = page.getByTestId('property-multiCgraColumns');

    await rowsInput.fill('3');
    await columnsInput.fill('3');
    await page.keyboard.press('Enter');

    await expect(cgraNodes).toHaveCount(9);
    await expect(connections).toHaveCount(24);

    await rowsInput.fill('2');
    await columnsInput.fill('2');
    await page.keyboard.press('Enter');

    await expect(cgraNodes).toHaveCount(4);
    await expect(connections).toHaveCount(8);

    await rowsInput.fill('3');
    await columnsInput.fill('3');
    await page.keyboard.press('Enter');

    await expect(cgraNodes).toHaveCount(9);
    await expect(connections).toHaveCount(24);

    const cgra22 = await page
      .locator('.layer-cgra-nodes g.cgra-node text')
      .filter({ hasText: 'CGRA (2, 2)' })
      .count();
    expect(cgra22).toBe(1);
  });
});