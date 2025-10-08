import { Fragment, useMemo } from 'react';
import {
  Box,
  Divider,
  MenuItem,
  Switch,
  TextField,
  Typography
} from '@mui/material';
import { PROPERTY_SCHEMAS, PROPERTY_TITLES } from './propertySchemas';

function PropertyInspector({ architecture, selection, onPropertyChange }) {
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
      const cgraCount = architecture.CGRAs?.length ?? 0;
      const peCount = architecture.CGRAs?.reduce(
        (total, cgra) => total + (cgra.PEs?.length ?? 0),
        0
      );

      return {
        entity: {
          id: architecture.id,
          name: architecture.name,
          technology: architecture.technology,
          designer: architecture.designer,
          description: architecture.description,
          cgraCount,
          peCount
        },
        schema: PROPERTY_SCHEMAS.device,
        target: { type: 'device', id: architecture.id },
        title: PROPERTY_TITLES.device,
        description: 'Review and edit the overall device configuration and derived metrics.',
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
          emptyMessage: 'The selected entity is no longer available in the current architecture.'
        };
      }

      return {
        entity: found,
        schema: PROPERTY_SCHEMAS.cgra,
        target: selection,
        title: PROPERTY_TITLES.cgra,
        description: 'Adjust configuration values to explore different CGRA layouts and capabilities.',
        emptyMessage: null
      };
    }

    if (selection.type === 'router') {
      const parent = architecture.CGRAs.find((cgra) => cgra.id === selection.cgraId);
      if (!parent?.router) {
        return {
          entity: null,
          schema: null,
          target: null,
          title: PROPERTY_TITLES.router,
          description: null,
          emptyMessage: 'The selected entity is no longer available in the current architecture.'
        };
      }

      return {
        entity: parent.router,
        schema: PROPERTY_SCHEMAS.router,
        target: selection,
        title: PROPERTY_TITLES.router,
        description: 'Adjust configuration values to explore different CGRA layouts and capabilities.',
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
          emptyMessage: 'The selected entity is no longer available in the current architecture.'
        };
      }

      return {
        entity: found,
        schema: PROPERTY_SCHEMAS.pe,
        target: selection,
        title: PROPERTY_TITLES.pe,
        description: 'Adjust configuration values to explore different CGRA layouts and capabilities.',
        emptyMessage: null
      };
    }

    return {
      entity: null,
      schema: null,
      target: null,
      title: 'Properties',
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
          gridTemplateColumns: 'minmax(120px, 0.65fr) 1fr',
          rowGap: 1.25,
          columnGap: 2,
          alignItems: 'center'
        }}
      >
        {schema.map((property) => {
          const value = entity[property.key];
          const commonProps = {
            fullWidth: true,
            size: 'small',
            disabled: property.mutable === false
          };

          let input = null;

          if (property.type === 'select') {
            input = (
              <TextField
                {...commonProps}
                select
                value={value ?? ''}
                onChange={handleTextOrNumberChange(property)}
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
                disabled={property.mutable === false}
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
                  step: property.step
                }}
                multiline={property.multiline}
                minRows={property.multiline ? 3 : undefined}
              />
            );
          }

          return (
            <Fragment key={property.key}>
              <Typography variant="body2" sx={{ color: 'text.secondary' }}>
                {property.label}
              </Typography>
              <Box>{input}</Box>
            </Fragment>
          );
        })}
      </Box>
    </Box>
  );
}

export default PropertyInspector;
