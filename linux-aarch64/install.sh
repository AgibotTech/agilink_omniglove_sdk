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

package_root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
prefix=${1:-/usr/local}
if [[ "$prefix" != /* ]]; then
    prefix="$(pwd)/$prefix"
fi

if [[ ! -f "$package_root/lib/libomniglove.so.6.0.0" ||
      ! -f "$package_root/lib/omniglove/libusb-1.0.so.0.6.0" ||
      ! -f "$package_root/bin/omniglove_calibration_tool" ||
      ! -f "$package_root/bin/omniglove_calibration_urdf_tool" ||
      ! -f "$package_root/bin/omniglove_bone_deploy_tool" ||
      ! -f "$package_root/bin/omniglove_teleop_tool" ||
      ! -f "$package_root/bin/omniglove_ota_tool" ||
      ! -f "$package_root/include/omniglove/omniglove.h" ||
      ! -f "$package_root/BUILD_INFO.txt" ]]; then
    echo "error: this script must be run from a complete Omniglove package" >&2
    exit 1
fi

sdk_version=$(sed -n 's/^sdk_version=//p' "$package_root/BUILD_INFO.txt")
if [[ -z "$sdk_version" ]]; then
    echo "error: sdk_version is missing from BUILD_INFO.txt" >&2
    exit 1
fi

write_probe=$prefix
while [[ ! -e "$write_probe" && "$write_probe" != / ]]; do
    write_probe=$(dirname -- "$write_probe")
done
as_root=()
if [[ ! -w "$write_probe" ]]; then
    as_root=(sudo --)
fi

# Remove every previously installed SDK-owned library version before copying
# the new package.  Keeping an explicit version list here would leave stale
# files behind whenever the SDK ABI or bundled libusb version changes.
"${as_root[@]}" rm -f \
    "$prefix/lib/libomniglove.so" \
    "$prefix/lib"/libomniglove.so.* \
    "$prefix/lib/omniglove/libusb-1.0.so.0" \
    "$prefix/lib/omniglove"/libusb-1.0.so.*

"${as_root[@]}" install -d \
    "$prefix/bin" \
    "$prefix/include/omniglove" \
    "$prefix/lib/omniglove" \
    "$prefix/lib/cmake/OmnigloveSDK"
"${as_root[@]}" install -m 0644 "$package_root/include/omniglove/omniglove.h" \
    "$prefix/include/omniglove/omniglove.h"
"${as_root[@]}" install -m 0755 "$package_root/lib/libomniglove.so.6.0.0" \
    "$prefix/lib/libomniglove.so.6.0.0"
"${as_root[@]}" install -m 0755 "$package_root/lib/omniglove/libusb-1.0.so.0.6.0" \
    "$prefix/lib/omniglove/libusb-1.0.so.0.6.0"
"${as_root[@]}" install -m 0755 "$package_root/bin/omniglove_calibration_tool" \
    "$prefix/bin/omniglove_calibration_tool"
"${as_root[@]}" install -m 0755 "$package_root/bin/omniglove_calibration_urdf_tool" \
    "$prefix/bin/omniglove_calibration_urdf_tool"
"${as_root[@]}" install -m 0755 "$package_root/bin/omniglove_bone_deploy_tool" \
    "$prefix/bin/omniglove_bone_deploy_tool"
"${as_root[@]}" install -m 0755 "$package_root/bin/omniglove_teleop_tool" \
    "$prefix/bin/omniglove_teleop_tool"
"${as_root[@]}" install -m 0755 "$package_root/bin/omniglove_ota_tool" \
    "$prefix/bin/omniglove_ota_tool"
"${as_root[@]}" ln -sfn libomniglove.so.6.0.0 "$prefix/lib/libomniglove.so.6"
"${as_root[@]}" ln -sfn libomniglove.so.6 "$prefix/lib/libomniglove.so"
"${as_root[@]}" ln -sfn libusb-1.0.so.0.6.0 \
    "$prefix/lib/omniglove/libusb-1.0.so.0"
"${as_root[@]}" install -m 0644 "$package_root/cmake/OmnigloveSDKConfig.cmake" \
    "$prefix/lib/cmake/OmnigloveSDK/OmnigloveSDKConfig.cmake"
"${as_root[@]}" install -m 0644 "$package_root/cmake/OmnigloveSDKConfigVersion.cmake" \
    "$prefix/lib/cmake/OmnigloveSDK/OmnigloveSDKConfigVersion.cmake"

if [[ "$prefix" == /usr || "$prefix" == /usr/local ]] && command -v ldconfig >/dev/null 2>&1; then
    "${as_root[@]}" ldconfig
fi

printf 'Installed Omniglove SDK %s to %s\n' "$sdk_version" "$prefix"
printf 'CMake package: %s\n' "$prefix/lib/cmake/OmnigloveSDK"
printf 'Calibration, teleop, and OTA tools: %s\n' "$prefix/bin"
