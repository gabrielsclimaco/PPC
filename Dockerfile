FROM ubuntu

RUN apt-get update && \
    apt-get install -y gcc g++ && \
    mkdir /app

ADD . /app
WORKDIR /app

