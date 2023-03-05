FROM ubuntu:22.10

WORKDIR App/calculator_backend
COPY . .

# download cmake.
RUN apt-get update && \
    apt-get -y install cmake build-essential git

# download restbed.
RUN git clone --recursive https://github.com/corvusoft/restbed.git
# compile and link the restbed library.
RUN mkdir restbed/build
WORKDIR restbed/build
RUN cmake -DBUILD_SSL="NO" -DBUILD_TESTS="NO" ..
RUN make install

WORKDIR ../../..

# expose the port we will run the backend on.
EXPOSE $PORT

# compile, build, and run the backend.
RUN cmake -Hcalculator_backend -Bcalculator_backend/build
RUN cmake --build calculator_backend/build --target all --config Release
CMD calculator_backend/build/CalculatorAPI



