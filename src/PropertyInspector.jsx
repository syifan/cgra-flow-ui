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
  const { entity, schema } = useMemo(() => {
    if (!selection) {
      return { entity: null, schema: null };
    }

    if (selection.type === 'cgra') {
      const found = architecture.CGRAs.find((cgra) => cgra.id === selection.id);
      return { entity: found ?? null, schema: PROPERTY_SCHEMAS.cgra };
    }

    if (selection.type === 'router') {
      const parent = architecture.CGRAs.find((cgra) => cgra.id === selection.cgraId);
      return { entity: parent?.router ?? null, schema: PROPERTY_SCHEMAS.router };
    }

    if (selection.type === 'pe') {
      const parent = architecture.CGRAs.find((cgra) => cgra.id === selection.cgraId);
      const found = parent?.PEs.find((pe) => pe.id === selection.id);
      return { entity: found ?? null, schema: PROPERTY_SCHEMAS.pe };
    }

    return { entity: null, schema: null };
  }, [architecture, selection]);

  const title = selection ? PROPERTY_TITLES[selection.type] ?? 'Inspector' : 'Inspector';

  const handleTextOrNumberChange = (property) => (event) => {
    const { value } = event.target;
    if (!selection || !property.mutable) return;

    if (property.type === 'number') {
      if (value === '') {
        onPropertyChange(selection, property.key, null);
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

      onPropertyChange(selection, property.key, clampedValue);
      return;
    }

    onPropertyChange(selection, property.key, value);
  };

  const handleBooleanChange = (property) => (event) => {
    if (!selection || !property.mutable) return;
    onPropertyChange(selection, property.key, event.target.checked);
  };

  if (!selection) {
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
          Inspector
        </Typography>
        <Typography variant="body2">
          Select a CGRA, router, or processing element to edit its properties.
        </Typography>
      </Box>
    );
  }

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
        <Typography variant="body2">
          The selected entity is no longer available in the current architecture.
        </Typography>
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
      <Typography variant="body2" sx={{ color: 'text.secondary' }}>
        Adjust configuration values to explore different CGRA layouts and capabilities.
      </Typography>
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
