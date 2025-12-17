import { Fragment, useMemo } from 'react';
import {
  Box,
  Divider,
  FormControlLabel,
  MenuItem,
  Switch,
  TextField,
  Typography
} from '@mui/material';
import { PROPERTY_SCHEMAS, PROPERTY_TITLES } from './propertySchemas';
import { deriveOutgoingLinksForPe } from './peConnections.js';

const getValueAtPath = (object, keyPath) => {
  if (!object || !keyPath) return undefined;
  return keyPath.split('.').reduce((current, key) => {
    if (current == null) return undefined;
    return current[key];
  }, object);
};

function PropertyInspector({ architecture, selection, onPropertyChange, disabled = false }) {
  const { entity, schema, target, title, description, emptyMessage } = useMemo(() => {
    if (!architecture) {
      return {
        entity: null,
        schema: null,
        target: null,
        title: PROPERTY_TITLES.device,
        description: null,
        emptyMessage: 'No architecture data available.'
      };
    }

    if (!selection) {
      return {
        entity: architecture,
        schema: PROPERTY_SCHEMAS.device,
        target: { type: 'device', id: architecture.id },
        title: PROPERTY_TITLES.device,
        description: 'Configure the device-wide fabric characteristics.',
        emptyMessage: null
      };
    }

    if (selection.type === 'cgra') {
      const found = architecture.CGRAs.find((cgra) => cgra.id === selection.id);
      if (!found) {
        return {
          entity: null,
          schema: null,
          target: null,
          title: PROPERTY_TITLES.cgra,
          description: null,
          emptyMessage: 'The selected CGRA is no longer part of the device.'
        };
      }

      return {
        entity: found,
        schema: PROPERTY_SCHEMAS.cgra,
        target: selection,
        title: PROPERTY_TITLES.cgra,
        description: 'Adjust parameters for the selected CGRA tile.',
        emptyMessage: null
      };
    }

    if (selection.type === 'pe') {
      const parent = architecture.CGRAs.find((cgra) => cgra.id === selection.cgraId);
      const found = parent?.PEs.find((pe) => pe.id === selection.id);
      if (!found) {
        return {
          entity: null,
          schema: null,
          target: null,
          title: PROPERTY_TITLES.pe,
          description: null,
          emptyMessage: 'The selected PE is no longer part of the device.'
        };
      }

      const outgoingLinks = deriveOutgoingLinksForPe(
        found?.id,
        architecture?.PEConnections
      );

      return {
        entity: { ...found, outgoingLinks },
        schema: PROPERTY_SCHEMAS.pe,
        target: selection,
        title: PROPERTY_TITLES.pe,
        description: 'Model the processing element capabilities and connectivity.',
        emptyMessage: null
      };
    }

    return {
      entity: null,
      schema: null,
      target: null,
      title: PROPERTY_TITLES.device,
      description: null,
      emptyMessage: 'Select an item in the canvas to see its properties.'
    };
  }, [architecture, selection]);

  const handleTextOrNumberChange = (property) => (event) => {
    const { value } = event.target;
    if (!target || !property.mutable) return;

    if (property.type === 'number') {
      if (value === '') {
        onPropertyChange(target, property.key, null);
        return;
      }

      const numericValue = Number(value);
      if (Number.isNaN(numericValue)) return;

      let clampedValue = numericValue;
      if (typeof property.min === 'number') {
        clampedValue = Math.max(property.min, clampedValue);
      }
      if (typeof property.max === 'number') {
        clampedValue = Math.min(property.max, clampedValue);
      }

      onPropertyChange(target, property.key, clampedValue);
      return;
    }

    onPropertyChange(target, property.key, value);
  };

  const handleBooleanChange = (property) => (event) => {
    if (!target || !property.mutable) return;
    onPropertyChange(target, property.key, event.target.checked);
  };

  const evaluateProperty = (property) => {
    const dependencyMet = property.disabledWhen
      ? (() => {
          const dependencyValue = getValueAtPath(entity, property.disabledWhen.key);
          if (Object.prototype.hasOwnProperty.call(property.disabledWhen, 'equals')) {
            return dependencyValue === property.disabledWhen.equals;
          }
          return Boolean(dependencyValue);
        })()
      : false;

    const isDisabled = disabled || property.mutable === false || dependencyMet;
    const value = getValueAtPath(entity, property.key);

    return { isDisabled, value };
  };

  if (!entity || !schema) {
    return (
      <Box
        sx={{
          height: '100%',
          p: 2.5,
          display: 'flex',
          flexDirection: 'column',
          gap: 2,
          borderRadius: 1,
          bgcolor: 'rgba(148,163,184,0.08)',
          color: 'text.secondary'
        }}
      >
        <Typography variant="subtitle1" color="text.primary">
          {title}
        </Typography>
        <Typography variant="body2">{emptyMessage}</Typography>
      </Box>
    );
  }

  return (
    <Box
      sx={{
        height: '100%',
        p: 2.5,
        display: 'flex',
        flexDirection: 'column',
        gap: 2,
        borderRadius: 1,
        bgcolor: 'rgba(148,163,184,0.08)',
        color: 'text.secondary',
        overflow: 'auto'
      }}
    >
      <Typography variant="subtitle1" color="text.primary">
        {title}
      </Typography>
      {description ? (
        <Typography variant="body2" sx={{ color: 'text.secondary' }}>
          {description}
        </Typography>
      ) : null}
      <Divider flexItem sx={{ borderColor: 'rgba(148,163,184,0.3)' }} />
      <Box
        sx={{
          display: 'grid',
          gridTemplateColumns: 'minmax(140px, 0.65fr) 1fr',
          rowGap: 1.25,
          columnGap: 2,
          alignItems: 'center'
        }}
      >
        {(() => {
          const rows = [];
          let currentSection = null;
          const processedSectionToggleGroups = new Set();

          // Group properties by section and toggleGroup
          const getSectionToggleKey = (section, toggleGroup) => `${section || ''}::${toggleGroup}`;

          // Build a map of section+toggleGroup -> properties
          const sectionToggleGroupMap = schema.reduce((accumulator, property) => {
            if (property.toggleGroup) {
              const key = getSectionToggleKey(property.section, property.toggleGroup);
              if (!accumulator.has(key)) {
                accumulator.set(key, []);
              }
              accumulator.get(key).push(property);
            }
            return accumulator;
          }, new Map());

          schema.forEach((property) => {
            if (property.section && property.section !== currentSection) {
              currentSection = property.section;
              rows.push(
                <Typography
                  key={`section-${property.section}`}
                  variant="caption"
                  sx={{
                    gridColumn: '1 / -1',
                    textTransform: 'uppercase',
                    letterSpacing: 1,
                    fontWeight: 600,
                    color: 'text.secondary',
                    mt: rows.length > 0 ? 1 : 0
                  }}
                >
                  {property.section}
                </Typography>
              );
            }

            if (property.toggleGroup) {
              const sectionToggleKey = getSectionToggleKey(property.section, property.toggleGroup);
              if (processedSectionToggleGroups.has(sectionToggleKey)) {
                return;
              }

              processedSectionToggleGroups.add(sectionToggleKey);
              const groupProperties = sectionToggleGroupMap.get(sectionToggleKey) ?? [];

              rows.push(
                <Box
                  key={`group-${sectionToggleKey}`}
                  sx={{
                    gridColumn: '1 / -1',
                    display: 'flex',
                    flexDirection: 'column',
                    gap: 1
                  }}
                >
                  <Box
                    sx={{
                      display: 'grid',
                      gridTemplateColumns: 'repeat(auto-fit, minmax(160px, 1fr))',
                      gap: 1
                    }}
                  >
                    {groupProperties.map((groupProperty) => {
                      const { isDisabled: groupDisabled, value: groupValue } =
                        evaluateProperty(groupProperty);

                      return (
                        <FormControlLabel
                          key={groupProperty.key}
                          control={
                            <Switch
                              checked={Boolean(groupValue)}
                              onChange={handleBooleanChange(groupProperty)}
                              color="primary"
                              disabled={groupDisabled}
                              size="small"
                            />
                          }
                          label={groupProperty.label}
                          sx={{
                            m: 0,
                            color: groupDisabled ? 'text.disabled' : 'text.secondary'
                          }}
                        />
                      );
                    })}
                  </Box>
                </Box>
              );

              return;
            }

            const { isDisabled, value } = evaluateProperty(property);
            const testId = `property-${property.key.replace(/[^a-zA-Z0-9_-]/g, '-')}`;
            const commonProps = {
              fullWidth: true,
              size: 'small',
              disabled: isDisabled
            };

            let input = null;

            if (property.type === 'select') {
              input = (
                <TextField
                  {...commonProps}
                  select
                  value={value ?? ''}
                  onChange={handleTextOrNumberChange(property)}
                  inputProps={{ 'data-testid': testId }}
                >
                  {property.options.map((option) => (
                    <MenuItem key={option} value={option}>
                      {option}
                    </MenuItem>
                  ))}
                </TextField>
              );
            } else if (property.type === 'boolean') {
              input = (
                <Switch
                  checked={Boolean(value)}
                  onChange={handleBooleanChange(property)}
                  color="primary"
                  disabled={isDisabled}
                  size="small"
                  inputProps={{ 'data-testid': testId }}
                />
              );
            } else {
              input = (
                <TextField
                  {...commonProps}
                  type={property.type === 'number' ? 'number' : 'text'}
                  value={value ?? ''}
                  onChange={handleTextOrNumberChange(property)}
                  inputProps={{
                    min: property.min,
                    max: property.max,
                    step: property.step,
                    'data-testid': testId
                  }}
                  multiline={property.multiline}
                  minRows={property.multiline ? 3 : undefined}
                  sx={property.type === 'number' ? {
                    '& input[type=number]::-webkit-inner-spin-button, & input[type=number]::-webkit-outer-spin-button': {
                      opacity: 1,
                      cursor: 'pointer',
                      filter: 'invert(1)'
                    }
                  } : undefined}
                />
              );
            }

            rows.push(
              <Fragment key={property.key}>
                <Typography
                  variant="body2"
                  sx={{ color: isDisabled ? 'text.disabled' : 'text.secondary' }}
                >
                  {property.label}
                </Typography>
                <Box sx={{ opacity: isDisabled ? 0.6 : 1 }}>{input}</Box>
              </Fragment>
            );
          });

          return rows;
        })()}
      </Box>
    </Box>
  );
}

export default PropertyInspector;
