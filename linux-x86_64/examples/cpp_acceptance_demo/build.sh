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

set -euo pipefail

script_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
platform_root=$(CDPATH= cd -- "$script_dir/../.." && pwd)
build_dir=${OMNIGLOVE_CPP_DEMO_BUILD_DIR:-$platform_root/build/omniglove_cpp_demo}
build_jobs=${OMNIGLOVE_BUILD_JOBS:-$(nproc 2>/dev/null || printf 4)}

if [[ ! -f "$platform_root/cmake/OmnigloveSDKConfig.cmake" ]]; then
    echo "error: build.sh must remain inside an Omniglove Linux release package" >&2
    exit 1
fi

cmake -S "$script_dir" -B "$build_dir" \
    -DOmnigloveSDK_DIR="$platform_root/cmake"
cmake --build "$build_dir" --parallel "$build_jobs"

printf 'Built C++ public API demo: %s\n' "$build_dir/omniglove_cpp_acceptance_demo"
