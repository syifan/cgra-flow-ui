## Context

Currently, the DesignTab has a split layout with MainCanvas on the left (70%) and PropertyInspector on the right (30%). The right panel only displays manual property editing controls. To prepare for AI-assisted configuration features, we need to add a tabbed interface to the right panel.

## Goals / Non-Goals

**Goals:**
- Add tabbed navigation to the right panel with "Manual" and "AI Assistant" tabs
- Preserve existing PropertyInspector functionality under the "Manual" tab
- Create UI scaffolding for AI Assistant chat interface
- Maintain current DesignTab external API (props remain unchanged)

**Non-Goals:**
- Implement actual AI chat functionality or backend integration
- Modify PropertyInspector internal logic or appearance
- Change the left side MainCanvas area
- Affect other workspace tabs (Mapping, Verification, Layout)

## Decisions

**Component Structure: SidePanel Wrapper**
- Decision: Create a new SidePanel component that wraps the tab logic
- Rationale: Keeps DesignTab clean, makes the panel reusable, isolates tab state management
- Alternative: Inline tabs in DesignTab - rejected because it clutters the layout component

**Tab State Management**
- Decision: Use React useState for active tab state within SidePanel
- Rationale: Simple and sufficient; tab state doesn't need to persist or be shared
- Alternative: URL-based state or context - rejected as unnecessary complexity

**AI Assistant Panel Content**
- Decision: Create placeholder with basic chat UI structure (message list + input)
- Rationale: Provides clear structure for future AI integration
- Alternative: Empty placeholder - rejected, basic UI helps visualize the end state

**Styling Approach**
- Decision: Use MUI Tabs with consistent dark theme styling
- Rationale: Matches existing MUI-based UI, minimal custom CSS needed
- Alternative: Custom tab implementation - rejected, unnecessary effort

## Risks / Trade-offs

**Vertical Space Usage** → Tabs consume ~48px vertical space that was previously available for PropertyInspector
**Mitigation**: PropertyInspector already has scrollable content; minimal impact on usability

**User Confusion** → New tab interface may initially confuse users familiar with the direct property view
**Mitigation**: Default to "Manual" tab preserving existing behavior; clear tab labels

**Future AI Panel Complexity** → Current simple design may need significant changes when real AI is integrated
**Mitigation**: This is expected and acceptable - this change is explicitly UI-only groundwork
