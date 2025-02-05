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

# the code below is for production
# Build the React app
#RUN npm run build

# Install serve to serve the production build
#RUN npm install -g serve

# Command to serve the app
#CMD ["serve", "-s", "build", "-l", "3000"]


# the code below is for development
# Install react-scripts globally for npm start
RUN npm install -g react-scripts

# Command to start the development server with hot reloading
CMD ["npm", "start"]
