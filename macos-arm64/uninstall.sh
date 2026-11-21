#!/usr/bin/env bash
# SPDX-License-Identifier: MulanPSL-2.0
set -euo pipefail
script_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd -P)
default_prefix="$HOME/.local"
if [[ "$script_dir" == */share/OmnigloveSDK ]]; then
    default_prefix=${script_dir%/share/OmnigloveSDK}
fi
prefix=${1:-$default_prefix}
[[ "$prefix" == /* ]] || prefix="$PWD/$prefix"
share="$prefix/share/OmnigloveSDK"
info="$share/BUILD_INFO.txt"
manifest="$share/INSTALL_FILES.txt"

invalid_installation() {
    printf 'error: %s is not a validated Omniglove macOS installation\n' "$prefix" >&2
    exit 1
}
if [[ ! -e "$info" ]]; then
    if [[ -e "$manifest" || -e "$prefix/lib/libomniglove.dylib" ||
          -L "$prefix/lib/libomniglove.dylib" || -e "$prefix/include/omniglove/omniglove.h" ||
          -e "$prefix/bin/omniglove_ota_tool" || -e "$prefix/bin/omniglove_firmware_info" ]]; then
        invalid_installation
    fi
    printf 'No Omniglove SDK installation at %s\n' "$prefix"
    exit 0
fi
[[ -f "$manifest" && ! -L "$manifest" && -f "$info" && ! -L "$info" ]] || invalid_installation
grep -Eq '^platform=macos-(arm64|x86_64)$' "$info" || invalid_installation
library=$(sed -n 's/^library=//p' "$info")
[[ "$library" =~ ^libomniglove\.([0-9]+)\.[0-9]+\.[0-9]+\.dylib$ ]] || invalid_installation
abi_library="libomniglove.${BASH_REMATCH[1]}.dylib"
grep -Fxq "lib/$library|lib/$library" "$manifest" || invalid_installation

while IFS='|' read -r _ destination; do
    [[ "$destination" =~ ^[a-zA-Z0-9_./-]+$ && "$destination" != *..* ]] || invalid_installation
    case "$destination" in
        bin/omniglove_firmware_info|bin/omniglove_ota_tool|include/omniglove/omniglove.h|\
        "lib/$library"|"lib/$abi_library"|lib/libomniglove.dylib|lib/omniglove/libusb-1.0*.dylib|\
        lib/cmake/OmnigloveSDK/OmnigloveSDKConfig.cmake|lib/cmake/OmnigloveSDK/OmnigloveSDKConfigVersion.cmake|\
        share/OmnigloveSDK/*) ;;
        *) invalid_installation ;;
    esac
done < "$manifest"
while IFS='|' read -r _ destination; do
    case "$destination" in
        share/OmnigloveSDK/BUILD_INFO.txt|share/OmnigloveSDK/INSTALL_FILES.txt) continue ;;
    esac
    rm -f -- "$prefix/$destination"
done < "$manifest"
rm -f -- "$manifest" "$info"
rmdir "$prefix/include/omniglove" "$prefix/lib/omniglove" "$prefix/lib/cmake/OmnigloveSDK" \
    "$share/examples" "$share/docs/en" "$share/docs/cn" "$share/docs" "$share" 2>/dev/null || true
printf 'Uninstalled Omniglove SDK from %s\n' "$prefix"
