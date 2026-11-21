// Copyright (c) 2025 Agibot Co., Ltd.
// Omniglove SDK is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan
// PSL v2. You may obtain a copy of Mulan PSL v2 at:
//     http://license.coscl.org.cn/MulanPSL2
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
// KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE. See the
// Mulan PSL v2 for more details.
//
// SPDX-License-Identifier: MulanPSL-2.0

#include <algorithm>
#include <array>
#include <cerrno>
#include <charconv>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <mutex>
#include <string>
#include <string_view>
#include <vector>

#if defined(__linux__) || defined(__ANDROID__)
#include <arpa/inet.h>
#include <poll.h>
#include <sys/socket.h>
#include <unistd.h>
#endif

#include "omniglove/omniglove.h"

namespace {

using Clock = std::chrono::steady_clock;

constexpr std::size_t kMaximumDatagramSize = 65507;
constexpr std::uint32_t kPosePayloadFormat = 0x54315007U;
constexpr std::uint32_t kPostPayloadFormat = 0x54314B02U;
constexpr std::uint32_t kRemotePayloadFormat = 0x54314D02U;

struct Options {
    std::string listen_ipv4{"127.0.0.1"};
    std::uint16_t port{45550};
    std::uint32_t samples_per_stream{3};
    std::uint32_t source_interval_ms{10};
    std::uint32_t source_timeout_ms{1000};
    std::uint32_t control_timeout_ms{1000};
    std::uint32_t receive_timeout_ms{5000};
    std::uint32_t three_stream_stress_seconds{0};
    std::uint32_t two_stream_stress_seconds{0};
    std::string stress_pair{"pose-post"};
    std::uint32_t pose_info_type{0};
    bool quiet_samples{false};
    bool allow_write{false};
    bool restore_after_write{false};
    bool ignore_bone{false};
    bool direct_only{false};
    bool json_self_test{false};
};

struct StreamRateSummary {
    std::size_t device_index{0};
    std::string test;
    std::uint32_t kind{0};
    std::uint64_t samples{0};
    std::uint64_t received_bytes{0};
    std::uint64_t loss_frames{0};
    std::uint64_t source_loss_frames{0};
    std::uint64_t udp_loss_frames{0};
    std::uint64_t reported_gap_frames{0};
    double loss_rate_percent{0.0};
    double source_loss_rate_percent{0.0};
    double udp_loss_rate_percent{0.0};
    double receive_hz{0.0};
    double receive_kbytes_per_second{0.0};
    double source_hz{0.0};
    double process_hz{0.0};
    double publish_hz{0.0};
};

struct StreamRateTotal {
    std::size_t device_index{0};
    std::string test;
    std::uint64_t received_samples{0};
    std::uint64_t received_bytes{0};
    std::uint64_t loss_frames{0};
    std::uint64_t source_loss_frames{0};
    std::uint64_t udp_loss_frames{0};
    std::uint64_t reported_gap_frames{0};
    double loss_rate_percent{0.0};
    double receive_hz{0.0};
    double receive_kbytes_per_second{0.0};
    double target_hz{125.0};
};

struct Summary {
    std::uint32_t passed{0};
    std::uint32_t failed{0};
    std::uint32_t skipped{0};
    std::vector<StreamRateSummary> stress_rates;
    std::vector<StreamRateTotal> stress_totals;

