FROM ubuntu:22.10

WORKDIR App/calculator_backend
COPY . .

# download cmake.
RUN apt-get update && \
    apt-get -y install cmake build-essential git

# expose the port we will run the backend on.
EXPOSE $PORT

# go back to the calculator-webapp directory and compile the backend.
WORKDIR ..
RUN cmake -Hcalculator_backend -Bcalculator_backend/build
RUN cmake --build calculator_backend/build --target all --config Release
# run the backend.
CMD calculator_backend/build/CalculatorAPI

