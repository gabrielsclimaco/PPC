FROM alpine:edge

RUN apk add --no-cache gcc g++ && \
    mkdir /app

ADD . /app
WORKDIR /app

