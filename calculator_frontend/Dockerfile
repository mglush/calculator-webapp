FROM node

# set up new directory.
WORKDIR App/calculator_frontend

RUN apt-get update && apt-get install -y \
    software-properties-common

# clone project from git to environment.
COPY . .

# expose the port we will run the backend on.
EXPOSE $PORT

# Set the base url
ENV REACT_APP_PROXY_API=$PROXY_API

# Set the browser base url
ENV REACT_APP_PORT=$PORT

# run the backend.
CMD npm start