    void pass(const std::string& scope, const std::string& detail) {
        ++passed;
        std::cout << "PASS " << scope << " " << detail << '\n';
    }
    void fail(const std::string& scope, const std::string& detail) {
        ++failed;
        std::cout << "FAIL " << scope << " " << detail << '\n';
    }
    void skip(const std::string& scope, const std::string& detail) {
        ++skipped;
        std::cout << "SKIP " << scope << " " << detail << '\n';
    }
};

const char* HandName(omniglove_hand_t hand) noexcept {
    switch (hand) {
        case OMNIGLOVE_HAND_LEFT:
            return "left";
        case OMNIGLOVE_HAND_RIGHT:
            return "right";
        case OMNIGLOVE_HAND_UNKNOWN:
            return "unknown";
    }
    return "invalid";
}

const char* JsonStreamName(std::uint32_t kind) noexcept {
    switch (kind) {
        case OMNIGLOVE_STREAM_POSE_DATA:
            return "posedata";
        case OMNIGLOVE_STREAM_POST_DATA:
            return "postdata";
        case OMNIGLOVE_STREAM_REMOTE_DATA:
            return "remotedata";
        default:
            return "unknown";
    }
}

const char* StreamName(std::uint32_t kind) noexcept {
    switch (kind) {
        case OMNIGLOVE_STREAM_POSE_DATA:
            return "posedata";
        case OMNIGLOVE_STREAM_POST_DATA:
            return "postdata";
        case OMNIGLOVE_STREAM_REMOTE_DATA:
            return "remotedata";
        default:
            return "unknown";
    }
}

const char* ControlName(std::uint32_t kind) noexcept {
    switch (kind) {
        case OMNIGLOVE_CONTROL_POSE_INFO:
            return "POSE_INFO";
        case OMNIGLOVE_CONTROL_CALIBRATION_BLOB_WRITE:
            return "CALIB_BLOB_WRITE";
        case OMNIGLOVE_CONTROL_CALIBRATION_BLOB_READ:
            return "CALIB_BLOB_READ";
        case OMNIGLOVE_CONTROL_CALIBRATION_PHASE_WRITE:
            return "CALIB_PHASE_WRITE";
        case OMNIGLOVE_CONTROL_CALIBRATION_PHASE_READ:
            return "CALIB_PHASE_READ";
        case OMNIGLOVE_CONTROL_REMOTE_DATA:
            return "REMOTE_DATA";
        case OMNIGLOVE_CONTROL_BONE_READ:
            return "BONE_READ";
        case OMNIGLOVE_CONTROL_BONE_WRITE:
            return "BONE_WRITE";
        default:
            return "UNKNOWN_CONTROL";
    }
}

const char* ControlStatusName(omniglove_control_status_t status) noexcept {
    switch (status) {
        case OMNIGLOVE_CONTROL_COMPLETE:
            return "complete";
        case OMNIGLOVE_CONTROL_DEVICE_ERROR:
            return "device-error";
        case OMNIGLOVE_CONTROL_MALFORMED:
            return "malformed";
        case OMNIGLOVE_CONTROL_TIMEOUT:
            return "timeout";
        case OMNIGLOVE_CONTROL_CANCELLED:
            return "cancelled";
        case OMNIGLOVE_CONTROL_WRITE_FAILED:
            return "write-failed";
        case OMNIGLOVE_CONTROL_TRANSPORT_ERROR:
            return "transport-error";
        case OMNIGLOVE_CONTROL_RELIABLE_QUEUE_OVERFLOW:
            return "reliable-queue-overflow";
        case OMNIGLOVE_CONTROL_UNSUPPORTED:
            return "unsupported";
        case OMNIGLOVE_CONTROL_STOPPED:
            return "stopped";
        case OMNIGLOVE_CONTROL_SUBMISSION_FAILED:
            return "submission-failed";
        case OMNIGLOVE_CONTROL_INVALID_ARGUMENT:
            return "invalid-argument";
        case OMNIGLOVE_CONTROL_BUFFER_TOO_SMALL:
            return "buffer-too-small";
    }
    return "unknown";
}

const char* StreamErrorName(omniglove_stream_error_t error) noexcept {
    switch (error) {
        case OMNIGLOVE_STREAM_ERROR_NONE:
            return "none";
        case OMNIGLOVE_STREAM_ERROR_INVALID_ARGUMENT:
            return "invalid-argument";
        case OMNIGLOVE_STREAM_ERROR_NOT_CONFIGURED:
            return "not-configured";
        case OMNIGLOVE_STREAM_ERROR_BUSY:
            return "busy";
        case OMNIGLOVE_STREAM_ERROR_SOURCE_START_FAILED:
            return "source-start-failed";
        case OMNIGLOVE_STREAM_ERROR_PUBLISHER_OPEN_FAILED:
            return "publisher-open-failed";
        case OMNIGLOVE_STREAM_ERROR_SOURCE_CONFIGURATION_FAILED:
            return "source-configuration-failed";
        case OMNIGLOVE_STREAM_ERROR_PUBLISH_FAILED:
            return "publish-failed";
        case OMNIGLOVE_STREAM_ERROR_WORKER_START_FAILED:
            return "worker-start-failed";
        case OMNIGLOVE_STREAM_ERROR_TOO_MANY_SUBSCRIBERS:
            return "too-many-subscribers";
        case OMNIGLOVE_STREAM_ERROR_UNSUPPORTED:
            return "unsupported";
    }
    return "unknown";
}

bool ParseUnsigned(const char* text, unsigned long maximum,
                   unsigned long& output) noexcept {
    if (text == nullptr || *text == '\0' || *text == '-') return false;
    char* end = nullptr;
    errno = 0;
    const unsigned long value = std::strtoul(text, &end, 10);
    if (errno != 0 || end == text || *end != '\0' || value > maximum)
        return false;
    output = value;
    return true;
}

void Usage(const char* program) {
    std::cout
        << "Usage: " << program << " [options]\n\n"
        << "C++ public API acceptance demo for supported Omniglove devices.\n\n"
        << "Options:\n"
        << "  --listen IPV4                 UDP listen/destination address "
           "(default 127.0.0.1)\n"
        << "  --port PORT                   UDP port (default 45550)\n"
        << "  --samples N                   Valid datagrams per stream "
           "(default 3)\n"
        << "  --three-stream-stress-s N    Run POSE/POST/REMOTE concurrently "
           "for N seconds\n"
        << "  --two-stream-stress-s N      Run one selected stream pair "
           "for N seconds\n"
        << "  --stress-pair PAIR           pose-post, remote-pose, or "
           "remote-post\n"
        << "  --source-interval-ms N        Requested source interval "
           "(default 10)\n"
        << "  --source-timeout-ms N         Stream source timeout "
           "(default 1000)\n"
        << "  --control-timeout-ms N       Control timeout (default 1000)\n"
        << "  --receive-timeout-ms N       Per-datagram timeout (default "
           "5000)\n"
        << "  --pose-info-type 0|1|2       POSE_INFO selector (default 0)\n"
        << "  --quiet-samples             Suppress per-sample UDP output\n"
        << "  --allow-write                 Enable CALIB/BONE writes and "
           "current-frame phase capture\n"
        << "  --restore-after-write        Re-send the backup after read-back "
           "verification\n"
        << "  --ignore-bone                Skip BONE_READ and BONE_WRITE\n"
        << "  --direct-only                Run controls and POSE DIRECT; skip "
           "all UDP checks\n"
        << "  --json-self-test             Validate the current UDP JSON "
           "contract\n"
        << "  --help                        Show this text\n";
}

bool ParseOptions(int argc, char** argv, Options& output) {
    for (int index = 1; index < argc; ++index) {
        const std::string argument(argv[index]);
        if (argument == "--help" || argument == "-h") {
            Usage(argv[0]);
            return false;
        }
        if (argument == "--allow-write") {
            output.allow_write = true;
            continue;
        }
        if (argument == "--quiet-samples") {
            output.quiet_samples = true;
            continue;
        }
        if (argument == "--restore-after-write") {
            output.restore_after_write = true;
            continue;
        }
        if (argument == "--json-self-test") {
            output.json_self_test = true;
            continue;
        }
        if (argument == "--ignore-bone") {
            output.ignore_bone = true;
            continue;
        }
        if (argument == "--direct-only") {
            output.direct_only = true;
            continue;
        }
        if (index + 1 >= argc) {
            std::cerr << "missing value for " << argument << '\n';
            return false;
        }
        const char* value = argv[++index];
        unsigned long parsed = 0;
        if (argument == "--listen") {
            output.listen_ipv4 = value;
        } else if (argument == "--port" &&
                   ParseUnsigned(value, 65535, parsed) && parsed != 0) {
            output.port = static_cast<std::uint16_t>(parsed);
        } else if (argument == "--samples" &&
                   ParseUnsigned(value, 1000, parsed) && parsed != 0) {
            output.samples_per_stream = static_cast<std::uint32_t>(parsed);
        } else if (argument == "--three-stream-stress-s" &&
                   ParseUnsigned(value, 86400, parsed) && parsed != 0) {
            output.three_stream_stress_seconds =
                static_cast<std::uint32_t>(parsed);
        } else if (argument == "--two-stream-stress-s" &&
                   ParseUnsigned(value, 86400, parsed) && parsed != 0) {
            output.two_stream_stress_seconds =
                static_cast<std::uint32_t>(parsed);
        } else if (argument == "--stress-pair") {
            output.stress_pair = value;
        } else if (argument == "--source-interval-ms" &&
                   ParseUnsigned(value, 60000, parsed) && parsed != 0) {
            output.source_interval_ms = static_cast<std::uint32_t>(parsed);
        } else if (argument == "--source-timeout-ms" &&
                   ParseUnsigned(value, 60000, parsed) && parsed != 0) {
            output.source_timeout_ms = static_cast<std::uint32_t>(parsed);
        } else if (argument == "--control-timeout-ms" &&
                   ParseUnsigned(value, 60000, parsed) && parsed != 0) {
            output.control_timeout_ms = static_cast<std::uint32_t>(parsed);
        } else if (argument == "--receive-timeout-ms" &&
                   ParseUnsigned(value, 60000, parsed) && parsed != 0) {
            output.receive_timeout_ms = static_cast<std::uint32_t>(parsed);
        } else if (argument == "--pose-info-type" &&
                   ParseUnsigned(value, 2, parsed)) {
            output.pose_info_type = static_cast<std::uint32_t>(parsed);
        } else {
            std::cerr << "invalid option: " << argument << '\n';
            return false;
        }
    }
    if (output.restore_after_write && !output.allow_write) {
        std::cerr << "--restore-after-write requires --allow-write\n";
        return false;
    }
    if (output.direct_only && (output.three_stream_stress_seconds != 0 ||
                               output.two_stream_stress_seconds != 0)) {
        std::cerr << "--direct-only cannot be combined with stream stress\n";
        return false;
    }
    if (output.three_stream_stress_seconds != 0 && output.allow_write) {
        std::cerr << "stream stress cannot be combined with --allow-write\n";
        return false;
    }
    if (output.two_stream_stress_seconds != 0 &&
        (output.allow_write || output.three_stream_stress_seconds != 0)) {
        std::cerr << "--two-stream-stress-s cannot be combined with "
                     "--allow-write or --three-stream-stress-s\n";
        return false;
    }
    if (output.stress_pair != "pose-post" &&
        output.stress_pair != "remote-pose" &&
        output.stress_pair != "remote-post") {
        std::cerr << "--stress-pair must be pose-post, remote-pose, or "
                     "remote-post\n";
        return false;
    }
    return true;
}

std::string PublicString(const omniglove_device_t* device, bool product_key) {
    const std::size_t required =
        product_key ? omniglove_device_product_key(device, nullptr, 0)
                    : omniglove_device_opaque_token(device, nullptr, 0);
    if (required == 0) return {};
    std::vector<char> bytes(required);
    const std::size_t copied =
        product_key
            ? omniglove_device_product_key(device, bytes.data(), bytes.size())
            : omniglove_device_opaque_token(device, bytes.data(), bytes.size());
    return copied == required ? std::string(bytes.data()) : std::string{};
}

bool RunControl(omniglove_device_t* device,
                const omniglove_control_request_t& request,
                std::uint32_t timeout_ms, omniglove_control_result_t& output,
                Summary& summary) {
    output = {};
    output.struct_size = sizeof(output);
    const auto status =
        omniglove_device_control(device, &request, timeout_ms, &output);
    std::cout << "CONTROL name=" << ControlName(request.kind)
              << " status=" << ControlStatusName(status)
              << " result_status=" << output.status
              << " request_id=" << output.request_id
              << " sequence=" << output.protocol_sequence
              << " generation=" << output.connection_generation
              << " completed_ns=" << output.completed_monotonic_ns
              << " return_code=" << output.return_code
              << " device_error=" << output.device_error_code << '\n';
    if (status != OMNIGLOVE_CONTROL_COMPLETE ||
        output.status != OMNIGLOVE_CONTROL_COMPLETE ||
        output.kind != request.kind || output.request_id == 0 ||
        output.protocol_sequence == 0 || output.connection_generation == 0 ||
        output.return_code != 0 || output.device_error_code != 0) {
        summary.fail(ControlName(request.kind), "control transaction failed");
        return false;
    }
    summary.pass(ControlName(request.kind), "control transaction complete");
    return true;
}

omniglove_control_request_t Request(std::uint32_t kind,
                                    std::uint32_t pose_info_type = 0) {
    omniglove_control_request_t request{};
    request.struct_size = sizeof(request);
    request.kind = kind;
    request.pose_info_type = pose_info_type;
    return request;
}

void UpdateFingerprint(const float* values, std::size_t count,
                       std::uint64_t& hash) noexcept {
    const auto* bytes = reinterpret_cast<const std::uint8_t*>(values);
    for (std::size_t index = 0; index < count * sizeof(float); ++index) {
        hash ^= bytes[index];
        hash *= 1099511628211ULL;
    }
}

std::uint64_t BlobFingerprint(
    const omniglove_calibration_blob_t& blob) noexcept {
    std::uint64_t hash = 14695981039346656037ULL;
    UpdateFingerprint(blob.tx_matrix, 9, hash);
    UpdateFingerprint(blob.rx_matrix, 54, hash);
    UpdateFingerprint(blob.dist_r0, 6, hash);
    UpdateFingerprint(blob.dist_g0, 6, hash);
    UpdateFingerprint(blob.dist_n, 6, hash);
    return hash;
}

bool FiniteArray(const float* values, std::size_t count) noexcept {
    for (std::size_t index = 0; index < count; ++index)
        if (!std::isfinite(values[index])) return false;
    return true;
}

bool BlobMeaningful(const omniglove_calibration_blob_t& blob) noexcept {
    const float* groups[] = {blob.tx_matrix, blob.rx_matrix, blob.dist_r0,
                             blob.dist_g0, blob.dist_n};
    const std::size_t counts[] = {9, 54, 6, 6, 6};
    bool non_zero = false;
    for (std::size_t group = 0; group < 5; ++group) {
        if (!FiniteArray(groups[group], counts[group])) return false;
        for (std::size_t index = 0; index < counts[group]; ++index)
            non_zero = non_zero || groups[group][index] != 0.0F;
    }
    return non_zero;
}

bool EqualBlob(const omniglove_calibration_blob_t& left,
               const omniglove_calibration_blob_t& right) noexcept {
    return std::memcmp(left.tx_matrix, right.tx_matrix,
                       sizeof(left.tx_matrix)) == 0 &&
           std::memcmp(left.rx_matrix, right.rx_matrix,
                       sizeof(left.rx_matrix)) == 0 &&
           std::memcmp(left.dist_r0, right.dist_r0, sizeof(left.dist_r0)) ==
               0 &&
           std::memcmp(left.dist_g0, right.dist_g0, sizeof(left.dist_g0)) ==
               0 &&
           std::memcmp(left.dist_n, right.dist_n, sizeof(left.dist_n)) == 0 &&
           left.dist_valid == right.dist_valid;
}

bool ValidCapturedPhase(const omniglove_calibration_phase_t& phase) noexcept {
    return phase.valid == 1 && phase.hand >= OMNIGLOVE_HAND_LEFT &&
           phase.hand <= OMNIGLOVE_HAND_RIGHT && std::isfinite(phase.phase_x) &&
           std::isfinite(phase.phase_y) && std::isfinite(phase.phase_z);
}

void PrintStreamStatus(const char* prefix, std::uint32_t kind,
                       const omniglove_stream_status_t& status) {
    std::cout << prefix << " stream=" << StreamName(kind)
              << " state=" << status.state
              << " last_error=" << status.last_error
              << " source_events=" << status.source_events
              << " samples=" << status.source_samples
              << " no_data=" << status.source_no_data
              << " timeouts=" << status.source_timeouts
              << " source_errors=" << status.source_errors
              << " processed=" << status.processed_samples
              << " process_decimated=" << status.process_decimated_samples
              << " enqueued=" << status.enqueued
              << " dropped_full=" << status.dropped_full
              << " published=" << status.published
              << " publish_failures=" << status.publish_failures
              << " decimated=" << status.decimated_samples
              << " invalid=" << status.invalid_samples
              << " queue_high=" << status.queue_high_watermark
              << " source_seq=" << status.last_source_sequence
              << " publish_seq=" << status.last_publish_sequence
              << " sample_ns=" << status.first_sample_monotonic_ns << ".."
              << status.last_sample_monotonic_ns
              << " source_event_ns=" << status.first_source_event_monotonic_ns
              << ".." << status.last_source_event_monotonic_ns
              << " processed_ns=" << status.first_processed_monotonic_ns << ".."
              << status.last_processed_monotonic_ns
              << " publish_ns=" << status.first_publish_monotonic_ns << ".."
              << status.last_publish_monotonic_ns
              << " source_mHz=" << status.actual_source_rate_millihz
              << " process_mHz=" << status.actual_process_rate_millihz
              << " publish_mHz=" << status.actual_publish_rate_millihz
              << " source_event_seq=" << status.first_source_event_sequence
              << ".." << status.last_source_event_sequence
              << " source_request=" << status.last_source_request_id
              << " source_generation="
              << status.last_source_connection_generation
              << " source_status=" << status.last_source_status
              << " protocol_seq=" << status.last_source_protocol_sequence
              << " device_errors=" << status.source_device_errors
              << " malformed=" << status.source_malformed
              << " cancelled=" << status.source_cancelled
              << " write_failed=" << status.source_write_failed
              << " transport_errors=" << status.source_transport_errors
              << " reliable_overflows=" << status.source_reliable_overflows
              << " buffer_too_small=" << status.source_buffer_too_small
              << " unsupported=" << status.source_unsupported
              << " stopped=" << status.source_stopped << '\n';
}

class UdpReceiver final {
public:
    ~UdpReceiver() noexcept { close(); }

    bool open(const std::string& ipv4, std::uint16_t port) noexcept {
        close();
#if defined(__linux__) || defined(__ANDROID__)
        sockaddr_in address{};
        address.sin_family = AF_INET;
        address.sin_port = htons(port);
        if (::inet_pton(AF_INET, ipv4.c_str(), &address.sin_addr) != 1)
            return false;
        socket_ = ::socket(AF_INET, SOCK_DGRAM, 0);
        if (socket_ < 0) return false;
        if (::bind(socket_, reinterpret_cast<const sockaddr*>(&address),
                   sizeof(address)) != 0) {
            close();
            return false;
        }
        return true;
#else
        static_cast<void>(ipv4);
        static_cast<void>(port);
        return false;
#endif
    }

