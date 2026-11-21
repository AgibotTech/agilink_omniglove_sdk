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

prefix=${1:-/usr/local}
if [[ "$prefix" != /* ]]; then
    prefix="$(pwd)/$prefix"
fi
write_probe=$prefix
while [[ ! -e "$write_probe" && "$write_probe" != / ]]; do
    write_probe=$(dirname -- "$write_probe")
done
as_root=()
if [[ ! -w "$write_probe" ]]; then
    as_root=(sudo --)
fi

"${as_root[@]}" rm -f \
    "$prefix/bin/omniglove_firmware_info" \
    "$prefix/bin/omniglove_calibration_tool" \
    "$prefix/bin/omniglove_calibration_urdf_tool" \
    "$prefix/bin/omniglove_bone_deploy_tool" \
    "$prefix/bin/omniglove_teleop_tool" \
    "$prefix/bin/omniglove_ota_tool" \
    "$prefix/lib/libomniglove.so" \
    "$prefix/lib"/libomniglove.so.* \
    "$prefix/lib/omniglove/libusb-1.0.so.0" \
    "$prefix/lib/omniglove"/libusb-1.0.so.* \
    "$prefix/include/omniglove/omniglove.h" \
    "$prefix/lib/cmake/OmnigloveSDK/OmnigloveSDKConfig.cmake" \
    "$prefix/lib/cmake/OmnigloveSDK/OmnigloveSDKConfigVersion.cmake"
"${as_root[@]}" rmdir "$prefix/lib/cmake/OmnigloveSDK" 2>/dev/null || true
"${as_root[@]}" rmdir "$prefix/lib/omniglove" 2>/dev/null || true
"${as_root[@]}" rmdir "$prefix/include/omniglove" 2>/dev/null || true

if [[ "$prefix" == /usr || "$prefix" == /usr/local ]] && command -v ldconfig >/dev/null 2>&1; then
    "${as_root[@]}" ldconfig
fi

printf 'Uninstalled Omniglove SDK files from %s\n' "$prefix"
