#!/usr/bin/env bash
# Copyright (c) 2025 Agibot Co., Ltd.
# Omniglove SDK is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#     http://license.coscl.org.cn/MulanPSL2
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
# See the Mulan PSL v2 for more details.
# SPDX-License-Identifier: MulanPSL-2.0

# Build and run the glove_live example against a packaged release SDK.
# Single responsibility: no udev, no packaging. See install_udev.sh for device
# permissions and ../README.md for the full walkthrough.
#
# Locates the packaged SDK from this script's own path, so it can be invoked
# from any working directory.
#
# Usage:
#   ./linux-$(uname -m)/scripts/run_glove_demo.sh          # run until Ctrl-C
#   ./linux-$(uname -m)/scripts/run_glove_demo.sh 10       # run for 10 seconds
#   EXAMPLE_BUILD=./build/my-build ./linux-$(uname -m)/scripts/run_glove_demo.sh

set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
PLATFORM_ROOT="$(cd -- "${SCRIPT_DIR}/.." && pwd)"
if [[ ! -f "${PLATFORM_ROOT}/cmake/OmnigloveSDKConfig.cmake" ]]; then
    echo "error: run_glove_demo.sh must remain inside an Omniglove release package" >&2
    exit 1
fi

export LD_LIBRARY_PATH="${PLATFORM_ROOT}/lib${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}"
EXAMPLE_BUILD="${EXAMPLE_BUILD:-${PLATFORM_ROOT}/build/omniglove_glove_demo}"
BUILD_JOBS="${BUILD_JOBS:-$(nproc 2>/dev/null || printf 4)}"

log() { printf '[glove-demo] %s\n' "$*"; }

# --- Build the glove_live example -----------------------------------------
log "building glove_live example"
cmake -S "${PLATFORM_ROOT}/examples/glove_live" \
    -B "${EXAMPLE_BUILD}" \
    -DOmnigloveSDK_DIR="${PLATFORM_ROOT}/cmake"
cmake --build "${EXAMPLE_BUILD}" --parallel "${BUILD_JOBS}"

# --- Run the live connection check -----------------------------------------
log "running glove_live (Ctrl-C to stop)"
exec "${EXAMPLE_BUILD}/omniglove_glove_live" "$@"