    bool receive(std::uint32_t timeout_ms, std::vector<std::uint8_t>& output,
                 std::string& error) noexcept {
#if defined(__linux__) || defined(__ANDROID__)
        if (socket_ < 0 || timeout_ms > static_cast<std::uint32_t>(
                                            std::numeric_limits<int>::max())) {
            error = "receiver-not-open";
            return false;
        }
        pollfd descriptor{};
        descriptor.fd = socket_;
        descriptor.events = POLLIN;
        int ready = 0;
        do {
            ready = ::poll(&descriptor, 1, static_cast<int>(timeout_ms));
        } while (ready < 0 && errno == EINTR);
        if (ready == 0) {
            error = "timeout";
            return false;
        }
        if (ready < 0 ||
            (descriptor.revents & (POLLERR | POLLHUP | POLLNVAL)) != 0) {
            error = "poll-error:" + std::to_string(errno);
            return false;
        }
        std::array<std::uint8_t, kMaximumDatagramSize> bytes{};
        const ssize_t received =
            ::recv(socket_, bytes.data(), bytes.size(), MSG_TRUNC);
        if (received < 0) {
            error = "recv-error:" + std::to_string(errno);
            return false;
        }
        if (static_cast<std::size_t>(received) > bytes.size()) {
            error = "oversized-datagram";
            return false;
        }
        output.assign(bytes.begin(), bytes.begin() + received);
        return true;
#else
        static_cast<void>(timeout_ms);
        static_cast<void>(output);
        error = "unsupported-platform";
        return false;
#endif
    }

    void close() noexcept {
#if defined(__linux__) || defined(__ANDROID__)
        if (socket_ >= 0) {
            ::close(socket_);
            socket_ = -1;
        }
#endif
    }

private:
#if defined(__linux__) || defined(__ANDROID__)
    int socket_{-1};
#endif
};

struct WireState {
    bool have_sequence{false};
    bool have_device_tick{false};
    std::uint64_t source_sequence{0};
    std::uint64_t publish_sequence{0};
    std::uint32_t first_device_tick{0};
    std::uint32_t device_tick{0};
    std::uint32_t device_tick_advances{0};
    std::uint64_t source_loss_frames{0};
    std::uint64_t udp_loss_frames{0};
    std::uint64_t reported_gap_frames{0};
    std::vector<std::uint64_t> sample_to_publish_ns;
    std::vector<std::uint64_t> publish_to_receive_ns;
    std::vector<std::uint64_t> sample_to_receive_ns;
};

std::uint64_t LossFrames(const WireState& state) noexcept {
    return state.source_loss_frames + state.udp_loss_frames;
}

double LossRatePercent(std::uint64_t received_samples,
                       std::uint64_t loss_frames) noexcept {
    const long double total = static_cast<long double>(received_samples) +
                              static_cast<long double>(loss_frames);
    return total > 0.0L
               ? static_cast<double>(static_cast<long double>(loss_frames) *
                                     100.0L / total)
               : 0.0;
}

double LossComponentRatePercent(std::uint64_t received_samples,
                                std::uint64_t total_loss_frames,
                                std::uint64_t component_loss_frames) noexcept {
    const long double total = static_cast<long double>(received_samples) +
                              static_cast<long double>(total_loss_frames);
    return total > 0.0L ? static_cast<double>(
                              static_cast<long double>(component_loss_frames) *
                              100.0L / total)
                        : 0.0;
}

struct StressStreamState {
    std::uint32_t kind{0};
    WireState wire{};
    std::uint64_t received_samples{0};
    std::uint64_t received_bytes{0};
    omniglove_stream_status_t running{};
};

struct LatencySummary {
    std::uint64_t minimum_us{0};
    std::uint64_t average_us{0};
    std::uint64_t p50_us{0};
    std::uint64_t p95_us{0};
    std::uint64_t p99_us{0};
    std::uint64_t p999_us{0};
    std::uint64_t maximum_us{0};
};

std::uint64_t MonotonicNowNs() noexcept {
    return static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::nanoseconds>(
            Clock::now().time_since_epoch())
            .count());
}

std::uint64_t Percentile(const std::vector<std::uint64_t>& sorted,
                         double quantile) noexcept {
    if (sorted.empty()) return 0;
    const auto rank = static_cast<std::size_t>(
        std::ceil(quantile * static_cast<double>(sorted.size())));
    return sorted[std::max<std::size_t>(1, rank) - 1];
}

LatencySummary SummarizeLatencyNs(const std::vector<std::uint64_t>& samples) {
    LatencySummary output;
    if (samples.empty()) return output;
    std::vector<std::uint64_t> sorted = samples;
    std::sort(sorted.begin(), sorted.end());
    long double total = 0;
    for (const auto value : sorted) total += value;
    output.minimum_us = sorted.front() / 1000U;
    output.average_us =
        static_cast<std::uint64_t>(total / sorted.size()) / 1000U;
    output.p50_us = Percentile(sorted, 0.5) / 1000U;
    output.p95_us = Percentile(sorted, 0.95) / 1000U;
    output.p99_us = Percentile(sorted, 0.99) / 1000U;
    output.p999_us = Percentile(sorted, 0.999) / 1000U;
    output.maximum_us = sorted.back() / 1000U;
    return output;
}

void PrintLatency(const char* stream, const char* metric,
                  const std::vector<std::uint64_t>& samples) {
    const auto value = SummarizeLatencyNs(samples);
    std::cout << "LATENCY stream=" << stream << " metric=" << metric
              << " count=" << samples.size() << " us=" << value.minimum_us
              << '/' << value.average_us << '/' << value.p50_us << '/'
              << value.p95_us << '/' << value.p99_us << '/' << value.p999_us
              << '/' << value.maximum_us << '\n';
}

struct DirectPoseCallbackState {
    std::mutex mutex;
    std::condition_variable ready;
    omniglove_hand_t expected_hand{OMNIGLOVE_HAND_UNKNOWN};
    std::uint64_t expected_uid{0};
    std::uint64_t expected_generation{0};
    std::uint64_t last_source_sequence{0};
    std::uint32_t valid_samples{0};
    bool invalid{false};
};

bool ValidateTactileRegion(const omniglove_tactile_region_t& region,
                           std::uint32_t rows, std::uint32_t columns,
                           std::uint32_t count) {
    return region.rows == rows && region.columns == columns &&
           region.count == count && (count == 0 || region.data != nullptr);
}

bool ValidateDirectTactile(const omniglove_tactile_data_t& tactile) {
    if (tactile.mapped == 0)
        return tactile.unmapped_size <= 800 &&
               (tactile.unmapped_size == 0 || tactile.unmapped_data != nullptr);
    return tactile.mapped == 1 &&
           tactile.count == OMNIGLOVE_TACTILE_POINT_COUNT &&
           ValidateTactileRegion(tactile.thumb.tip, 8, 7, 38) &&
           ValidateTactileRegion(tactile.thumb.pad, 4, 7, 28) &&
           ValidateTactileRegion(tactile.index.tip, 8, 7, 38) &&
           ValidateTactileRegion(tactile.index.pad, 4, 7, 28) &&
           ValidateTactileRegion(tactile.index.root, 4, 7, 28) &&
           ValidateTactileRegion(tactile.middle.tip, 8, 7, 37) &&
           ValidateTactileRegion(tactile.middle.pad, 4, 7, 28) &&
           ValidateTactileRegion(tactile.middle.root, 4, 7, 28) &&
           ValidateTactileRegion(tactile.ring.tip, 8, 7, 37) &&
           ValidateTactileRegion(tactile.ring.pad, 4, 7, 28) &&
           ValidateTactileRegion(tactile.ring.root, 4, 7, 28) &&
           ValidateTactileRegion(tactile.pinky.tip, 8, 7, 39) &&
           ValidateTactileRegion(tactile.pinky.middle, 4, 7, 28) &&
           ValidateTactileRegion(tactile.pinky.root, 4, 7, 25) &&
           ValidateTactileRegion(tactile.palm_surface, 30, 20, 308);
}

bool ValidateDirectPoseData(const omniglove_pose_data_t& pose) {
    if (pose.mapped != 1 || pose.components != OMNIGLOVE_POSE_COMPONENT_ALL ||
        !ValidateDirectTactile(pose.tactile))
        return false;
    const std::array<const omniglove_pose_node_t*, 6> nodes{
        {&pose.thumb, &pose.index, &pose.middle, &pose.ring, &pose.pinky,
         &pose.wrist}};
    for (const auto* node : nodes) {
        if (node->emf.confidence_milli > 1000 || node->emf.valid > 1 ||
            node->imu.reserved != 0)
            return false;
    }
    return pose.back_of_hand_imu.reserved == 0;
}

void OMNIGLOVE_CALL DirectPoseCallback(const omniglove_stream_sample_t* sample,
                                       void* user_data) {
    auto* state = static_cast<DirectPoseCallbackState*>(user_data);
    if (state == nullptr) return;
    std::lock_guard<std::mutex> lock{state->mutex};
    bool valid =
        sample != nullptr && sample->struct_size == sizeof(*sample) &&
        sample->kind == OMNIGLOVE_STREAM_POSE_DATA &&
        sample->layout_version == OMNIGLOVE_STREAM_LAYOUT_VERSION &&
        sample->hand == state->expected_hand &&
        sample->connection_generation != 0 &&
        (sample->flags & OMNIGLOVE_STREAM_SAMPLE_DEVICE_TIME_VALID) != 0 &&
        sample->device_time_us <= 999 &&
        (state->expected_generation == 0 ||
         sample->connection_generation == state->expected_generation) &&
        sample->source_sequence != 0 && sample->sample_monotonic_ns != 0 &&
        sample->data.posedata != nullptr;
    if (valid && state->expected_uid != 0) {
        valid = sample->device_id == state->expected_uid &&
                (sample->flags &
                 OMNIGLOVE_STREAM_SAMPLE_DEVICE_ID_OPAQUE_TOKEN_HASH) == 0;
    } else if (valid) {
        valid = sample->device_id != 0 &&
                (sample->flags &
                 OMNIGLOVE_STREAM_SAMPLE_DEVICE_ID_OPAQUE_TOKEN_HASH) != 0;
    }
    if (valid && state->last_source_sequence != 0) {
        valid = sample->source_sequence > state->last_source_sequence &&
                sample->gap_count ==
                    sample->source_sequence - state->last_source_sequence - 1;
    }
    if (valid) valid = ValidateDirectPoseData(*sample->data.posedata);
    if (!valid) {
        state->invalid = true;
    } else {
        state->last_source_sequence = sample->source_sequence;
        ++state->valid_samples;
    }
    state->ready.notify_one();
}

