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

# Install the udev permission rule so a non-root user can access supported
# USB gloves. Single responsibility: no build, no demo run.
#
# The rule is taken from this release package. Idempotent: skips installation
# when the rule is already in place and identical.
#
# Usage:
#   sudo ./scripts/install_udev.sh          # normal install
#   ./scripts/install_udev.sh               # auto-retries via sudo
#   SKIP=1 ./scripts/install_udev.sh        # check only

set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
PACKAGE_ROOT="$(cd -- "${SCRIPT_DIR}/.." && pwd)"
RULE_SRC="${PACKAGE_ROOT}/udev/60-omniglove-usb.rules"
RULE_DST="/etc/udev/rules.d/60-omniglove-usb.rules"

if [[ "${SKIP:-0}" == "1" ]]; then
    if [[ -f "${RULE_DST}" ]]; then
        echo "[udev] ${RULE_DST} present; remove it yourself if needed"
    else
        echo "[udev] ${RULE_DST} not installed"
    fi
    exit 0
fi

if [[ ! -f "${RULE_SRC}" ]]; then
    echo "error: 60-omniglove-usb.rules not found" >&2
    exit 1
fi

install_rule() {
    install -m 0644 "${RULE_SRC}" "${RULE_DST}"
    udevadm control --reload-rules
}

if [[ -f "${RULE_DST}" ]] && cmp -s "${RULE_SRC}" "${RULE_DST}"; then
    echo "[udev] rule already installed, nothing to do"
    exit 0
fi

if [[ ${EUID} -eq 0 ]]; then
    install_rule
else
    sudo -p "[udev] installing udev rule requires sudo: " bash -c \
        "$(declare -f install_rule); RULE_SRC=${RULE_SRC@Q} \
         RULE_DST=${RULE_DST@Q} install_rule"
fi
echo "[udev] installed ${RULE_DST}"
echo "[udev] re-plug already-connected gloves so the new rule applies"
