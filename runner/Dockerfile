# Lightweight runner image (Node.js only)
# For fake runner mode and job queue management
FROM node:20-slim

WORKDIR /app

# Copy package files
COPY package*.json ./

# Install dependencies
RUN npm ci --only=production

# Copy source
COPY *.js ./

# Default environment
ENV RUNNER_MODE=fake
ENV POLL_INTERVAL_MS=5000

# Start the runner
CMD ["node", "index.js"]
