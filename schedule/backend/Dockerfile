# Use official Python image as a base
FROM python:3.12

# Set the working directory
WORKDIR /app

# Copy the Poetry configuration files
COPY ./app/pyproject.toml ./app/poetry.lock /app/

# Install Poetry
RUN pip install poetry

# Install dependencies
RUN poetry install

# Copy the project files
COPY . /app

# Command to run the FastAPI app
CMD ["poetry", "run", "uvicorn", "main:app", "--host", "0.0.0.0", "--port", "8000", "--reload"]

