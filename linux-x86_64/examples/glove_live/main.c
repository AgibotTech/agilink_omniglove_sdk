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

#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "omniglove/omniglove.h"

static volatile sig_atomic_t g_stop_requested = 0;
static omniglove_device_t* g_active_device = NULL;

static void HandleSignal(int signal_number) {
    (void)signal_number;
    g_stop_requested = 1;
}

typedef struct StreamCounters {
    uint64_t delivered;
    uint64_t last_sequence;
} StreamCounters;

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

static const char* StreamKindName(uint32_t kind) {
    switch (kind) {
        case OMNIGLOVE_STREAM_POSE_DATA:
            return "posedata";
        case OMNIGLOVE_STREAM_POST_DATA:
            return "postdata";
        default:
            return "unknown";
    }
}

/* Called serially on a dedicated stream worker; sample and its data pointers
 * are borrowed and valid only for the duration of the callback. Keep it
 * non-blocking. stop() for the running stream may be called from here. */
static void PrintPoseNode(const char* name, const omniglove_pose_node_t* node) {
    const omniglove_pose_emf_t* emf = &node->emf;
    printf(
        "  %-6s xyz=%4d,%4d,%4d ypr_cdeg=%5d,%5d,%5d conf=%u.%02u"
        " valid=%u\n",
        name, (int)emf->position_mm[0], (int)emf->position_mm[1],
        (int)emf->position_mm[2], (int)emf->yaw_pitch_roll_cdeg[0],
        (int)emf->yaw_pitch_roll_cdeg[1], (int)emf->yaw_pitch_roll_cdeg[2],
        (unsigned)(emf->confidence_milli / 100u),
        (unsigned)(emf->confidence_milli % 100u), (unsigned)emf->valid);
}

static void OMNIGLOVE_CALL OnPoseSample(const omniglove_stream_sample_t* sample,
                                        void* user_data) {
    StreamCounters* counters = (StreamCounters*)user_data;
    const omniglove_pose_data_t* pose = sample->data.posedata;
    if (pose == 0) return;
    ++counters->delivered;
    counters->last_sequence = sample->source_sequence;

    printf("--- POSE #%llu gen=%llu gap=%llu tick=%u\n",
           (unsigned long long)counters->delivered,
           (unsigned long long)sample->connection_generation,
           (unsigned long long)sample->gap_count,
           (unsigned)pose->device_tick_ms);
    PrintPoseNode("thumb", &pose->thumb);
    PrintPoseNode("index", &pose->index);
    PrintPoseNode("middle", &pose->middle);
    PrintPoseNode("ring", &pose->ring);
    PrintPoseNode("pinky", &pose->pinky);
    PrintPoseNode("wrist", &pose->wrist);
    const omniglove_pose_imu_t* back = &pose->back_of_hand_imu;
    printf("  back_imu rpy_cdeg=%5d,%5d,%5d flags=0x%02x tactile=%u%s\n",
           (int)back->roll_pitch_yaw_cdeg[0], (int)back->roll_pitch_yaw_cdeg[1],
           (int)back->roll_pitch_yaw_cdeg[2], (unsigned)back->flags,
           pose->tactile.mapped ? (unsigned)pose->tactile.count : 0u,
           pose->tactile.mapped ? "" : " (unmapped)");

    if (g_stop_requested && g_active_device != 0)
        omniglove_device_stream_stop(g_active_device,
                                     OMNIGLOVE_STREAM_POSE_DATA);
}

static void PrintCandidateReport(omniglove_init_report_t* report) {
    printf("INIT outcome=%u candidates=%u\n",
           (unsigned)omniglove_init_report_outcome(report),
           (unsigned)omniglove_init_report_candidate_count(report));
    const size_t count = omniglove_init_report_candidate_count(report);
    for (size_t i = 0; i < count; ++i) {
        omniglove_candidate_result_t candidate;
        memset(&candidate, 0, sizeof(candidate));
        candidate.struct_size = sizeof(candidate);
        if (omniglove_init_report_candidate(report, i, &candidate) ==
            OMNIGLOVE_ERROR_NONE) {
            printf(
                "CANDIDATE index=%zu probe=%u error=%u has_uid=%u"
                " uid=%llu selected=%u initialized=%u\n",
                i, (unsigned)candidate.probe_status, (unsigned)candidate.error,
                (unsigned)candidate.has_device_uid,
                (unsigned long long)candidate.device_uid,
                (unsigned)candidate.selector_matched,
                (unsigned)candidate.initialized);
        }
    }
    char message[256];
    const size_t needed =
        omniglove_init_report_message(report, message, sizeof(message));
    if (needed > 0 && needed <= sizeof(message))
        printf("INIT message=%s\n", message);
}

