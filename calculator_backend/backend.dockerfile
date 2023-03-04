FROM ubuntu:22.10

WORKDIR temp
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y git

RUN git clone git@github.com:mglush/calculator-webapp.git
WORKDIR temp/calculator-webapp

RUN apt-get update && apt-get -y install cmake