bool RunDirectPoseStream(omniglove_device_t* device, omniglove_hand_t hand,
                         std::uint64_t uid, std::uint64_t generation,
                         const Options& options, Summary& summary) {
    const std::string scope = "stream/posedata/direct";
    DirectPoseCallbackState callback;
    callback.expected_hand = hand;
    callback.expected_uid = uid;
    callback.expected_generation = generation;
    omniglove_stream_config_t config{};
    config.struct_size = sizeof(config);
    config.kind = OMNIGLOVE_STREAM_POSE_DATA;
    config.pose_components = OMNIGLOVE_POSE_COMPONENT_ALL;
    config.output_mode = OMNIGLOVE_STREAM_OUTPUT_DIRECT;
    config.source_interval_ms = options.source_interval_ms;
    config.source_timeout_ms = options.source_timeout_ms;
    config.callback = DirectPoseCallback;
    config.callback_user_data = &callback;
    config.callback_queue_capacity = 16;
    const auto configured = omniglove_device_stream_configure(device, &config);
    const auto started =
        configured == OMNIGLOVE_STREAM_ERROR_NONE
            ? omniglove_device_stream_start(device, config.kind)
            : configured;
    if (started != OMNIGLOVE_STREAM_ERROR_NONE) {
        summary.fail(scope, std::string("start=") + StreamErrorName(started));
        omniglove_device_stream_stop(device, config.kind);
        return false;
    }
    bool received = false;
    {
        std::unique_lock<std::mutex> lock{callback.mutex};
        received = callback.ready.wait_for(
            lock,
            std::chrono::milliseconds{options.receive_timeout_ms} *
                options.samples_per_stream,
            [&] {
                return callback.invalid ||
                       callback.valid_samples >= options.samples_per_stream;
            });
    }
    omniglove_stream_status_t running{};
    running.struct_size = sizeof(running);
    const auto running_error = omniglove_device_stream_status(
        device, OMNIGLOVE_STREAM_POSE_DATA, &running);
    const auto stopped_once =
        omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_POSE_DATA);
    const auto stopped_twice =
        omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_POSE_DATA);
    omniglove_stream_status_t stopped{};
    stopped.struct_size = sizeof(stopped);
    const auto stopped_error = omniglove_device_stream_status(
        device, OMNIGLOVE_STREAM_POSE_DATA, &stopped);
    const bool valid = received && !callback.invalid &&
                       callback.valid_samples >= options.samples_per_stream &&
                       running_error == OMNIGLOVE_STREAM_ERROR_NONE &&
                       running.state == OMNIGLOVE_STREAM_RUNNING &&
                       running.output_mode == OMNIGLOVE_STREAM_OUTPUT_DIRECT &&
                       running.source_errors == 0 &&
                       running.invalid_samples == 0 &&
                       running.callback_delivered >= callback.valid_samples &&
                       running.callback_dropped_full == 0 &&
                       stopped_once == OMNIGLOVE_STREAM_ERROR_NONE &&
                       stopped_twice == OMNIGLOVE_STREAM_ERROR_NONE &&
                       stopped_error == OMNIGLOVE_STREAM_ERROR_NONE &&
                       stopped.state == OMNIGLOVE_STREAM_STOPPED;
    std::cout << "DIRECT stream=pose samples=" << callback.valid_samples
              << " delivered=" << running.callback_delivered
              << " dropped_full=" << running.callback_dropped_full << std::endl;
    if (valid)
        summary.pass(scope, "typed layout and idempotent stop verified");
    else
        summary.fail(scope, received ? "invalid sample or statistics"
                                     : "callback timeout");
    return valid;
}

bool FindJsonValue(std::string_view json, std::string_view key,
                   std::size_t& offset) {
    const std::string pattern = "\"" + std::string(key) + "\":";
    offset = json.find(pattern);
    if (offset == std::string_view::npos) return false;
    offset += pattern.size();
    return offset < json.size();
}

bool JsonString(std::string_view json, std::string_view key,
                std::string_view& value) {
    std::size_t offset = 0;
    if (!FindJsonValue(json, key, offset) || json[offset] != 34) return false;
    const auto end = json.find(char(34), offset + 1);
    if (end == std::string_view::npos) return false;
    value = json.substr(offset + 1, end - offset - 1);
    return true;
}

bool DatagramStreamKind(const std::vector<std::uint8_t>& bytes,
                        std::uint32_t& kind, std::string& error) {
    if (bytes.size() < 2 || bytes.front() != 123 || bytes.back() != 125 ||
        std::find(bytes.begin(), bytes.end(), 0) != bytes.end()) {
        error = "invalid-json-datagram";
        return false;
    }
    const std::string_view json{reinterpret_cast<const char*>(bytes.data()),
                                bytes.size()};
    std::string_view stream;
    if (!JsonString(json, "stream", stream)) {
        error = "missing-stream-kind";
        return false;
    }
    if (stream == "posedata") {
        kind = OMNIGLOVE_STREAM_POSE_DATA;
    } else if (stream == "postdata") {
        kind = OMNIGLOVE_STREAM_POST_DATA;
    } else if (stream == "remotedata") {
        kind = OMNIGLOVE_STREAM_REMOTE_DATA;
    } else {
        error = "unexpected-stream-kind";
        return false;
    }
    return true;
}

bool JsonUint(std::string_view json, std::string_view key,
              std::uint64_t& value) {
    std::size_t offset = 0;
    if (!FindJsonValue(json, key, offset)) return false;
    const char* begin = json.data() + offset;
    const char* end = json.data() + json.size();
    const auto parsed = std::from_chars(begin, end, value);
    return parsed.ec == std::errc{} && parsed.ptr != begin &&
           parsed.ptr != end && (*parsed.ptr == 44 || *parsed.ptr == 125);
}

bool JsonNullableUint(std::string_view json, std::string_view key,
                      bool& is_null, std::uint64_t& value) {
    std::size_t offset = 0;
    if (!FindJsonValue(json, key, offset)) return false;
    is_null = json.substr(offset, 4) == "null";
    value = 0;
    return is_null || JsonUint(json, key, value);
}

bool HasJsonText(std::string_view json, std::string_view text) {
    return json.find(text) != std::string_view::npos;
}

bool HasNamedFingerParts(std::string_view json, std::string_view leaf,
                         char open = '{') {
    constexpr std::array<std::string_view, 5> parts{"thumb", "index", "middle",
                                                    "ring", "pinky"};
    for (const auto part : parts) {
        const std::string text = "\"" + std::string(part) + "\":{\"" +
                                 std::string(leaf) + "\":" + open;
        if (!HasJsonText(json, text)) return false;
    }
    return true;
}

bool ValidateJsonDataLayout(std::string_view json, std::uint32_t kind,
                            omniglove_hand_t hand, bool sequence_null,
                            std::uint64_t device_sequence,
                            std::uint32_t& device_tick, std::string& error) {
    std::uint64_t tick = 0;
    if (!JsonUint(json, "device_tick_ms", tick) ||
        tick > std::numeric_limits<std::uint32_t>::max()) {
        error = "missing-or-invalid-device-tick";
        return false;
    }
    device_tick = static_cast<std::uint32_t>(tick);
    if (hand == OMNIGLOVE_HAND_UNKNOWN && kind == OMNIGLOVE_STREAM_POSE_DATA) {
        const bool fallback = HasJsonText(json, "\"data\":{\"unmapped\":{");
        if (!fallback) error = "unknown-hand-was-mapped";
        return fallback;
    }
    if (kind == OMNIGLOVE_STREAM_POSE_DATA) {
        const bool valid = HasNamedFingerParts(json, "emf") &&
                           HasJsonText(json, "\"wrist\":{\"emf\":{") &&
                           HasJsonText(json, "\"back_of_hand\":{\"imu\":{") &&
                           HasJsonText(json, "\"tactile\":{");
        if (!valid) error = "invalid-pose-layout";
        return valid;
    }
    if (kind == OMNIGLOVE_STREAM_REMOTE_DATA) {
        std::string_view remote_hand;
        std::uint64_t button_bits = 0;
        std::uint64_t x_raw = 0;
        std::uint64_t y_raw = 0;
        const bool valid = JsonString(json, "remote_hand", remote_hand) &&
                           (remote_hand == "left" || remote_hand == "right") &&
                           JsonUint(json, "button_bits", button_bits) &&
                           button_bits <= 0x07 &&
                           JsonUint(json, "x_raw", x_raw) && x_raw <= 4095 &&
                           JsonUint(json, "y_raw", y_raw) && y_raw <= 4095;
        if (!valid) error = "invalid-remotedata-layout";
        return valid;
    }
    std::uint64_t frame_id = 0;
    std::uint64_t reserved = 0;
    const bool valid =
        kind == OMNIGLOVE_STREAM_POST_DATA && !sequence_null &&
        JsonUint(json, "frame_id", frame_id) && frame_id == device_sequence &&
        JsonUint(json, "reserved", reserved) && reserved <= 255 &&
        HasNamedFingerParts(json, "joints_rad") &&
        HasJsonText(json, "\"wrist\":{\"landmark\":{");
    if (!valid) error = "invalid-post-layout";
    return valid;
}

struct JsonMetadata {
    std::uint64_t device_id{0};
    std::uint64_t generation{0};
    std::uint64_t source_sequence{0};
    std::uint64_t sample_time{0};
    std::uint64_t gap_count{0};
    std::uint64_t device_sequence{0};
    std::uint64_t device_time_ms{0};
    std::uint64_t device_time_us{0};
    std::uint64_t source_payload_format{0};
    std::uint64_t publish_sequence{0};
    std::uint64_t publish_time{0};
    bool device_sequence_null{false};
};

bool ParseJsonMetadata(std::string_view json, std::uint32_t expected_kind,
                       omniglove_hand_t expected_hand, JsonMetadata& value,
                       std::string& error) {
    std::string_view schema;
    std::string_view stream;
    std::string_view hand;
    if (!JsonString(json, "schema", schema) ||
        schema != (expected_kind == OMNIGLOVE_STREAM_POST_DATA
                       ? "omniglove.stream.v6"
                       : "omniglove.stream.v4") ||
        !JsonString(json, "stream", stream) ||
        stream != JsonStreamName(expected_kind) ||
        !JsonString(json, "hand", hand) || hand != HandName(expected_hand)) {
        error = "invalid-json-envelope";
        return false;
    }
    const bool valid =
        JsonUint(json, "device_id", value.device_id) &&
        JsonUint(json, "connection_generation", value.generation) &&
        JsonUint(json, "source_sequence", value.source_sequence) &&
        JsonUint(json, "sample_monotonic_ns", value.sample_time) &&
        JsonUint(json, "gap_count", value.gap_count) &&
        JsonNullableUint(json, "device_sequence", value.device_sequence_null,
                         value.device_sequence) &&
        JsonUint(json, "device_time_ms", value.device_time_ms) &&
        JsonUint(json, "device_time_us", value.device_time_us) &&
        value.device_time_us <= 999 &&
        JsonUint(json, "source_payload_format", value.source_payload_format) &&
        JsonUint(json, "publish_sequence", value.publish_sequence) &&
        JsonUint(json, "publish_monotonic_ns", value.publish_time);
    if (!valid) error = "missing-or-invalid-json-metadata";
    return valid;
}

