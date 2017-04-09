FROM ubuntu:16.04
MAINTAINER "Kentaro Kuwata" <kuwaken0925@gmail.com>
ENV container docker

ENV DEBIAN_FRONTEND noninteractive
ENV USER ubuntu
ENV HOME /home/$USER

RUN mkdir /src

# Create new user for vnc login.
RUN adduser $USER --disabled-password

# Install MATE and dependency component.
RUN apt-get update \
    && apt-get install -y \
        tightvncserver \
        mate-core mate-desktop-environment mate-notification-daemon \
        supervisor \
        net-tools \
        curl \
        git \
        pwgen \
    && apt-get autoclean \
    && apt-get autoremove \
    && rm -rf /var/lib/apt/lists/*

# Clone noVNC.
RUN git clone https://github.com/novnc/noVNC.git $HOME/noVNC

# Clone websockify for noVNC
RUN git clone https://github.com/kanaka/websockify $HOME/noVNC/utils/websockify

# Download ngrok.
ADD https://bin.equinox.io/c/4VmDzA7iaHb/ngrok-stable-linux-amd64.zip $HOME/ngrok/ngrok.zip
RUN unzip -o $HOME/ngrok/ngrok.zip -d $HOME/ngrok && rm $HOME/ngrok/ngrok.zip

# Copy supervisor config.
COPY supervisor.conf /etc/supervisor/conf.d/

# Copy startup script.
COPY startup.sh $HOME

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
    vim \
    firefox \
    binutils libavcodec-extra libpq-dev libssl-dev zlib1g-dev libbz2-dev libreadline-dev binutils libstdc++6 libstdc++6-4.7-dev libproj-dev gdal-bin libgeoip-dev libpng-dev libfreetype6-dev libopenmpi-dev openmpi-bin

RUN cd /tmp && curl https://cmake.org/files/v3.7/cmake-3.7.1.tar.gz -O -L && \
    tar xvfz cmake-3.7.1.tar.gz && cd cmake-3.7.1 && \
    ./bootstrap --prefix=/usr && \
    make && \
    make install

RUN pip install pip --upgrade && pip install numpy

ADD install_opencv.sh /src
RUN cd /src && sh install_opencv.sh


EXPOSE 6080 5901 4040
CMD ["/bin/bash", "/home/ubuntu/startup.sh"]