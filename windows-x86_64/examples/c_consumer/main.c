/*
 * Copyright (c) 2025 Agibot Co., Ltd.
 * Omniglove SDK is licensed under Mulan PSL v2.
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