bool ValidateJsonMetadata(std::string_view json, const JsonMetadata& value,
                          std::uint32_t kind, std::uint64_t expected_uid,
                          std::uint64_t expected_generation,
                          std::uint64_t received_ns, const WireState& state,
                          std::string& error) {
    std::string_view id_type;
    if (!JsonString(json, "device_id_type", id_type)) {
        error = "missing-device-id-type";
        return false;
    }
    if ((expected_uid != 0 &&
         (value.device_id != expected_uid || id_type != "protocol_uid")) ||
        (expected_uid == 0 &&
         (value.device_id == 0 || id_type != "opaque_token_hash"))) {
        error = "device-id-mismatch";
        return false;
    }
    if (value.generation == 0 ||
        (expected_generation != 0 && value.generation != expected_generation) ||
        value.source_sequence == 0 || value.publish_sequence == 0 ||
        value.sample_time == 0 || value.publish_time == 0) {
        error = "invalid-lifecycle-metadata";
        return false;
    }
    if (value.publish_time < value.sample_time ||
        received_ns < value.publish_time) {
        error = "non-monotonic-latency-timestamp";
        return false;
    }
    if (state.have_sequence) {
        if (value.source_sequence <= state.source_sequence ||
            value.publish_sequence <= state.publish_sequence) {
            error = "non-monotonic-sequence";
            return false;
        }
        const std::uint64_t source_delta =
            value.source_sequence - state.source_sequence;
        const std::uint64_t publish_delta =
            value.publish_sequence - state.publish_sequence;
        if (source_delta < publish_delta) {
            error = "sequence-delta-mismatch";
            return false;
        }
        const std::uint64_t source_loss = source_delta - publish_delta;
        if ((publish_delta == 1 && value.gap_count != source_loss) ||
            (publish_delta > 1 && value.gap_count > source_loss)) {
            error = "gap-count-mismatch";
            return false;
        }
    }
    const std::uint32_t format =
        kind == OMNIGLOVE_STREAM_POSE_DATA     ? kPosePayloadFormat
        : kind == OMNIGLOVE_STREAM_POST_DATA   ? kPostPayloadFormat
        : kind == OMNIGLOVE_STREAM_REMOTE_DATA ? kRemotePayloadFormat
                                               : 0;
    if (value.source_payload_format != format) {
        error = "source-payload-format-mismatch";
        return false;
    }
    return true;
}

bool ValidateDatagram(const std::vector<std::uint8_t>& bytes,
                      std::uint32_t expected_kind,
                      omniglove_hand_t expected_hand,
                      std::uint64_t expected_uid,
                      std::uint64_t expected_generation,
                      std::uint64_t received_ns, WireState& state,
                      std::string& error) {
    if (bytes.size() < 2 || bytes.front() != 123 || bytes.back() != 125 ||
        std::find(bytes.begin(), bytes.end(), 0) != bytes.end()) {
        error = "invalid-json-datagram";
        return false;
    }
    const std::string_view json{reinterpret_cast<const char*>(bytes.data()),
                                bytes.size()};
    JsonMetadata metadata;
    if (!ParseJsonMetadata(json, expected_kind, expected_hand, metadata,
                           error) ||
        !ValidateJsonMetadata(json, metadata, expected_kind, expected_uid,
                              expected_generation, received_ns, state, error)) {
        return false;
    }
    std::uint32_t device_tick = 0;
    if (!ValidateJsonDataLayout(json, expected_kind, expected_hand,
                                metadata.device_sequence_null,
                                metadata.device_sequence, device_tick, error)) {
        return false;
    }
    if (metadata.gap_count >
        std::numeric_limits<std::uint64_t>::max() - state.reported_gap_frames) {
        error = "loss-counter-overflow";
        return false;
    }
    if (state.have_sequence) {
        const std::uint64_t source_delta =
            metadata.source_sequence - state.source_sequence;
        const std::uint64_t publish_delta =
            metadata.publish_sequence - state.publish_sequence;
        state.source_loss_frames += source_delta - publish_delta;
        state.udp_loss_frames += publish_delta - 1;
    }
    state.reported_gap_frames += metadata.gap_count;
    state.have_sequence = true;
    state.source_sequence = metadata.source_sequence;
    state.publish_sequence = metadata.publish_sequence;
    state.sample_to_publish_ns.push_back(metadata.publish_time -
                                         metadata.sample_time);
    state.publish_to_receive_ns.push_back(received_ns - metadata.publish_time);
    state.sample_to_receive_ns.push_back(received_ns - metadata.sample_time);
    return true;
}

bool RunJsonValidatorSelfTest() {
    WireState remote_state;
    std::string error;
    const std::string remote_json =
        "{\"schema\":\"omniglove.stream.v4\",\"stream\":\"remotedata\","
        "\"metadata\":{\"hand\":\"right\",\"device_id\":7,"
        "\"device_id_type\":\"protocol_uid\",\"connection_generation\":3,"
        "\"source_sequence\":1,\"sample_monotonic_ns\":10,\"gap_count\":0,"
        "\"device_sequence\":1,\"device_time_ms\":1700000000000,"
        "\"device_time_us\":123,\"source_payload_format\":1412517122,"
        "\"publish_sequence\":1,\"publish_monotonic_ns\":20},"
        "\"data\":{\"device_tick_ms\":1,"
        "\"remote_hand\":\"right\",\"button_bits\":0,"
        "\"x_raw\":0,\"y_raw\":0}}";
    const std::vector<std::uint8_t> remote_bytes(remote_json.begin(),
                                                 remote_json.end());
    std::uint32_t demultiplexed_kind = 0;
    if (!DatagramStreamKind(remote_bytes, demultiplexed_kind, error) ||
        demultiplexed_kind != OMNIGLOVE_STREAM_REMOTE_DATA) {
        std::cerr << "UDP JSON self-test failed (stream demultiplex): " << error
                  << std::endl;
        return false;
    }
    const bool remote_accepted =
        ValidateDatagram(remote_bytes, OMNIGLOVE_STREAM_REMOTE_DATA,
                         OMNIGLOVE_HAND_RIGHT, 7, 3, 30, remote_state, error);
    if (!remote_accepted) {
        std::cerr << "UDP JSON self-test failed (remotedata): " << error
                  << std::endl;
        return false;
    }
    const std::string post_json =
        "{\"schema\":\"omniglove.stream.v6\",\"stream\":\"postdata\","
        "\"metadata\":{\"hand\":\"right\",\"device_id\":7,"
        "\"device_id_type\":\"protocol_uid\",\"connection_generation\":3,"
        "\"source_sequence\":1,\"sample_monotonic_ns\":10,\"gap_count\":0,"
        "\"device_sequence\":9,\"device_time_ms\":1700000000000,"
        "\"device_time_us\":123,\"source_payload_format\":" +
        std::to_string(kPostPayloadFormat) +
        ",\"publish_sequence\":1,\"publish_monotonic_ns\":20},"
        "\"data\":{\"device_tick_ms\":1,\"flags\":5,\"reserved\":165,"
        "\"frame_id\":9,\"thumb\":{\"joints_rad\":{}},"
        "\"index\":{\"joints_rad\":{}},\"middle\":{\"joints_rad\":{}},"
        "\"ring\":{\"joints_rad\":{}},\"pinky\":{\"joints_rad\":{}},"
        "\"wrist\":{\"landmark\":{}}}}";
    const std::vector<std::uint8_t> post_bytes(post_json.begin(),
                                               post_json.end());
    WireState post_state;
    if (!ValidateDatagram(post_bytes, OMNIGLOVE_STREAM_POST_DATA,
                          OMNIGLOVE_HAND_RIGHT, 7, 3, 30, post_state, error)) {
        std::cerr << "UDP JSON self-test failed (postdata v6/reserved): "
                  << error << std::endl;
        return false;
    }
    const std::string source_gap_json =
        "{\"schema\":\"omniglove.stream.v4\",\"stream\":\"remotedata\","
        "\"metadata\":{\"hand\":\"right\",\"device_id\":7,"
        "\"device_id_type\":\"protocol_uid\",\"connection_generation\":3,"
        "\"source_sequence\":4,\"sample_monotonic_ns\":40,\"gap_count\":2,"
        "\"device_sequence\":2,\"device_time_ms\":1700000000000,"
        "\"device_time_us\":123,\"source_payload_format\":1412517122,"
        "\"publish_sequence\":2,\"publish_monotonic_ns\":50},"
        "\"data\":{\"device_tick_ms\":2,"
        "\"remote_hand\":\"right\",\"button_bits\":0,"
        "\"x_raw\":0,\"y_raw\":0}}";
    const std::vector<std::uint8_t> source_gap_bytes(source_gap_json.begin(),
                                                     source_gap_json.end());
    if (!ValidateDatagram(source_gap_bytes, OMNIGLOVE_STREAM_REMOTE_DATA,
                          OMNIGLOVE_HAND_RIGHT, 7, 3, 60, remote_state,
                          error)) {
        std::cerr << "UDP JSON self-test failed (source loss): " << error
                  << std::endl;
        return false;
    }
    const std::string udp_gap_json =
        "{\"schema\":\"omniglove.stream.v4\",\"stream\":\"remotedata\","
        "\"metadata\":{\"hand\":\"right\",\"device_id\":7,"
        "\"device_id_type\":\"protocol_uid\",\"connection_generation\":3,"
        "\"source_sequence\":7,\"sample_monotonic_ns\":70,\"gap_count\":0,"
        "\"device_sequence\":3,\"device_time_ms\":1700000000000,"
        "\"device_time_us\":123,\"source_payload_format\":1412517122,"
        "\"publish_sequence\":4,\"publish_monotonic_ns\":80},"
        "\"data\":{\"device_tick_ms\":3,"
        "\"remote_hand\":\"right\",\"button_bits\":0,"
        "\"x_raw\":0,\"y_raw\":0}}";
    const std::vector<std::uint8_t> udp_gap_bytes(udp_gap_json.begin(),
                                                  udp_gap_json.end());
    if (!ValidateDatagram(udp_gap_bytes, OMNIGLOVE_STREAM_REMOTE_DATA,
                          OMNIGLOVE_HAND_RIGHT, 7, 3, 90, remote_state,
                          error)) {
        std::cerr << "UDP JSON self-test failed (UDP loss): " << error
                  << std::endl;
        return false;
    }
    constexpr double kExpectedLossRate = 4.0 / 7.0 * 100.0;
    if (remote_state.source_loss_frames != 3 ||
        remote_state.udp_loss_frames != 1 ||
        remote_state.reported_gap_frames != 2 ||
        std::abs(LossRatePercent(3, LossFrames(remote_state)) -
                 kExpectedLossRate) > 0.000001) {
        std::cerr << "UDP JSON self-test failed (loss statistics)" << std::endl;
        return false;
    }
    return true;
}

std::uint64_t ByteFingerprint(const std::uint8_t* data,
                              std::size_t size) noexcept {
    std::uint64_t hash = 14695981039346656037ULL;
    for (std::size_t index = 0; index < size; ++index) {
        hash ^= data[index];
        hash *= 1099511628211ULL;
    }
    return hash;
}

