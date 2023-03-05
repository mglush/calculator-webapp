FROM ubuntu:22.10

# download git.
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y git

# clone project from git to environment.
RUN git clone https://github.com/mglush/calculator-webapp.git
# cd into the project.
WORKDIR calculator-webapp

# download cmake.
RUN apt-get update && \
    apt-get -y install cmake

# download gcc compiler through build-essentials.
RUN apt-get update && \
    apt-get -y install build-essential

# go to the backend directory to download rest of the dependencies.
WORKDIR calculator_backend
# download restbed.
RUN git clone --recursive https://github.com/corvusoft/restbed.git
# compile and link the restbed library.
RUN mkdir restbed/build
WORKDIR restbed/build
RUN cmake -DBUILD_SSL="NO" -DBUILD_TESTS="NO" ..
RUN make install

# expose the port we will run the backend on.
EXPOSE $PORT

# go back to the calculator-webapp directory and compile the backend.
WORKDIR ../../..
RUN cmake -Hcalculator_backend -Bcalculator_backend/build
RUN cmake --build calculator_backend/build --target all --config Release
# run the backend.
CMD calculator_backend/build/CalculatorAPI

