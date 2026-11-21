/*
 * Copyright (c) 2025 Agibot Co., Ltd.
 * Omniglove SDK is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 * PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *     http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 * NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE. See the
 * Mulan PSL v2 for more details. SPDX-License-Identifier: MulanPSL-2.0
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "omniglove/omniglove.h"

static const char* HandName(omniglove_hand_t hand) {
    switch (hand) {
        case OMNIGLOVE_HAND_LEFT:
            return "left";
        case OMNIGLOVE_HAND_RIGHT:
            return "right";
        default:
            return "unknown";
    }
}

static const char* ControlStatusName(omniglove_control_status_t status) {
    switch (status) {
        case OMNIGLOVE_CONTROL_COMPLETE:
            return "complete";
        case OMNIGLOVE_CONTROL_DEVICE_ERROR:
            return "device_error";
        case OMNIGLOVE_CONTROL_MALFORMED:
            return "malformed";
        case OMNIGLOVE_CONTROL_TIMEOUT:
            return "timeout";
        case OMNIGLOVE_CONTROL_CANCELLED:
            return "cancelled";
        case OMNIGLOVE_CONTROL_WRITE_FAILED:
            return "write_failed";
        case OMNIGLOVE_CONTROL_TRANSPORT_ERROR:
            return "transport_error";
        case OMNIGLOVE_CONTROL_RELIABLE_QUEUE_OVERFLOW:
            return "reliable_queue_overflow";
        case OMNIGLOVE_CONTROL_UNSUPPORTED:
            return "unsupported";
        case OMNIGLOVE_CONTROL_STOPPED:
            return "stopped";
        case OMNIGLOVE_CONTROL_SUBMISSION_FAILED:
            return "submission_failed";
        case OMNIGLOVE_CONTROL_INVALID_ARGUMENT:
            return "invalid_argument";
        case OMNIGLOVE_CONTROL_BUFFER_TOO_SMALL:
            return "buffer_too_small";
        default:
            return "unknown";
    }
}

static void CopyFixedText(char* output, size_t output_size,
                          const uint8_t* input, size_t input_size) {
    size_t length = 0;
    while (length < input_size && input[length] != 0) ++length;
    while (length > 0 && input[length - 1] == ' ') --length;
    if (length >= output_size) length = output_size - 1;
    memcpy(output, input, length);
    output[length] = '\0';
}

static void PrintUsage(const char* program) {
    printf("Usage: %s\n", program);
    printf(
        "Discover all supported gloves and query firmware information "
        "through the public C API.\n");
}

int main(int argc, char** argv) {
    if (argc == 2 && strcmp(argv[1], "--help") == 0) {
        PrintUsage(argv[0]);
        return 0;
    }
    if (argc != 1) {
        PrintUsage(argv[0]);
        return 2;
    }

    if (omniglove_abi_version() != OMNIGLOVE_ABI_VERSION) {
        fprintf(stderr, "ABI mismatch: header=0x%08x runtime=0x%08x\n",
                (unsigned)OMNIGLOVE_ABI_VERSION,
                (unsigned)omniglove_abi_version());
        return 1;
    }

    omniglove_session_t* session = NULL;
    omniglove_init_report_t* report = NULL;
    const omniglove_error_t error =
        omniglove_initialize(NULL, &session, &report);
    if (report != NULL) omniglove_init_report_destroy(report);
    if (error != OMNIGLOVE_ERROR_NONE || session == NULL) {
        fprintf(stderr, "initialize failed: %s\n", omniglove_error_name(error));
        if (session != NULL) omniglove_session_destroy(session);
        return 1;
    }

    const size_t count = omniglove_session_device_count(session);
    if (count == 0) {
        fprintf(stderr, "no supported glove found\n");
        omniglove_session_destroy(session);
        return 1;
    }

    int exit_code = 0;
    for (size_t index = 0; index < count; ++index) {
        omniglove_device_t* device =
            omniglove_session_device_at(session, index);
        if (device == NULL) {
            exit_code = 1;
            continue;
        }

        char product_key[64] = {0};
        omniglove_device_product_key(device, product_key, sizeof(product_key));
        printf("DEVICE index=%zu product=%s hand=%s\n", index, product_key,
               HandName(omniglove_device_hand(device)));

        omniglove_firmware_info_t info;
        memset(&info, 0, sizeof(info));
        info.struct_size = sizeof(info);
        const omniglove_control_status_t status =
            omniglove_device_firmware_info(device, 1000, &info);
        if (status != OMNIGLOVE_CONTROL_COMPLETE) {
            fprintf(stderr,
                    "FIRMWARE index=%zu status=%s return_code=%u "
                    "device_error=%u\n",
                    index, ControlStatusName(status),
                    (unsigned)info.return_code,
                    (unsigned)info.device_error_code);
            exit_code = 1;
            continue;
        }

        char hardware[OMNIGLOVE_HARDWARE_VERSION_SIZE + 1] = {0};
        char product[OMNIGLOVE_PRODUCT_NAME_SIZE + 1] = {0};
        char serial[OMNIGLOVE_DEVICE_SN_SIZE + 1] = {0};
        CopyFixedText(hardware, sizeof(hardware), info.hardware_version,
                      sizeof(info.hardware_version));
        CopyFixedText(product, sizeof(product), info.product_name,
                      sizeof(info.product_name));
        CopyFixedText(serial, sizeof(serial), info.device_sn,
                      sizeof(info.device_sn));
        printf(
            "FIRMWARE index=%zu status=complete loader=%u.%u.%u.%u "
            "app=%u.%u.%u.%u hardware=%s product=%s sn=%s\n",
            index, (unsigned)info.loader_software_version[0],
            (unsigned)info.loader_software_version[1],
            (unsigned)info.loader_software_version[2],
            (unsigned)info.loader_software_version[3],
            (unsigned)info.app_software_version[0],
            (unsigned)info.app_software_version[1],
            (unsigned)info.app_software_version[2],
            (unsigned)info.app_software_version[3], hardware, product, serial);
    }

    omniglove_session_stop(session);
    omniglove_session_destroy(session);
    return exit_code;
}
