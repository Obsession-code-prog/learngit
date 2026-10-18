#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")"

if [ ! -f build/CMakeCache.txt ]; then
    cmake -B build -S .
fi

cmake --build build -j"$(nproc)"
exec ./build/robot_demo "$@"