bool RunBoneControl(omniglove_device_t* device, const Options& options,
                    Summary& summary) {
    std::vector<std::uint8_t> backup(OMNIGLOVE_BONE_MAX_SIZE);
    std::size_t backup_size = 0;
    omniglove_control_result_t read_result{};
    read_result.struct_size = sizeof(read_result);
    const auto read_status = omniglove_device_bone_read(
        device, backup.data(), backup.size(), &backup_size,
        options.control_timeout_ms, &read_result);
    std::cout << "CONTROL name=BONE_READ status="
              << ControlStatusName(read_status)
              << " request_id=" << read_result.request_id
              << " sequence=" << read_result.protocol_sequence
              << " generation=" << read_result.connection_generation
              << " bytes=" << backup_size << '\n';
    const bool read_ok = read_status == OMNIGLOVE_CONTROL_COMPLETE &&
                         read_result.status == OMNIGLOVE_CONTROL_COMPLETE &&
                         read_result.kind == OMNIGLOVE_CONTROL_BONE_READ &&
                         read_result.request_id != 0 &&
                         read_result.protocol_sequence != 0 &&
                         read_result.connection_generation != 0 &&
                         backup_size == OMNIGLOVE_BONE_MAX_SIZE;
    if (!read_ok) {
        summary.fail("BONE_READ", "complete payload read failed");
        return false;
    }
    backup.resize(backup_size);
    const auto fingerprint = ByteFingerprint(backup.data(), backup.size());
    summary.pass("BONE_READ", "same-sequence chunks reassembled");
    std::cout << "BONE bytes=" << backup.size() << " fingerprint=0x" << std::hex
              << fingerprint << std::dec << '\n';

    if (!options.allow_write) {
        summary.skip("BONE_WRITE", "disabled; pass --allow-write");
        return true;
    }
    omniglove_control_result_t write_result{};
    write_result.struct_size = sizeof(write_result);
    const auto write_status =
        omniglove_device_bone_write(device, backup.data(), backup.size(),
                                    options.control_timeout_ms, &write_result);
    if (write_status != OMNIGLOVE_CONTROL_COMPLETE ||
        write_result.status != OMNIGLOVE_CONTROL_COMPLETE ||
        write_result.kind != OMNIGLOVE_CONTROL_BONE_WRITE) {
        summary.fail("BONE_WRITE", "canonical write transaction failed");
        return false;
    }

    std::vector<std::uint8_t> verification(OMNIGLOVE_BONE_MAX_SIZE);
    std::size_t verification_size = 0;
    omniglove_control_result_t verify_result{};
    verify_result.struct_size = sizeof(verify_result);
    const auto verify_status = omniglove_device_bone_read(
        device, verification.data(), verification.size(), &verification_size,
        options.control_timeout_ms, &verify_result);
    const bool equal =
        verify_status == OMNIGLOVE_CONTROL_COMPLETE &&
        verification_size == backup.size() &&
        std::equal(backup.begin(), backup.end(), verification.begin());
    if (equal) {
        summary.pass("BONE_WRITE", "read-back is byte-exact");
    } else {
        summary.fail("BONE_WRITE", "read-back mismatch");
    }
    return equal;
}

omniglove_stream_config_t UdpStreamConfig(std::uint32_t kind,
                                          const Options& options,
                                          std::uint32_t queue_capacity) {
    omniglove_stream_config_t config{};
    config.struct_size = sizeof(config);
    config.kind = kind;
    config.pose_components =
        kind == OMNIGLOVE_STREAM_POSE_DATA ? OMNIGLOVE_POSE_COMPONENT_ALL : 0;
    config.output_mode = OMNIGLOVE_STREAM_OUTPUT_UDP;
    config.source_interval_ms = options.source_interval_ms;
    config.source_timeout_ms = options.source_timeout_ms;
    config.process_interval_ms = 0;
    config.publish_policy = OMNIGLOVE_PUBLISH_ON_NEW_SAMPLE;
    config.publish_interval_ms = 0;
    config.destination_ipv4 = options.listen_ipv4.data();
    config.destination_ipv4_size =
        static_cast<std::uint32_t>(options.listen_ipv4.size());
    config.destination_port = options.port;
    config.publisher_queue_capacity = queue_capacity;
    return config;
}

bool RunStream(omniglove_device_t* device, std::uint32_t kind,
               omniglove_hand_t hand, std::uint64_t uid,
               std::uint64_t generation, const Options& options,
               Summary& summary) {
    const std::string scope = std::string("stream/") + StreamName(kind);
    UdpReceiver receiver;
    if (!receiver.open(options.listen_ipv4, options.port)) {
        summary.fail(scope, "cannot bind UDP receiver");
        return false;
    }
    const auto config = UdpStreamConfig(kind, options, 16);
    const auto configured = omniglove_device_stream_configure(device, &config);
    if (configured != OMNIGLOVE_STREAM_ERROR_NONE) {
        summary.fail(scope,
                     std::string("configure=") + StreamErrorName(configured));
        return false;
    }
    const auto started = omniglove_device_stream_start(device, kind);
    if (started != OMNIGLOVE_STREAM_ERROR_NONE) {
        summary.fail(scope, std::string("start=") + StreamErrorName(started));
        omniglove_device_stream_stop(device, kind);
        return false;
    }

    const auto receive_started = Clock::now();
    bool received_all = true;
    WireState wire;
    std::uint64_t received_samples = 0;
    while (received_samples < options.samples_per_stream) {
        std::vector<std::uint8_t> datagram;
        std::string error;
        const bool received =
            receiver.receive(options.receive_timeout_ms, datagram, error);
        const std::uint64_t received_ns = MonotonicNowNs();
        if (!received ||
            !ValidateDatagram(datagram, kind, hand, uid, generation,
                              received_ns, wire, error)) {
            summary.fail(
                scope,
                "UDP sample " + std::to_string(received_samples) + " " + error);
            received_all = false;
            break;
        }
        ++received_samples;
        if (!options.quiet_samples) {
            std::cout << "UDP stream=" << StreamName(kind)
                      << " sample=" << received_samples
                      << " source_sequence=" << wire.source_sequence
                      << " publish_sequence=" << wire.publish_sequence
                      << " bytes=" << datagram.size();
            if (wire.have_device_tick)
                std::cout << " device_tick_ms=" << wire.device_tick;
            std::cout << '\n';
        }
    }

    omniglove_stream_status_t running{};
    running.struct_size = sizeof(running);
    const auto status_result =
        omniglove_device_stream_status(device, kind, &running);
    if (status_result == OMNIGLOVE_STREAM_ERROR_NONE)
        PrintStreamStatus("STATUS", kind, running);
    else
        summary.fail(scope,
                     std::string("status=") + StreamErrorName(status_result));

    const auto stopped_once = omniglove_device_stream_stop(device, kind);
    const auto stopped_twice = omniglove_device_stream_stop(device, kind);
    omniglove_stream_status_t stopped{};
    stopped.struct_size = sizeof(stopped);
    const auto stopped_status =
        omniglove_device_stream_status(device, kind, &stopped);
    if (stopped_status == OMNIGLOVE_STREAM_ERROR_NONE)
        PrintStreamStatus("STOPPED", kind, stopped);
    const bool lifecycle_ok = stopped_once == OMNIGLOVE_STREAM_ERROR_NONE &&
                              stopped_twice == OMNIGLOVE_STREAM_ERROR_NONE &&
                              stopped_status == OMNIGLOVE_STREAM_ERROR_NONE &&
                              stopped.state == OMNIGLOVE_STREAM_STOPPED;
    const bool stats_ok =
        status_result == OMNIGLOVE_STREAM_ERROR_NONE &&
        running.state == OMNIGLOVE_STREAM_RUNNING && received_samples != 0 &&
        running.source_samples >= received_samples &&
        running.source_errors == 0 && running.source_no_data == 0 &&
        running.source_timeouts == 0 && running.invalid_samples == 0 &&
        running.dropped_full == 0 && running.published >= received_samples &&
        running.publish_failures == 0;
    const double elapsed_seconds =
        std::chrono::duration<double>(Clock::now() - receive_started).count();
    const double receive_rate =
        elapsed_seconds > 0.0 ? received_samples / elapsed_seconds : 0.0;
    std::cout << "THROUGHPUT stream=" << StreamName(kind)
              << " elapsed_s=" << std::fixed << std::setprecision(3)
              << elapsed_seconds << " samples=" << received_samples
              << " receive_hz=" << receive_rate << '\n';
    PrintLatency(StreamName(kind), "sample_to_publish",
                 wire.sample_to_publish_ns);
    PrintLatency(StreamName(kind), "publish_to_receive",
                 wire.publish_to_receive_ns);
    PrintLatency(StreamName(kind), "sample_to_receive",
                 wire.sample_to_receive_ns);
    if (received_all && lifecycle_ok && stats_ok) {
        summary.pass(scope, "UDP and idempotent stop verified");
        return true;
    }
    if (!lifecycle_ok) summary.fail(scope, "stop/status lifecycle failed");
    if (received_all && !stats_ok)
        summary.fail(scope, "running stream statistics inconsistent");
    return false;
}

bool RunReservedStreamGate(omniglove_device_t* device, const Options& options,
                           Summary& summary) {
    const auto config =
        UdpStreamConfig(OMNIGLOVE_STREAM_RESERVED_1, options, 16);
    omniglove_stream_status_t status{};
    status.struct_size = sizeof(status);
    const bool rejected =
        omniglove_device_stream_configure(device, &config) ==
            OMNIGLOVE_STREAM_ERROR_UNSUPPORTED &&
        omniglove_device_stream_start(device, OMNIGLOVE_STREAM_RESERVED_1) ==
            OMNIGLOVE_STREAM_ERROR_UNSUPPORTED &&
        omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_RESERVED_1) ==
            OMNIGLOVE_STREAM_ERROR_UNSUPPORTED &&
        omniglove_device_stream_status(device, OMNIGLOVE_STREAM_RESERVED_1,
                                       &status) ==
            OMNIGLOVE_STREAM_ERROR_UNSUPPORTED;
    if (rejected)
        summary.pass("stream/reserved-1", "all public operations unsupported");
    else
        summary.fail("stream/reserved-1", "public stream gate mismatch");
    return rejected;
}

double StressReceiveRateHz(const StressStreamState& stream,
                           double elapsed_seconds) noexcept {
    return elapsed_seconds > 0.0
               ? static_cast<double>(stream.received_samples) / elapsed_seconds
               : 0.0;
}

double StressReceiveKBytesPerSecond(const StressStreamState& stream,
                                    double elapsed_seconds) noexcept {
    constexpr double kBytesPerKilobyte = 1000.0;
    return elapsed_seconds > 0.0 ? static_cast<double>(stream.received_bytes) /
                                       kBytesPerKilobyte / elapsed_seconds
                                 : 0.0;
}

