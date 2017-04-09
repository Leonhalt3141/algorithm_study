#!/usr/bin/env bash

ddocker run -e PASSWORD=ubuntu -e SUDO=yes -it --rm -p 80:6080 algorithm-cpp:latest