#!/usr/bin/env bash

docker run -d -p 3022:22 -p 7777:7777 -p 9999:9999  \
  --security-opt seccomp:unconfined  \
  --name server ebagdasa/cs5450_p1:latest