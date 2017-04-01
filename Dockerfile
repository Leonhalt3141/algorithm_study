FROM ubuntu:16.04
MAINTAINER "Kentaro Kuwata" <kuwaken0925@gmail.com>
ENV container docker

RUN mkdir /app
RUN mkdir /src
WORKDIR /app

RUN apt-get -y update && \
    apt-get -y install \
    build-essential \
    wget \
    gcc \
    g++ \
    cmake \
    ninja-build \
    python \
    python-dev \
    python-pip \
    python-software-properties \
    software-properties-common \
    tmux \
    tree \
    unzip \
    curl \
    vim

RUN cd /tmp && curl https://cmake.org/files/v3.6/cmake-3.6.3.tar.gz -O -L && \
    tar xvfz cmake-3.6.3.tar.gz && cd cmake-3.6.3 && \
    ./bootstrap --prefix=/usr && \
    make && \
    make install

ADD . /src

WORKDIR /src
