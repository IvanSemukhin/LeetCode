#!/usr/bin/env bash

mkdir -p build
cd build
cmake .. && cmake --build . -j $(nproc)
#cmake -DCMAKE_BUILD_TYPE=Release .. && cmake --build . --config Release -j $(nproc)
