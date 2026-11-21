#!/usr/bin/env bash
# SPDX-License-Identifier: MulanPSL-2.0
set -euo pipefail
package=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd -P)
prefix=${1:-$HOME/.local}
[[ "$prefix" == /* ]] || prefix="$PWD/$prefix"

manifest="$package/INSTALL_FILES.txt"
grep -Eq '^platform=macos-(arm64|x86_64)$' "$package/BUILD_INFO.txt"
while IFS='|' read -r input destination; do
    if [[ ! "$input" =~ ^[a-zA-Z0-9_./-]+$ || ! "$destination" =~ ^[a-zA-Z0-9_./-]+$ ||
          "$input" == /* || "$destination" == /* || "$input" == *..* || "$destination" == *..* ||
          ! -f "$package/$input" ]]; then
        printf 'error: invalid or missing SDK package file: %s\n' "$input" >&2
        exit 1
    fi
done < "$manifest"
while IFS='|' read -r input destination; do
    mkdir -p "$prefix/${destination%/*}"
    cp -pP "$package/$input" "$prefix/$destination"
done < "$manifest"
printf 'Installed Omniglove SDK to %s\n' "$prefix"
