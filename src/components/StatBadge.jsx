import PropTypes from 'prop-types';

function StatBadge({ label, value, variant }) {
  return (
    <div className={`stat-badge ${variant}`}>
      <span className="stat-label">{label}</span>
      <span className="stat-value">{value}</span>
    </div>
  );
}

StatBadge.propTypes = {
  label: PropTypes.string.isRequired,
  value: PropTypes.string.isRequired,
  variant: PropTypes.oneOf(['info', 'success', 'warning'])
};

StatBadge.defaultProps = {
  variant: 'info'
};

export default StatBadge;
