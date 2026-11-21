/* SPDX-License-Identifier: MulanPSL-2.0 */
#include <stdio.h>

#include "omniglove/omniglove.h"

int main(void) {
    const uint32_t version = omniglove_abi_version();
    if (version != OMNIGLOVE_ABI_VERSION) {
        fprintf(stderr, "ABI mismatch: header=0x%x runtime=0x%x\n",
                (unsigned)OMNIGLOVE_ABI_VERSION, (unsigned)version);
        return 1;
    }
    printf("Omniglove SDK ABI %u.%u.%u\n",
           (unsigned)OMNIGLOVE_ABI_VERSION_MAJOR,
           (unsigned)OMNIGLOVE_ABI_VERSION_MINOR,
           (unsigned)OMNIGLOVE_ABI_VERSION_PATCH);
    return 0;
}