bool RunConcurrentStreamStress(omniglove_device_t* device,
                               std::size_t device_index, omniglove_hand_t hand,
                               std::uint64_t uid, std::uint64_t generation,
                               const Options& options,
                               std::uint32_t duration_seconds,
                               const std::string& test,
                               const std::vector<std::uint32_t>& kinds,
                               double target_total_hz, Summary& summary) {
    const std::string scope = "stress/" + test;
    UdpReceiver receiver;
    if (!receiver.open(options.listen_ipv4, options.port)) {
        summary.fail(scope, "cannot bind UDP receiver");
        return false;
    }

    std::vector<StressStreamState> streams;
    streams.reserve(kinds.size());
    for (const auto kind : kinds) streams.push_back({kind});
    std::vector<bool> started(streams.size(), false);
    for (std::size_t index = 0; index < streams.size(); ++index) {
        const auto config = UdpStreamConfig(streams[index].kind, options, 256);
        const auto error = omniglove_device_stream_configure(device, &config);
        if (error != OMNIGLOVE_STREAM_ERROR_NONE) {
            summary.fail(scope, std::string("configure stream=") +
                                    StreamName(streams[index].kind) + " " +
                                    StreamErrorName(error));
            return false;
        }
    }
    for (std::size_t index = 0; index < streams.size(); ++index) {
        const auto error =
            omniglove_device_stream_start(device, streams[index].kind);
        if (error != OMNIGLOVE_STREAM_ERROR_NONE) {
            summary.fail(scope, std::string("start stream=") +
                                    StreamName(streams[index].kind) + " " +
                                    StreamErrorName(error));
            for (std::size_t cleanup = 0; cleanup < streams.size(); ++cleanup)
                if (started[cleanup])
                    omniglove_device_stream_stop(device, streams[cleanup].kind);
            return false;
        }
        started[index] = true;
    }

    const auto stress_started = Clock::now();
    const auto deadline =
        stress_started + std::chrono::seconds{duration_seconds};
    bool receive_ok = true;
    std::string receive_error;
    while (Clock::now() < deadline) {
        const auto remaining_ms =
            std::chrono::duration_cast<std::chrono::milliseconds>(deadline -
                                                                  Clock::now())
                .count();
        const std::uint32_t timeout_ms =
            static_cast<std::uint32_t>(std::max<std::int64_t>(
                1, std::min<std::int64_t>(options.receive_timeout_ms,
                                          remaining_ms + 1)));
        std::vector<std::uint8_t> datagram;
        if (!receiver.receive(timeout_ms, datagram, receive_error)) {
            if (Clock::now() >= deadline) break;
            receive_ok = false;
            break;
        }
        const std::uint64_t received_ns = MonotonicNowNs();
        std::uint32_t kind = 0;
        if (!DatagramStreamKind(datagram, kind, receive_error)) {
            receive_ok = false;
            break;
        }
        const auto found =
            std::find_if(streams.begin(), streams.end(),
                         [kind](const StressStreamState& stream) {
                             return stream.kind == kind;
                         });
        if (found == streams.end()) {
            receive_error = "unexpected-stream-kind";
            receive_ok = false;
            break;
        }
        if (!ValidateDatagram(datagram, kind, hand, uid, generation,
                              received_ns, found->wire, receive_error)) {
            receive_ok = false;
            break;
        }
        ++found->received_samples;
        found->received_bytes += datagram.size();
    }
    const double stress_elapsed_seconds =
        std::chrono::duration<double>(Clock::now() - stress_started).count();

    std::vector<bool> status_ok(streams.size(), false);
    for (std::size_t index = 0; index < streams.size(); ++index) {
        streams[index].running.struct_size = sizeof(streams[index].running);
        const auto error = omniglove_device_stream_status(
            device, streams[index].kind, &streams[index].running);
        status_ok[index] = error == OMNIGLOVE_STREAM_ERROR_NONE;
        if (status_ok[index])
            PrintStreamStatus("STRESS_STATUS", streams[index].kind,
                              streams[index].running);
    }

    std::vector<bool> lifecycle_ok(streams.size(), false);
    for (std::size_t reverse = streams.size(); reverse != 0; --reverse) {
        const std::size_t index = reverse - 1;
        const auto stopped_once =
            omniglove_device_stream_stop(device, streams[index].kind);
        const auto stopped_twice =
            omniglove_device_stream_stop(device, streams[index].kind);
        omniglove_stream_status_t stopped{};
        stopped.struct_size = sizeof(stopped);
        const auto stopped_status = omniglove_device_stream_status(
            device, streams[index].kind, &stopped);
        lifecycle_ok[index] = stopped_once == OMNIGLOVE_STREAM_ERROR_NONE &&
                              stopped_twice == OMNIGLOVE_STREAM_ERROR_NONE &&
                              stopped_status == OMNIGLOVE_STREAM_ERROR_NONE &&
                              stopped.state == OMNIGLOVE_STREAM_STOPPED;
    }

    bool passed = receive_ok;
    if (!receive_ok)
        summary.fail(scope,
                     std::string("UDP receive/validation: ") + receive_error);
    for (std::size_t index = 0; index < streams.size(); ++index) {
        const auto& stream = streams[index];
        const auto& status = stream.running;
        const std::uint64_t loss_frames = LossFrames(stream.wire);
        const bool stream_ok =
            status_ok[index] && lifecycle_ok[index] &&
            stream.received_samples >= 2 &&
            status.state == OMNIGLOVE_STREAM_RUNNING &&
            status.source_samples >= stream.received_samples &&
            status.source_errors == 0 && status.source_no_data == 0 &&
            status.source_timeouts == 0 && status.invalid_samples == 0 &&
            status.dropped_full == 0 &&
            status.published >= stream.received_samples &&
            status.publish_failures == 0 && loss_frames == 0;
        std::cout << "STRESS_CHECK stream=" << StreamName(stream.kind)
                  << " status_ok=" << status_ok[index]
                  << " lifecycle_ok=" << lifecycle_ok[index]
                  << " samples=" << stream.received_samples
                  << " bytes=" << stream.received_bytes
                  << " loss_frames=" << loss_frames << " loss_rate_pct="
                  << LossRatePercent(stream.received_samples, loss_frames)
                  << " source_loss_frames=" << stream.wire.source_loss_frames
                  << " source_loss_rate_pct="
                  << LossComponentRatePercent(stream.received_samples,
                                              loss_frames,
                                              stream.wire.source_loss_frames)
                  << " udp_loss_frames=" << stream.wire.udp_loss_frames
                  << " udp_loss_rate_pct="
                  << LossComponentRatePercent(stream.received_samples,
                                              loss_frames,
                                              stream.wire.udp_loss_frames)
                  << " reported_gap_frames=" << stream.wire.reported_gap_frames
                  << " timeouts=" << status.source_timeouts
                  << " source_errors=" << status.source_errors
                  << " invalid=" << status.invalid_samples
                  << " dropped_full=" << status.dropped_full
                  << " publish_failures=" << status.publish_failures << '\n';
        if (!stream_ok) {
            summary.fail(scope + "/" + StreamName(stream.kind),
                         "samples/statistics/lifecycle inconsistent");
            passed = false;
        }
    }

    std::cout << "CONCURRENT_STREAM_STRESS test=" << test
              << " elapsed_s=" << std::fixed << std::setprecision(3)
              << stress_elapsed_seconds << " requested_s=" << duration_seconds
              << '\n';
    double total_receive_hz = 0.0;
    double total_receive_kbytes_per_second = 0.0;
    std::uint64_t total_received_samples = 0;
    std::uint64_t total_received_bytes = 0;
    std::uint64_t total_loss_frames = 0;
    std::uint64_t total_source_loss_frames = 0;
    std::uint64_t total_udp_loss_frames = 0;
    std::uint64_t total_reported_gap_frames = 0;
    for (const auto& stream : streams) {
        const double receive_hz =
            StressReceiveRateHz(stream, stress_elapsed_seconds);
        const double receive_kbytes_per_second =
            StressReceiveKBytesPerSecond(stream, stress_elapsed_seconds);
        total_receive_hz += receive_hz;
        total_receive_kbytes_per_second += receive_kbytes_per_second;
        total_received_samples += stream.received_samples;
        total_received_bytes += stream.received_bytes;
        total_loss_frames += LossFrames(stream.wire);
        total_source_loss_frames += stream.wire.source_loss_frames;
        total_udp_loss_frames += stream.wire.udp_loss_frames;
        total_reported_gap_frames += stream.wire.reported_gap_frames;
        summary.stress_rates.push_back(StreamRateSummary{
            device_index,
            test,
            stream.kind,
            stream.received_samples,
            stream.received_bytes,
            LossFrames(stream.wire),
            stream.wire.source_loss_frames,
            stream.wire.udp_loss_frames,
            stream.wire.reported_gap_frames,
            LossRatePercent(stream.received_samples, LossFrames(stream.wire)),
            LossComponentRatePercent(stream.received_samples,
                                     LossFrames(stream.wire),
                                     stream.wire.source_loss_frames),
            LossComponentRatePercent(stream.received_samples,
                                     LossFrames(stream.wire),
                                     stream.wire.udp_loss_frames),
            receive_hz,
            receive_kbytes_per_second,
            static_cast<double>(stream.running.actual_source_rate_millihz) /
                1000.0,
            static_cast<double>(stream.running.actual_process_rate_millihz) /
                1000.0,
            static_cast<double>(stream.running.actual_publish_rate_millihz) /
                1000.0,
        });
    }
    const auto remote = std::find_if(
        streams.begin(), streams.end(), [](const StressStreamState& stream) {
            return stream.kind == OMNIGLOVE_STREAM_REMOTE_DATA;
        });
    if (remote != streams.end() && streams.size() == 2) {
        const auto primary =
            std::find_if(streams.begin(), streams.end(),
                         [](const StressStreamState& stream) {
                             return stream.kind != OMNIGLOVE_STREAM_REMOTE_DATA;
                         });
        constexpr double kMinimumPrimaryRateHz = 112.5;
        const double primary_rate_hz =
            StressReceiveRateHz(*primary, stress_elapsed_seconds);
        const bool isolation_ok = primary_rate_hz >= kMinimumPrimaryRateHz;
        std::cout << "REMOTE_ISOLATION_CHECK test=" << test
                  << " primary_stream=" << StreamName(primary->kind)
                  << " primary_receive_hz=" << primary_rate_hz
                  << " minimum_hz=" << kMinimumPrimaryRateHz
                  << " remote_receive_hz="
                  << StressReceiveRateHz(*remote, stress_elapsed_seconds)
                  << " passed=" << isolation_ok << '\n';
        if (!isolation_ok) {
            summary.fail(scope + "/isolation",
                         "primary stream fell below 90% of 125 Hz");
            passed = false;
        }
    }
    summary.stress_totals.push_back(StreamRateTotal{
        device_index, test, total_received_samples, total_received_bytes,
        total_loss_frames, total_source_loss_frames, total_udp_loss_frames,
        total_reported_gap_frames,
        LossRatePercent(total_received_samples, total_loss_frames),
        total_receive_hz, total_receive_kbytes_per_second, target_total_hz});
    if (passed) summary.pass(scope, "concurrent delivery verified");
    return passed;
}

void RunBlobWriteRoundTrip(omniglove_device_t* device,
                           const omniglove_calibration_blob_t& backup,
                           const Options& options, Summary& summary) {
    if (!options.allow_write) {
        summary.skip("CALIB_BLOB_WRITE", "disabled; pass --allow-write");
        return;
    }
    if (!BlobMeaningful(backup)) {
        summary.skip("CALIB_BLOB_WRITE",
                     "backup is zero/non-finite; refusing unsafe write");
        return;
    }
    omniglove_control_request_t write =
        Request(OMNIGLOVE_CONTROL_CALIBRATION_BLOB_WRITE);
    write.calibration_blob = backup;
    omniglove_control_result_t write_result{};
    if (!RunControl(device, write, options.control_timeout_ms, write_result,
                    summary))
        return;
    omniglove_control_result_t verify{};
    if (!RunControl(device, Request(OMNIGLOVE_CONTROL_CALIBRATION_BLOB_READ),
                    options.control_timeout_ms, verify, summary))
        return;
    const bool equal = EqualBlob(backup, verify.calibration_blob);
    if (equal)
        summary.pass("CALIB_BLOB_WRITE", "read-back is byte-exact");
    else
        summary.fail("CALIB_BLOB_WRITE", "read-back mismatch");
    if (!equal || options.restore_after_write) {
        omniglove_control_result_t restore{};
        if (RunControl(device, write, options.control_timeout_ms, restore,
                       summary))
            summary.pass("CALIB_BLOB_WRITE", "backup restore sent");
    }
}

void RunPhaseWriteCapture(omniglove_device_t* device, const Options& options,
                          Summary& summary) {
    if (!options.allow_write) {
        summary.skip("CALIB_PHASE_WRITE", "disabled; pass --allow-write");
        return;
    }
    omniglove_control_result_t write_result{};
    if (!RunControl(device, Request(OMNIGLOVE_CONTROL_CALIBRATION_PHASE_WRITE),
                    options.control_timeout_ms, write_result, summary))
        return;
    omniglove_control_result_t verify{};
    if (!RunControl(device, Request(OMNIGLOVE_CONTROL_CALIBRATION_PHASE_READ),
                    options.control_timeout_ms, verify, summary))
        return;
    if (ValidCapturedPhase(verify.calibration_phase))
        summary.pass("CALIB_PHASE_WRITE",
                     "current-frame phase capture read back as valid");
    else
        summary.fail("CALIB_PHASE_WRITE", "captured phase is invalid");
}

