import PropTypes from 'prop-types';

function StatBadge({ label, value, variant, inline }) {
  return (
    <div className={`stat-badge ${variant}${inline ? ' inline' : ''}`}>
      <span className="stat-label">{label}</span>
      <span className="stat-value">{value}</span>
    </div>
  );
}

StatBadge.propTypes = {
  label: PropTypes.string.isRequired,
  value: PropTypes.string.isRequired,
  variant: PropTypes.oneOf(['info', 'success', 'warning']),
  inline: PropTypes.bool
};

StatBadge.defaultProps = {
  variant: 'info',
  inline: false
};

export default StatBadge;