int main(int argc, char** argv) {
    uint32_t duration_seconds = 0;
    if (argc >= 2) duration_seconds = (uint32_t)strtoul(argv[1], NULL, 10);

    const uint32_t runtime_version = omniglove_abi_version();
    if (runtime_version != OMNIGLOVE_ABI_VERSION) {
        fprintf(stderr, "ABI mismatch: header=0x%08x runtime=0x%08x\n",
                (unsigned)OMNIGLOVE_ABI_VERSION, (unsigned)runtime_version);
        return 1;
    }
    printf("Omniglove SDK ABI %u.%u.%u\n",
           (unsigned)OMNIGLOVE_ABI_VERSION_MAJOR,
           (unsigned)OMNIGLOVE_ABI_VERSION_MINOR,
           (unsigned)OMNIGLOVE_ABI_VERSION_PATCH);

    signal(SIGINT, HandleSignal);
    signal(SIGTERM, HandleSignal);

    /* NULL selector: automatic discovery of every supported glove. */
    omniglove_session_t* session = NULL;
    omniglove_init_report_t* report = NULL;
    const omniglove_error_t init_error =
        omniglove_initialize(NULL, &session, &report);
    if (init_error != OMNIGLOVE_ERROR_NONE || session == NULL) {
        fprintf(stderr, "initialize failed: %s\n",
                omniglove_error_name(init_error));
        if (report != NULL) omniglove_init_report_destroy(report);
        return 1;
    }
    if (report != NULL) {
        PrintCandidateReport(report);
        omniglove_init_report_destroy(report);
    }

    const size_t device_count = omniglove_session_device_count(session);
    printf("SESSION devices=%zu\n", device_count);
    if (device_count == 0) {
        fprintf(stderr,
                "no supported device found; is the glove plugged in"
                " and does udev grant access?\n");
        omniglove_session_destroy(session);
        return 1;
    }

    int exit_code = 0;
    for (size_t i = 0; i < device_count; ++i) {
        omniglove_device_t* device = omniglove_session_device_at(session, i);
        if (device == NULL) continue;
        g_active_device = device;

        char product[64] = {0};
        char token[64] = {0};
        omniglove_device_product_key(device, product, sizeof(product));
        omniglove_device_opaque_token(device, token, sizeof(token));
        printf(
            "DEVICE index=%zu product=%s uid=%llu token=%s hand=%s"
            " nominal_hz=%u\n",
            i, product, (unsigned long long)omniglove_device_uid(device), token,
            HandName(omniglove_device_hand(device)),
            (unsigned)omniglove_device_nominal_source_rate_hz(device));

        /* Synchronous control transaction: read-only POSE_INFO probe. */
        omniglove_control_request_t request;
        memset(&request, 0, sizeof(request));
        request.struct_size = sizeof(request);
        request.kind = OMNIGLOVE_CONTROL_POSE_INFO;
        omniglove_control_result_t result;
        memset(&result, 0, sizeof(result));
        result.struct_size = sizeof(result);
        const omniglove_control_status_t status =
            omniglove_device_control(device, &request, 1000, &result);
        printf(
            "CONTROL status=%u request_id=%llu return_code=%u nodes=%u"
            " calibration_state=%u capabilities=0x%x\n",
            (unsigned)status, (unsigned long long)result.request_id,
            (unsigned)result.return_code, (unsigned)result.node_count,
            (unsigned)result.calibration_state,
            (unsigned)result.capability_flags);
        if (status != OMNIGLOVE_CONTROL_COMPLETE)
            fprintf(stderr, "warning: POSE_INFO did not complete\n");

        /* DIRECT POSE stream: typed device-solved pose at ~100 Hz. */
        StreamCounters counters;
        memset(&counters, 0, sizeof(counters));
        omniglove_stream_config_t config;
        memset(&config, 0, sizeof(config));
        config.struct_size = sizeof(config);
        config.kind = OMNIGLOVE_STREAM_POSE_DATA;
        config.pose_components = OMNIGLOVE_POSE_COMPONENT_ALL;
        config.output_mode = OMNIGLOVE_STREAM_OUTPUT_DIRECT;
        config.source_interval_ms = 10;
        config.source_timeout_ms = 100;
        config.callback = OnPoseSample;
        config.callback_user_data = &counters;
        config.callback_queue_capacity = 256;
        const omniglove_stream_error_t configure_status =
            omniglove_device_stream_configure(device, &config);
        if (configure_status != OMNIGLOVE_STREAM_ERROR_NONE) {
            fprintf(stderr, "configure failed: %u\n",
                    (unsigned)configure_status);
            exit_code = 1;
            continue;
        }
        const omniglove_stream_error_t start_status =
            omniglove_device_stream_start(device, OMNIGLOVE_STREAM_POSE_DATA);
        if (start_status != OMNIGLOVE_STREAM_ERROR_NONE) {
            fprintf(stderr, "start failed: %u\n", (unsigned)start_status);
            exit_code = 1;
            continue;
        }

        printf("STREAM kind=%s started; sampling",
               StreamKindName(OMNIGLOVE_STREAM_POSE_DATA));
        if (duration_seconds > 0)
            printf(" for %us", (unsigned)duration_seconds);
        printf(" (Ctrl-C to stop)\n");

        const long poll_ns = 200000000L;
        uint64_t elapsed_ms = 0;
        while (!g_stop_requested) {
            if (duration_seconds > 0 &&
                elapsed_ms >= (uint64_t)duration_seconds * 1000u)
                break;
            struct timespec nap = {0, poll_ns};
            nanosleep(&nap, NULL);
            elapsed_ms += 200;
        }

        omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_POSE_DATA);
        g_active_device = NULL;

        omniglove_stream_status_t stream_status;
        memset(&stream_status, 0, sizeof(stream_status));
        stream_status.struct_size = sizeof(stream_status);
        if (omniglove_device_stream_status(device, OMNIGLOVE_STREAM_POSE_DATA,
                                           &stream_status) ==
            OMNIGLOVE_STREAM_ERROR_NONE) {
            printf(
                "STATUS kind=%s state=%u last_error=%u"
                " source_events=%llu samples=%llu no_data=%llu"
                " timeouts=%llu errors=%llu malformed=%llu"
                " callback_delivered=%llu dropped_full=%llu"
                " discontinuities=%llu rate_mHz=%llu\n",
                StreamKindName(OMNIGLOVE_STREAM_POSE_DATA),
                (unsigned)stream_status.state,
                (unsigned)stream_status.last_error,
                (unsigned long long)stream_status.source_events,
                (unsigned long long)stream_status.source_samples,
                (unsigned long long)stream_status.source_no_data,
                (unsigned long long)stream_status.source_timeouts,
                (unsigned long long)stream_status.source_errors,
                (unsigned long long)stream_status.source_malformed,
                (unsigned long long)stream_status.callback_delivered,
                (unsigned long long)stream_status.callback_dropped_full,
                (unsigned long long)stream_status.callback_discontinuities,
                (unsigned long long)stream_status.actual_source_rate_millihz);
        }
        if (stream_status.source_errors != 0 ||
            stream_status.source_no_data != 0 ||
            stream_status.callback_dropped_full != 0 ||
            counters.delivered == 0) {
            fprintf(stderr, "FAIL stream did not deliver clean samples\n");
            exit_code = 1;
        } else {
            printf("PASS delivered=%llu samples\n",
                   (unsigned long long)counters.delivered);
        }
    }

    omniglove_session_stop(session);
    omniglove_session_destroy(session);
    return exit_code;
}