void PrintInitializationReport(const omniglove_init_report_t* report) {
    if (report == nullptr) return;
    const std::size_t message_size =
        omniglove_init_report_message(report, nullptr, 0);
    std::vector<char> message(message_size == 0 ? 1 : message_size);
    if (message_size != 0)
        omniglove_init_report_message(report, message.data(), message.size());
    std::cout << "INIT outcome=" << omniglove_init_report_outcome(report)
              << " candidates=" << omniglove_init_report_candidate_count(report)
              << " message=" << message.data() << '\n';
    for (std::size_t index = 0;
         index < omniglove_init_report_candidate_count(report); ++index) {
        omniglove_candidate_result_t candidate{};
        candidate.struct_size = sizeof(candidate);
        const auto error =
            omniglove_init_report_candidate(report, index, &candidate);
        std::cout << "CANDIDATE index=" << index
                  << " query=" << omniglove_error_name(error)
                  << " probe=" << candidate.probe_status
                  << " error=" << candidate.error
                  << " has_uid=" << candidate.has_device_uid
                  << " uid=" << candidate.device_uid
                  << " selected=" << candidate.selector_matched
                  << " initialized=" << candidate.initialized << '\n';
    }
}

bool RunDevice(omniglove_device_t* device, std::size_t index,
               const Options& options, Summary& summary) {
    const std::uint64_t uid = omniglove_device_uid(device);
    const omniglove_hand_t hand = omniglove_device_hand(device);
    const std::string token = PublicString(device, false);
    const std::string product = PublicString(device, true);
    std::cout << "DEVICE index=" << index << " product=" << product
              << " uid=" << uid << " token=" << token
              << " hand=" << HandName(hand) << " nominal_hz="
              << omniglove_device_nominal_source_rate_hz(device) << '\n';

    omniglove_control_result_t pose_info{};
    const bool pose_ok = RunControl(
        device, Request(OMNIGLOVE_CONTROL_POSE_INFO, options.pose_info_type),
        options.control_timeout_ms, pose_info, summary);
    if (pose_ok) {
        std::cout << "POSE_INFO nodes=" << pose_info.node_count << " hand="
                  << HandName(static_cast<omniglove_hand_t>(pose_info.hand))
                  << " nominal_hz=" << pose_info.nominal_source_rate_hz
                  << " calibration_state=" << pose_info.calibration_state
                  << " max_distance_mm=" << pose_info.max_distance_mm
                  << " capabilities=0x" << std::hex
                  << pose_info.capability_flags << std::dec << '\n';
    }

    const std::uint64_t generation =
        pose_ok ? pose_info.connection_generation : 0;
    const bool reserved_ok = RunReservedStreamGate(device, options, summary);
    if (options.three_stream_stress_seconds != 0) {
        const bool stress_ok = RunConcurrentStreamStress(
            device, index, hand, uid, generation, options,
            options.three_stream_stress_seconds, "three-stream",
            {OMNIGLOVE_STREAM_POSE_DATA, OMNIGLOVE_STREAM_POST_DATA,
             OMNIGLOVE_STREAM_REMOTE_DATA},
            375.0, summary);
        return pose_ok && reserved_ok && stress_ok;
    }
    if (options.two_stream_stress_seconds != 0) {
        std::vector<std::uint32_t> kinds;
        if (options.stress_pair == "pose-post") {
            kinds = {OMNIGLOVE_STREAM_POSE_DATA, OMNIGLOVE_STREAM_POST_DATA};
        } else if (options.stress_pair == "remote-pose") {
            kinds = {OMNIGLOVE_STREAM_REMOTE_DATA, OMNIGLOVE_STREAM_POSE_DATA};
        } else {
            kinds = {OMNIGLOVE_STREAM_REMOTE_DATA, OMNIGLOVE_STREAM_POST_DATA};
        }
        const bool remote_pair =
            options.stress_pair.compare(0, 7, "remote-") == 0;
        const bool stress_ok = RunConcurrentStreamStress(
            device, index, hand, uid, generation, options,
            options.two_stream_stress_seconds, options.stress_pair, kinds,
            remote_pair ? 250.0 : 125.0, summary);
        return pose_ok && reserved_ok && stress_ok;
    }

    omniglove_control_result_t blob{};
    const bool blob_ok =
        RunControl(device, Request(OMNIGLOVE_CONTROL_CALIBRATION_BLOB_READ),
                   options.control_timeout_ms, blob, summary);
    if (blob_ok) {
        std::cout << "CALIB_BLOB dist_valid="
                  << blob.calibration_blob.dist_valid << " fingerprint=0x"
                  << std::hex << BlobFingerprint(blob.calibration_blob)
                  << std::dec << '\n';
    }

    omniglove_control_result_t phase{};
    const bool phase_ok =
        RunControl(device, Request(OMNIGLOVE_CONTROL_CALIBRATION_PHASE_READ),
                   options.control_timeout_ms, phase, summary);
    if (phase_ok) {
        std::cout << "CALIB_PHASE valid=" << phase.calibration_phase.valid
                  << " hand="
                  << HandName(static_cast<omniglove_hand_t>(
                         phase.calibration_phase.hand))
                  << " xyz=" << phase.calibration_phase.phase_x << ','
                  << phase.calibration_phase.phase_y << ','
                  << phase.calibration_phase.phase_z << '\n';
    }

    if (blob_ok)
        RunBlobWriteRoundTrip(device, blob.calibration_blob, options, summary);
    else
        summary.skip("CALIB_BLOB_WRITE", "backup read failed");
    RunPhaseWriteCapture(device, options, summary);

    bool bone_ok = true;
    if (options.ignore_bone) {
        summary.skip("BONE_READ/BONE_WRITE", "disabled by --ignore-bone");
    } else {
        bone_ok = RunBoneControl(device, options, summary);
    }

    const bool direct_ok =
        RunDirectPoseStream(device, hand, uid, generation, options, summary);
    if (options.direct_only)
        return pose_ok && reserved_ok && blob_ok && phase_ok && bone_ok &&
               direct_ok;
    RunStream(device, OMNIGLOVE_STREAM_POSE_DATA, hand, uid, generation,
              options, summary);
    RunStream(device, OMNIGLOVE_STREAM_POST_DATA, hand, uid, generation,
              options, summary);
    const bool remote_ok = RunStream(device, OMNIGLOVE_STREAM_REMOTE_DATA, hand,
                                     uid, generation, options, summary);
    return pose_ok && reserved_ok && blob_ok && phase_ok && remote_ok &&
           bone_ok;
}

}  // namespace

int main(int argc, char** argv) {
    Options options;
    if (!ParseOptions(argc, argv, options)) {
        if (argc == 2 &&
            (std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h"))
            return 0;
        return 2;
    }
    if (options.json_self_test) return RunJsonValidatorSelfTest() ? 0 : 1;
    std::cout << "ABI version=" << ((omniglove_abi_version() >> 16U) & 0xFFU)
              << '.' << ((omniglove_abi_version() >> 8U) & 0xFFU) << '.'
              << (omniglove_abi_version() & 0xFFU)
              << " write_enabled=" << options.allow_write << '\n';

    omniglove_session_t* session = nullptr;
    omniglove_init_report_t* report = nullptr;
    const omniglove_error_t initialized =
        omniglove_initialize(nullptr, &session, &report);
    PrintInitializationReport(report);
    omniglove_init_report_destroy(report);
    if (session == nullptr || initialized != OMNIGLOVE_ERROR_NONE) {
        std::cerr << "initialization failed: "
                  << omniglove_error_name(initialized) << '\n';
        omniglove_session_destroy(session);
        return 1;
    }

    Summary summary;
    const std::size_t count = omniglove_session_device_count(session);
    if (count == 0) summary.fail("initialize", "no initialized device");
    for (std::size_t index = 0; index < count; ++index) {
        omniglove_device_t* device =
            omniglove_session_device_at(session, index);
        if (device == nullptr)
            summary.fail("device", "null borrowed handle");
        else
            RunDevice(device, index, options, summary);
    }

    const omniglove_error_t stopped_once = omniglove_session_stop(session);
    const omniglove_error_t stopped_twice = omniglove_session_stop(session);
    if (stopped_once == OMNIGLOVE_ERROR_NONE &&
        stopped_twice == OMNIGLOVE_ERROR_NONE)
        summary.pass("session", "idempotent stop verified");
    else
        summary.fail("session",
                     std::string("stop1=") +
                         omniglove_error_name(stopped_once) +
                         " stop2=" + omniglove_error_name(stopped_twice));
    omniglove_session_destroy(session);

    std::cout << "SUMMARY pass=" << summary.passed << " fail=" << summary.failed
              << " skip=" << summary.skipped << '\n';
    for (const auto& rate : summary.stress_rates) {
        std::cout << "FINAL_STREAM_RATE device=" << rate.device_index
                  << " test=" << rate.test
                  << " stream=" << StreamName(rate.kind)
                  << " samples=" << rate.samples
                  << " bytes=" << rate.received_bytes
                  << " loss_frames=" << rate.loss_frames
                  << " loss_rate_pct=" << rate.loss_rate_percent
                  << " source_loss_frames=" << rate.source_loss_frames
                  << " source_loss_rate_pct=" << rate.source_loss_rate_percent
                  << " udp_loss_frames=" << rate.udp_loss_frames
                  << " udp_loss_rate_pct=" << rate.udp_loss_rate_percent
                  << " reported_gap_frames=" << rate.reported_gap_frames
                  << " receive_hz=" << rate.receive_hz
                  << " receive_kBps=" << rate.receive_kbytes_per_second
                  << " receive_kbps=" << rate.receive_kbytes_per_second * 8.0
                  << " source_hz=" << rate.source_hz
                  << " process_hz=" << rate.process_hz
                  << " publish_hz=" << rate.publish_hz << '\n';
    }
    for (const auto& total : summary.stress_totals) {
        std::cout << "FINAL_STREAM_RATE_SUM device=" << total.device_index
                  << " test=" << total.test
                  << " samples=" << total.received_samples
                  << " bytes=" << total.received_bytes
                  << " loss_frames=" << total.loss_frames
                  << " loss_rate_pct=" << total.loss_rate_percent
                  << " source_loss_frames=" << total.source_loss_frames
                  << " source_loss_rate_pct="
                  << LossComponentRatePercent(total.received_samples,
                                              total.loss_frames,
                                              total.source_loss_frames)
                  << " udp_loss_frames=" << total.udp_loss_frames
                  << " udp_loss_rate_pct="
                  << LossComponentRatePercent(total.received_samples,
                                              total.loss_frames,
                                              total.udp_loss_frames)
                  << " reported_gap_frames=" << total.reported_gap_frames
                  << " total_receive_hz=" << total.receive_hz
                  << " total_receive_kBps=" << total.receive_kbytes_per_second
                  << " total_receive_kbps="
                  << total.receive_kbytes_per_second * 8.0
                  << " target_hz=" << total.target_hz
                  << " delta_hz=" << total.receive_hz - total.target_hz << '\n';
    }
    return summary.failed == 0 ? 0 : 1;
}
