/*
 * Copyright (c) 2025 Agibot Co., Ltd.
 * Omniglove SDK is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *     http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 * SPDX-License-Identifier: MulanPSL-2.0
 */

#include <stdint.h>
#include <stdio.h>

#include "omniglove/omniglove.h"

int main(void) {
    const uint32_t runtime_version = omniglove_abi_version();
    if (runtime_version != OMNIGLOVE_ABI_VERSION) {
        fprintf(stderr, "ABI mismatch: header=0x%08x runtime=0x%08x\n",
                (unsigned)OMNIGLOVE_ABI_VERSION,
                (unsigned)runtime_version);
        return 1;
    }
    printf("Omniglove SDK ABI %u.%u.%u\n",
           (unsigned)OMNIGLOVE_ABI_VERSION_MAJOR,
           (unsigned)OMNIGLOVE_ABI_VERSION_MINOR,
           (unsigned)OMNIGLOVE_ABI_VERSION_PATCH);
    return 0;
}
