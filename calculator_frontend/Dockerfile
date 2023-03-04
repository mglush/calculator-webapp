FROM ubuntu:22.10

# set up new directory.
WORKDIR App

RUN apt-get update && apt-get install -y \
    software-properties-common \
    curl \
    npm
RUN npm install npm@latest -g && \
    npm install n -g && \
    n latest

# clone project from git to environment.
RUN git clone https://github.com/mglush/calculator-webapp.git

# cd into the project frontend.
WORKDIR calculator-webapp/calculator_frontend

# expose the port we will run the backend on.
EXPOSE 3000

# run the backend.
CMD npm start

