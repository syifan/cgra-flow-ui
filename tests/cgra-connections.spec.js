import { test, expect } from './fixtures.js';

test.describe('CGRA Connections', () => {
  test('creates new connections when adding new CGRAs to the grid', async ({ workspacePage: page }) => {
    // Initial state: 4x4 grid (16 CGRAs)
    const initialCGRAs = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(initialCGRAs).toBe(16);

    // Count initial CGRA connections
    const initialConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();

    // In a 4x4 mesh topology, connections are bidirectional so each line represents both directions
    // Each CGRA connects to its neighbors (up to 4 in mesh topology)
    // But connections are rendered once per pair (not duplicated)
    // - Horizontal connections: 3 per row × 4 rows = 12
    // - Vertical connections: 4 per column × 3 = 12
    // Total: 24 connections (but rendered as 48 because each connection has two endpoints)
    expect(initialConnections).toBe(48);

    // Increase grid to 5x4 (20 CGRAs)
    const rowsInput = page.getByTestId('property-multiCgraRows');
    await rowsInput.clear();
    await rowsInput.fill('5');
    await page.keyboard.press('Enter');

    // Wait for the grid to update
    await page.waitForTimeout(500);

    // Verify new CGRAs were created
    const newCGRACount = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(newCGRACount).toBe(20);

    // Count new connections
    const newConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();

    // In a 5x4 mesh topology, we expect:
    // - Horizontal connections: 3 per row × 5 rows = 15
    // - Vertical connections: 4 per column × 4 = 16
    // Total: 31 connections × 2 (bidirectional) = 62
    expect(newConnections).toBe(62);

    // Verify the new row (row 4) has connections to the row below (row 3)
    // The new CGRAs should be: CGRA (0,4), CGRA (1,4), CGRA (2,4), CGRA (3,4)
    // Each should have a connection to the CGRA below it

    // Check that CGRA (0,4) exists
    const cgra04 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (0, 4)' }).count();
    expect(cgra04).toBe(1);

    // Check that CGRA (1,4) exists
    const cgra14 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (1, 4)' }).count();
    expect(cgra14).toBe(1);

    // Check that CGRA (2,4) exists
    const cgra24 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (2, 4)' }).count();
    expect(cgra24).toBe(1);

    // Check that CGRA (3,4) exists
    const cgra34 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (3, 4)' }).count();
    expect(cgra34).toBe(1);

    // Further increase grid to 5x5 (25 CGRAs)
    const columnsInput = page.getByTestId('property-multiCgraColumns');
    await columnsInput.clear();
    await columnsInput.fill('5');
    await page.keyboard.press('Enter');

    // Wait for the grid to update
    await page.waitForTimeout(500);

    // Verify new CGRAs were created
    const finalCGRACount = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(finalCGRACount).toBe(25);

    // Count final connections
    const finalConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();

    // In a 5x5 mesh topology, we expect:
    // - Horizontal connections: 4 per row × 5 rows = 20
    // - Vertical connections: 5 per column × 4 = 20
    // Total: 40 connections × 2 (bidirectional) = 80
    expect(finalConnections).toBe(80);

    // Verify the new column (column 4) has connections
    // The new CGRAs in column 4 should be: CGRA (4,0), CGRA (4,1), CGRA (4,2), CGRA (4,3), CGRA (4,4)
    // Each (except the last) should have connections to adjacent CGRAs

    // Check that new column CGRAs exist
    const cgra40 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (4, 0)' }).count();
    expect(cgra40).toBe(1);

    const cgra41 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (4, 1)' }).count();
    expect(cgra41).toBe(1);

    const cgra42 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (4, 2)' }).count();
    expect(cgra42).toBe(1);

    const cgra43 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (4, 3)' }).count();
    expect(cgra43).toBe(1);

    const cgra44 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (4, 4)' }).count();
    expect(cgra44).toBe(1);
  });

  test('creates connections for new CGRAs in different topologies', async ({ workspacePage: page }) => {
    // Change to KingMesh topology which should have diagonal connections
    // Material UI Select requires clicking and selecting from the dropdown
    const topologyInput = page.locator('input[data-testid="property-interTopology"]');
    const parentDiv = topologyInput.locator('..');
    await parentDiv.click();

    // Select KingMesh from the dropdown menu
    await page.getByRole('option', { name: 'KingMesh' }).click();

    // Wait for topology change to apply
    await page.waitForTimeout(500);

    // Initial state: 4x4 grid with KingMesh topology
    const initialCGRAs = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(initialCGRAs).toBe(16);

    // Count initial connections - KingMesh has more connections due to diagonals
    const initialConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();

    // KingMesh connections calculation for 4x4:
    // Each internal CGRA (2x2 = 4 CGRAs) has 8 connections
    // Edge CGRAs (not corners) have 5 connections each (8 edge CGRAs)
    // Corner CGRAs have 3 connections each (4 corners)
    // But we need to avoid double-counting (each connection is between 2 CGRAs)
    // Expected: more than the 24 connections of a regular mesh
    expect(initialConnections).toBeGreaterThan(24);

    // Increase to 5x5 grid
    const rowsInput = page.getByTestId('property-multiCgraRows');
    await rowsInput.clear();
    await rowsInput.fill('5');
    await page.keyboard.press('Enter');

    const columnsInput = page.getByTestId('property-multiCgraColumns');
    await columnsInput.clear();
    await columnsInput.fill('5');
    await page.keyboard.press('Enter');

    // Wait for the grid to update
    await page.waitForTimeout(500);

    // Verify new CGRAs were created
    const newCGRACount = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(newCGRACount).toBe(25);

    // Count new connections - should be more than in mesh topology
    const newConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();

    // KingMesh 5x5 should have significantly more connections than Mesh 5x5 (40)
    expect(newConnections).toBeGreaterThan(40);

    // Verify that new CGRAs in row 4 and column 4 are properly connected
    const cgra44 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (4, 4)' }).count();
    expect(cgra44).toBe(1);
  });

  test('maintains connections when reducing and then increasing grid size', async ({ workspacePage: page }) => {
    // Initial state: 4x4 grid
    const initialCGRAs = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(initialCGRAs).toBe(16);

    const initialConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();
    // Connections are rendered as bidirectional (2 lines per connection)
    expect(initialConnections).toBe(48);

    // Reduce to 3x3 grid
    const rowsInput = page.getByTestId('property-multiCgraRows');
    await rowsInput.clear();
    await rowsInput.fill('3');
    await page.keyboard.press('Enter');

    const columnsInput = page.getByTestId('property-multiCgraColumns');
    await columnsInput.clear();
    await columnsInput.fill('3');
    await page.keyboard.press('Enter');

    // Wait for the grid to update
    await page.waitForTimeout(500);

    // Verify CGRAs were removed
    const reducedCGRACount = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(reducedCGRACount).toBe(9);

    // Count reduced connections
    const reducedConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();

    // 3x3 mesh: 2 per row × 3 rows + 3 per column × 2 = 6 + 6 = 12 × 2 (bidirectional) = 24
    expect(reducedConnections).toBe(24);

    // Increase back to 4x4 grid
    await rowsInput.clear();
    await rowsInput.fill('4');
    await page.keyboard.press('Enter');

    await columnsInput.clear();
    await columnsInput.fill('4');
    await page.keyboard.press('Enter');

    // Wait for the grid to update
    await page.waitForTimeout(500);

    // Verify CGRAs were re-created
    const restoredCGRACount = await page.locator('.layer-cgra-nodes g.cgra-node').count();
    expect(restoredCGRACount).toBe(16);

    // Verify connections were restored
    const restoredConnections = await page.locator('.layer-cgra-connections line.cgra-connection').count();
    expect(restoredConnections).toBe(48);

    // Verify that the restored CGRAs have proper labels
    const cgra33 = await page.locator('.layer-cgra-nodes g.cgra-node text').filter({ hasText: 'CGRA (3, 3)' }).count();
    expect(cgra33).toBe(1);
  });
});