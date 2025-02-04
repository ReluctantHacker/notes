# Use official Node.js image as a base
FROM node:16

# Set the working directory
WORKDIR /app

# Copy the package.json and package-lock.json files
COPY ./app/package*.json /app/

# Install dependencies, this should generate package-loc.json
RUN npm install

# Copy the project files
COPY ./app /app

# Build the React app
RUN npm run build

# Install serve to serve the production build
RUN npm install -g serve

# Command to serve the app
CMD ["serve", "-s", "build", "-l", "3000"]

