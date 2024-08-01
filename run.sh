#!/bin/bash

set -e
rm -rf .build
cmake -B .build
cmake --build .build
./.build/example
