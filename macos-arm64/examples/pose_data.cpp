#include <algorithm>
#include <array>
#include <cerrno>
#include <chrono>
#include <condition_variable>
#include <csignal>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

#include "omniglove/omniglove.h"

namespace {

using Clock = std::chrono::steady_clock;

volatile std::sig_atomic_t g_stop_requested = 0;

void HandleSignal(int) { g_stop_requested = 1; }

struct Options {
    std::size_t device_index{0};
    std::uint32_t source_interval_ms{10};
    std::uint32_t source_timeout_ms{1000};
    std::uint32_t refresh_ms{100};
    std::uint32_t queue_capacity{64};
    std::uint64_t frame_limit{0};
    std::size_t tactile_preview_bytes{16};
    std::uint32_t pose_components{OMNIGLOVE_POSE_COMPONENT_ALL};
    bool clear_screen{true};
    bool show_imu{true};
    bool emf_only{false};
    bool tactile_bytes_explicit{false};
    bool pose_components_explicit{false};
    bool layout_self_test{false};
};

constexpr std::size_t kPoseTactileCapacity = 800;
constexpr std::uint8_t kPoseImuHasSample = 1U << 0U;
constexpr std::uint8_t kPoseImuYawLocked = 1U << 1U;
struct ViewerSample {
    std::uint32_t hand{OMNIGLOVE_HAND_UNKNOWN};
    std::uint32_t flags{0};
    std::uint32_t layout_version{0};
    std::uint32_t device_sequence{0};
    std::uint64_t device_id{0};
    std::uint64_t connection_generation{0};
    std::uint64_t source_sequence{0};
    std::uint64_t sample_monotonic_ns{0};
    std::uint64_t gap_count{0};
    std::uint32_t mapped{0};
    std::uint32_t device_tick_ms{0};
    std::uint32_t components{0};
    std::array<omniglove_pose_node_t, 6> nodes{};
    omniglove_pose_imu_t back_of_hand_imu{};
    std::array<std::uint8_t, kPoseTactileCapacity> tactile{};
    std::uint32_t tactile_count{0};
    std::uint32_t tactile_mapped{0};
};

constexpr std::array<const char*, 6> kPoseParts{
    {"Thumb", "Index", "Middle", "Ring", "Pinky", "Wrist"}};

struct CallbackState {
    omniglove_hand_t expected_hand{OMNIGLOVE_HAND_UNKNOWN};
    std::uint64_t expected_uid{0};
    std::uint32_t expected_components{OMNIGLOVE_POSE_COMPONENT_ALL};
    std::mutex mutex;
    std::condition_variable ready;
    ViewerSample latest{};
    std::uint64_t received{0};
    std::uint64_t invalid_layout{0};
    std::uint64_t version{0};
    bool have_sample{false};
};

void Usage(const char* program) {
    std::cout
        << "Usage: " << program << " [options]\n\n"
        << "Continuously display decoded POSE_DATA through the public C API.\n"
        << "POSE nodes use the stable named DIRECT layout.\n\n"
        << "Options:\n"
        << "  --device-index N         Discovered device index (default 0)\n"
        << "  --source-interval-ms N   POSE_DATA source interval (default 10)\n"
        << "  --source-timeout-ms N    Source timeout (default 1000)\n"
        << "  --refresh-ms N           CLI refresh interval (default 100)\n"
        << "  --queue-capacity N       Subscription queue capacity (default "
           "64)\n"
        << "  --frames N               Display N snapshots then exit; 0 is "
           "endless\n"
        << "  --tactile-bytes N        Tactile bytes to show, 0..800 (default "
           "all in tactile-only, 16 otherwise)\n"
        << "  --no-clear               Append snapshots instead of clearing "
           "screen\n"
        << "  --emf-only               Show only compact metadata and EMF "
           "poses; request pose-only data\n"
        << "  --pose-components MODE   Request all, pose, or tactile "
           "(default all)\n"
        << "  --no-imu                 Hide the seven IMU rows\n"
        << "  --layout-self-test       Validate the DIRECT layout without "
           "hardware\n"
        << "  --help                    Show this text\n\n"
        << "Press Ctrl-C to stop. Use --no-clear when redirecting output to a "
           "log.\n";
}

bool ParseUnsigned(const char* text, std::uint64_t maximum,
                   std::uint64_t& output) noexcept {
    if (text == nullptr || *text == '\0' || *text == '-') return false;
    errno = 0;
    char* end = nullptr;
    const auto value = std::strtoull(text, &end, 10);
    if (errno != 0 || end == text || *end != '\0' || value > maximum)
        return false;
    output = static_cast<std::uint64_t>(value);
    return true;
}

bool ParseOptions(int argc, char** argv, Options& options) {
    for (int index = 1; index < argc; ++index) {
        const std::string argument = argv[index];
        if (argument == "--help" || argument == "-h") {
            Usage(argv[0]);
            std::exit(EXIT_SUCCESS);
        }
        if (argument == "--no-clear") {
            options.clear_screen = false;
            continue;
        }
        if (argument == "--no-imu") {
            options.show_imu = false;
            continue;
        }
        if (argument == "--layout-self-test") {
            options.layout_self_test = true;
            continue;
        }
        if (argument == "--emf-only") {
            options.emf_only = true;
            continue;
        }
        if (argument == "--pose-components" && index + 1 < argc) {
            const std::string value = argv[++index];
            options.pose_components_explicit = true;
            if (value == "all") {
                options.pose_components = OMNIGLOVE_POSE_COMPONENT_ALL;
            } else if (value == "pose") {
                options.pose_components = OMNIGLOVE_POSE_COMPONENT_POSE;
            } else if (value == "tactile") {
                options.pose_components = OMNIGLOVE_POSE_COMPONENT_TACTILE;
            } else {
                return false;
            }
            continue;
        }
        if (index + 1 >= argc) return false;
        std::uint64_t value = 0;
        if (!ParseUnsigned(argv[++index],
                           std::numeric_limits<std::uint32_t>::max(), value))
            return false;
        if (argument == "--device-index") {
            options.device_index = static_cast<std::size_t>(value);
        } else if (argument == "--source-interval-ms") {
            options.source_interval_ms = static_cast<std::uint32_t>(value);
        } else if (argument == "--source-timeout-ms") {
            options.source_timeout_ms = static_cast<std::uint32_t>(value);
        } else if (argument == "--refresh-ms") {
            options.refresh_ms = static_cast<std::uint32_t>(value);
        } else if (argument == "--queue-capacity") {
            options.queue_capacity = static_cast<std::uint32_t>(value);
        } else if (argument == "--frames") {
            options.frame_limit = value;
        } else if (argument == "--tactile-bytes") {
            options.tactile_preview_bytes = static_cast<std::size_t>(value);
            options.tactile_bytes_explicit = true;
        } else {
            return false;
        }
    }
    if (options.emf_only) {
        if (options.pose_components_explicit &&
            options.pose_components != OMNIGLOVE_POSE_COMPONENT_POSE) {
            return false;
        }
        options.pose_components = OMNIGLOVE_POSE_COMPONENT_POSE;
    }
    if (!options.tactile_bytes_explicit &&
        options.pose_components == OMNIGLOVE_POSE_COMPONENT_TACTILE) {
        options.tactile_preview_bytes = kPoseTactileCapacity;
    }
    return options.source_interval_ms != 0 && options.source_timeout_ms != 0 &&
           options.refresh_ms != 0 && options.queue_capacity != 0 &&
           options.tactile_preview_bytes <= kPoseTactileCapacity;
}

const char* HandName(omniglove_hand_t hand) noexcept {
    switch (hand) {
        case OMNIGLOVE_HAND_LEFT:
            return "left";
        case OMNIGLOVE_HAND_RIGHT:
            return "right";
        case OMNIGLOVE_HAND_UNKNOWN:
            break;
    }
    return "unknown";
}

const char* StreamErrorName(omniglove_stream_error_t error) noexcept {
    switch (error) {
        case OMNIGLOVE_STREAM_ERROR_NONE:
            return "none";
        case OMNIGLOVE_STREAM_ERROR_INVALID_ARGUMENT:
            return "invalid_argument";
        case OMNIGLOVE_STREAM_ERROR_NOT_CONFIGURED:
            return "not_configured";
        case OMNIGLOVE_STREAM_ERROR_BUSY:
            return "busy";
        case OMNIGLOVE_STREAM_ERROR_SOURCE_START_FAILED:
            return "source_start_failed";
        case OMNIGLOVE_STREAM_ERROR_PUBLISHER_OPEN_FAILED:
            return "publisher_open_failed";
        case OMNIGLOVE_STREAM_ERROR_SOURCE_CONFIGURATION_FAILED:
            return "source_configuration_failed";
        case OMNIGLOVE_STREAM_ERROR_PUBLISH_FAILED:
            return "publish_failed";
        case OMNIGLOVE_STREAM_ERROR_WORKER_START_FAILED:
            return "worker_start_failed";
        case OMNIGLOVE_STREAM_ERROR_TOO_MANY_SUBSCRIBERS:
            return "too_many_subscribers";
        case OMNIGLOVE_STREAM_ERROR_UNSUPPORTED:
            return "unsupported";
    }
    return "unknown";
}

std::string PublicString(const omniglove_device_t* device, bool product) {
    const std::size_t required =
        product ? omniglove_device_product_key(device, nullptr, 0)
                : omniglove_device_opaque_token(device, nullptr, 0);
    if (required == 0) return {};
    std::vector<char> value(required);
    const std::size_t copied =
        product ? omniglove_device_product_key(device, value.data(), required)
                : omniglove_device_opaque_token(device, value.data(), required);
    return copied == required ? std::string{value.data()} : std::string{};
}

void PrintDeviceList(omniglove_session_t* session) {
    const auto count = omniglove_session_device_count(session);
    std::cout << "Discovered devices: " << count << '\n';
    for (std::size_t index = 0; index < count; ++index) {
        auto* device = omniglove_session_device_at(session, index);
        if (device == nullptr) continue;
        std::cout << "  [" << index
                  << "] hand=" << HandName(omniglove_device_hand(device))
                  << " uid=" << omniglove_device_uid(device) << " rate_hz="
                  << omniglove_device_nominal_source_rate_hz(device)
                  << " product=" << PublicString(device, true)
                  << " token=" << PublicString(device, false) << '\n';
    }
}

bool CopyTactile(const omniglove_tactile_data_t& tactile,
                 ViewerSample& output) {
    output.tactile_mapped = tactile.mapped;
    if (tactile.mapped == 0) {
        if (tactile.unmapped_size > output.tactile.size() ||
            (tactile.unmapped_size != 0 && tactile.unmapped_data == nullptr))
            return false;
        if (tactile.unmapped_size != 0)
            std::copy_n(tactile.unmapped_data, tactile.unmapped_size,
                        output.tactile.begin());
        output.tactile_count = tactile.unmapped_size;
        return true;
    }
    const std::array<const omniglove_tactile_region_t*, 15> regions{
        {&tactile.thumb.tip, &tactile.thumb.pad, &tactile.index.tip,
         &tactile.index.pad, &tactile.index.root, &tactile.middle.tip,
         &tactile.middle.pad, &tactile.middle.root, &tactile.ring.tip,
         &tactile.ring.pad, &tactile.ring.root, &tactile.pinky.tip,
         &tactile.pinky.middle, &tactile.pinky.root, &tactile.palm_surface}};
    std::size_t offset = 0;
    for (const auto* region : regions) {
        if (region->count > output.tactile.size() - offset ||
            (region->count != 0 && region->data == nullptr))
            return false;
        if (region->count != 0)
            std::copy_n(region->data, region->count,
                        output.tactile.begin() + offset);
        offset += region->count;
    }
    if (offset != tactile.count || offset != OMNIGLOVE_TACTILE_POINT_COUNT)
        return false;
    output.tactile_count = static_cast<std::uint32_t>(offset);
    return true;
}

bool ValidatePoseNodes(const std::array<omniglove_pose_node_t, 6>& nodes,
                       const omniglove_pose_imu_t& back_of_hand) {
    for (const auto& node : nodes) {
        if (node.emf.confidence_milli > 1000 || node.emf.valid > 1 ||
            node.imu.reserved != 0)
            return false;
    }
    return back_of_hand.reserved == 0;
}

void OMNIGLOVE_CALL PoseCallback(const omniglove_stream_sample_t* sample,
                                 void* user_data) {
    auto* state = static_cast<CallbackState*>(user_data);
    if (state == nullptr) return;
    ViewerSample next{};
    bool valid = sample != nullptr && sample->struct_size == sizeof(*sample) &&
                 sample->kind == OMNIGLOVE_STREAM_POSE_DATA &&
                 sample->hand == state->expected_hand &&
                 sample->hand <= OMNIGLOVE_HAND_RIGHT &&
                 sample->layout_version == OMNIGLOVE_STREAM_LAYOUT_VERSION &&
                 sample->data.posedata != nullptr &&
                 sample->connection_generation != 0 &&
                 sample->source_sequence != 0 &&
                 sample->sample_monotonic_ns != 0;
    if (valid && state->expected_uid != 0) {
        valid = sample->device_id == state->expected_uid &&
                (sample->flags &
                 OMNIGLOVE_STREAM_SAMPLE_DEVICE_ID_OPAQUE_TOKEN_HASH) == 0;
    } else if (valid) {
        valid = sample->device_id != 0 &&
                (sample->flags &
                 OMNIGLOVE_STREAM_SAMPLE_DEVICE_ID_OPAQUE_TOKEN_HASH) != 0;
    }
    if (valid) {
        const auto& pose = *sample->data.posedata;
        next.hand = sample->hand;
        next.flags = sample->flags;
        next.layout_version = sample->layout_version;
        next.device_sequence = sample->device_sequence;
        next.device_id = sample->device_id;
        next.connection_generation = sample->connection_generation;
        next.source_sequence = sample->source_sequence;
        next.sample_monotonic_ns = sample->sample_monotonic_ns;
        next.gap_count = sample->gap_count;
        valid = pose.mapped <= 1 &&
                pose.components == state->expected_components &&
                (pose.unmapped_size == 0 || pose.unmapped_data != nullptr);
        next.mapped = pose.mapped;
        next.device_tick_ms = pose.device_tick_ms;
        next.components = pose.components;
        if (pose.mapped != 0) {
            if ((pose.components & OMNIGLOVE_POSE_COMPONENT_POSE) != 0) {
                next.nodes = {pose.thumb, pose.index, pose.middle,
                              pose.ring,  pose.pinky, pose.wrist};
                next.back_of_hand_imu = pose.back_of_hand_imu;
                valid = valid &&
                        ValidatePoseNodes(next.nodes, next.back_of_hand_imu);
            }
            if ((pose.components & OMNIGLOVE_POSE_COMPONENT_TACTILE) != 0) {
                valid = valid && CopyTactile(pose.tactile, next);
            }
        }
    }
    std::lock_guard<std::mutex> lock{state->mutex};
    ++state->received;
    if (!valid) {
        ++state->invalid_layout;
    } else {
        state->latest = next;
        state->have_sample = true;
        ++state->version;
    }
    state->ready.notify_one();
}

bool RunLayoutSelfTest() {
    std::uint8_t tactile_byte = 7;
    omniglove_pose_data_t pose{};
    pose.mapped = 1;
    pose.components = OMNIGLOVE_POSE_COMPONENT_ALL;
    pose.device_tick_ms = 42;
    pose.thumb.emf.position_mm[0] = 123;
    pose.thumb.emf.reserved = 0xA5;
    pose.index.emf.position_mm[0] = 456;
    pose.tactile.mapped = 0;
    pose.tactile.unmapped_data = &tactile_byte;
    pose.tactile.unmapped_size = 1;
    omniglove_stream_sample_t sample{};
    sample.struct_size = sizeof(sample);
    sample.kind = OMNIGLOVE_STREAM_POSE_DATA;
    sample.hand = OMNIGLOVE_HAND_LEFT;
    sample.layout_version = OMNIGLOVE_STREAM_LAYOUT_VERSION;
    sample.device_id = 9;
    sample.connection_generation = 3;
    sample.source_sequence = 1;
    sample.sample_monotonic_ns = 10;
    sample.data.posedata = &pose;
    CallbackState callback;
    callback.expected_hand = OMNIGLOVE_HAND_LEFT;
    callback.expected_uid = 9;
    PoseCallback(&sample, &callback);
    bool valid = callback.have_sample && callback.received == 1 &&
                 callback.invalid_layout == 0 &&
                 callback.latest.components == OMNIGLOVE_POSE_COMPONENT_ALL &&
                 callback.latest.nodes[0].emf.position_mm[0] == 123 &&
                 callback.latest.nodes[0].emf.reserved == 0xA5 &&
                 callback.latest.nodes[1].emf.position_mm[0] == 456 &&
                 callback.latest.tactile_count == 1 &&
                 callback.latest.tactile[0] == tactile_byte;

    pose.components = OMNIGLOVE_POSE_COMPONENT_POSE;
    CallbackState pose_only;
    pose_only.expected_hand = OMNIGLOVE_HAND_LEFT;
    pose_only.expected_uid = 9;
    pose_only.expected_components = OMNIGLOVE_POSE_COMPONENT_POSE;
    PoseCallback(&sample, &pose_only);
    valid = valid && pose_only.have_sample && pose_only.invalid_layout == 0 &&
            pose_only.latest.nodes[0].emf.position_mm[0] == 123 &&
            pose_only.latest.nodes[0].emf.reserved == 0xA5 &&
            pose_only.latest.tactile_count == 0;

    pose.components = OMNIGLOVE_POSE_COMPONENT_TACTILE;
    CallbackState tactile_only;
    tactile_only.expected_hand = OMNIGLOVE_HAND_LEFT;
    tactile_only.expected_uid = 9;
    tactile_only.expected_components = OMNIGLOVE_POSE_COMPONENT_TACTILE;
    PoseCallback(&sample, &tactile_only);
    valid = valid && tactile_only.have_sample &&
            tactile_only.invalid_layout == 0 &&
            tactile_only.latest.nodes[0].emf.position_mm[0] == 0 &&
            tactile_only.latest.tactile_count == 1 &&
            tactile_only.latest.tactile[0] == tactile_byte;
    if (!valid) std::cerr << "DIRECT layout self-test failed" << std::endl;
    return valid;
}

double Degrees(std::int16_t centidegrees) noexcept {
    return static_cast<double>(centidegrees) * 0.01;
}

void PrintEmf(const ViewerSample& sample) {
    std::cout << "\nEMF poses (position: right-handed TX frame; orientation: "
                 "RX/body to TX, intrinsic ZYX)\n"
              << "  Finger  Node Valid Conf      X_mm    Y_mm    Z_mm"
                 "    Yaw_deg Pitch_deg  Roll_deg Reserve\n";
    for (std::size_t node = 0; node < kPoseParts.size(); ++node) {
        std::cout << "  " << std::left << std::setw(7) << kPoseParts[node]
                  << std::right << std::setw(4) << node << std::setw(6)
                  << static_cast<unsigned>(sample.nodes[node].emf.valid) << ' '
                  << std::fixed << std::setprecision(3) << std::setw(5)
                  << static_cast<double>(
                         sample.nodes[node].emf.confidence_milli) /
                         1000.0
                  << std::setw(9) << sample.nodes[node].emf.position_mm[0]
                  << std::setw(8) << sample.nodes[node].emf.position_mm[1]
                  << std::setw(8) << sample.nodes[node].emf.position_mm[2]
                  << std::setprecision(2) << std::setw(11)
                  << Degrees(sample.nodes[node].emf.yaw_pitch_roll_cdeg[0])
                  << std::setw(10)
                  << Degrees(sample.nodes[node].emf.yaw_pitch_roll_cdeg[1])
                  << std::setw(10)
                  << Degrees(sample.nodes[node].emf.yaw_pitch_roll_cdeg[2])
                  << "     0x" << std::hex << std::setw(2) << std::setfill('0')
                  << static_cast<unsigned>(sample.nodes[node].emf.reserved)
                  << std::dec << std::setfill(' ') << '\n';
    }
}

void PrintImu(const ViewerSample& sample) {
    std::cout << "\nIMU poses (roll/pitch/yaw, degrees)\n"
              << "  Sensor       Node HasSample YawLocked   Roll    Pitch"
                 "      Yaw Flags\n";
    for (std::size_t node = 0; node < kPoseParts.size(); ++node) {
        const auto& imu = sample.nodes[node].imu;
        std::cout << "  " << std::left << std::setw(12) << kPoseParts[node]
                  << std::right << std::setw(4) << node << std::setw(10)
                  << ((imu.flags & kPoseImuHasSample) != 0) << std::setw(10)
                  << ((imu.flags & kPoseImuYawLocked) != 0) << std::fixed
                  << std::setprecision(2) << std::setw(9)
                  << Degrees(imu.roll_pitch_yaw_cdeg[0]) << std::setw(9)
                  << Degrees(imu.roll_pitch_yaw_cdeg[1]) << std::setw(9)
                  << Degrees(imu.roll_pitch_yaw_cdeg[2]) << " 0x" << std::hex
                  << std::setw(2) << std::setfill('0')
                  << static_cast<unsigned>(imu.flags) << std::setfill(' ')
                  << std::dec << '\n';
    }
    const auto& back = sample.back_of_hand_imu;
    std::cout << "  " << std::left << std::setw(12) << "BackOfHand"
              << std::right << std::setw(4) << 6 << std::setw(10)
              << ((back.flags & kPoseImuHasSample) != 0) << std::setw(10)
              << ((back.flags & kPoseImuYawLocked) != 0) << std::fixed
              << std::setprecision(2) << std::setw(9)
              << Degrees(back.roll_pitch_yaw_cdeg[0]) << std::setw(9)
              << Degrees(back.roll_pitch_yaw_cdeg[1]) << std::setw(9)
              << Degrees(back.roll_pitch_yaw_cdeg[2]) << " 0x" << std::hex
              << std::setw(2) << std::setfill('0')
              << static_cast<unsigned>(back.flags) << std::setfill(' ')
              << std::dec << '\n';
}

void PrintTactilePreview(const ViewerSample& sample, std::size_t maximum) {
    const std::size_t count =
        std::min<std::size_t>(sample.tactile_count, maximum);
    std::cout << "\nTactile bytes: count=" << sample.tactile_count
              << " preview=" << count;
    for (std::size_t index = 0; index < count; ++index) {
        std::cout << ' ' << std::hex << std::setw(2) << std::setfill('0')
                  << static_cast<unsigned>(sample.tactile[index]);
    }
    std::cout << std::setfill(' ') << std::dec << '\n';
}

void PrintTactileTable(const ViewerSample& sample, std::size_t maximum) {
    constexpr std::size_t kColumns = 32;
    const std::size_t count =
        std::min<std::size_t>(sample.tactile_count, maximum);
    std::cout << "\nTactile uint8 values: count=" << sample.tactile_count
              << " shown=" << count
              << " (flattened tactile index -> decimal value)\n";
    for (std::size_t begin = 0; begin < count; begin += kColumns) {
        const auto end = std::min(begin + kColumns, count);
        std::cout << "  " << std::setw(3) << std::setfill('0') << begin << '-'
                  << std::setw(3) << end - 1 << std::setfill(' ') << ":";
        for (std::size_t index = begin; index < end; ++index) {
            std::cout << ' ' << std::setw(3)
                      << static_cast<unsigned>(sample.tactile[index]);
        }
        std::cout << '\n';
    }
}

void PrintSample(const ViewerSample& sample, omniglove_hand_t hand,
                 std::size_t device_index, std::uint64_t uid,
                 const std::string& product, const Options& options,
                 std::uint64_t callbacks, std::uint64_t invalid_layout,
                 std::uint64_t displayed) {
    if (options.clear_screen) std::cout << "\x1b[2J\x1b[H";
    if (sample.mapped == 0) {
        std::cout << "POSE_DATA sample is unmapped for hand="
                  << HandName(static_cast<omniglove_hand_t>(sample.hand))
                  << " source_sequence=" << sample.source_sequence << std::endl;
        return;
    }
    if (options.emf_only) {
        std::cout << "POSE_DATA EMF-only view | Ctrl-C to stop\n"
                  << "device_index=" << device_index
                  << " hand=" << HandName(hand) << " uid=" << uid
                  << " tick_ms=" << sample.device_tick_ms
                  << " host_sequence=" << sample.source_sequence
                  << " gap_count=" << sample.gap_count
                  << " callbacks=" << callbacks
                  << " invalid_layout=" << invalid_layout
                  << " displayed=" << displayed << '\n';
        if (hand == OMNIGLOVE_HAND_UNKNOWN) {
            std::cout << "WARNING: hand metadata is unknown; EMF nodes cannot "
                         "be assigned to fingers.\n";
        }
        PrintEmf(sample);
        std::cout << std::flush;
        return;
    }
    std::cout << "POSE_DATA live view | Ctrl-C to stop\n"
              << "device_index=" << device_index << " hand=" << HandName(hand)
              << " uid=" << uid << " product=" << product << '\n'
              << "device_tick_ms=" << sample.device_tick_ms << " components=0x"
              << std::hex << sample.components << std::dec
              << " generation=" << sample.connection_generation
              << " host_sequence=" << sample.source_sequence
              << " gap_count=" << sample.gap_count
              << " sample_monotonic_ns=" << sample.sample_monotonic_ns << '\n'
              << "device_sequence=";
    if ((sample.flags & OMNIGLOVE_STREAM_SAMPLE_DEVICE_SEQUENCE_VALID) != 0) {
        std::cout << sample.device_sequence;
    } else {
        std::cout << "n/a";
    }
    std::cout << " flags=0x" << std::hex << sample.flags << std::dec
              << " callbacks=" << callbacks
              << " invalid_layout=" << invalid_layout
              << " displayed=" << displayed << '\n';
    const bool has_pose =
        (sample.components & OMNIGLOVE_POSE_COMPONENT_POSE) != 0;
    const bool has_tactile =
        (sample.components & OMNIGLOVE_POSE_COMPONENT_TACTILE) != 0;
    if (has_pose && hand == OMNIGLOVE_HAND_UNKNOWN) {
        std::cout << "WARNING: hand metadata is unknown; EMF nodes cannot be "
                     "assigned to fingers.\n";
    }
    if (has_pose) {
        PrintEmf(sample);
        if (options.show_imu) PrintImu(sample);
    }
    if (has_tactile) {
        if (sample.components == OMNIGLOVE_POSE_COMPONENT_TACTILE) {
            PrintTactileTable(sample, options.tactile_preview_bytes);
        } else {
            PrintTactilePreview(sample, options.tactile_preview_bytes);
        }
    }
    std::cout << std::flush;
}

int Run(const Options& options) {
    omniglove_session_t* session = nullptr;
    omniglove_init_report_t* report = nullptr;
    const auto initialized = omniglove_initialize(nullptr, &session, &report);
    omniglove_init_report_destroy(report);
    if (initialized != OMNIGLOVE_ERROR_NONE || session == nullptr) {
        std::cerr << "SDK initialization failed: "
                  << omniglove_error_name(initialized) << '\n';
        omniglove_session_destroy(session);
        return 1;
    }

    PrintDeviceList(session);
    const auto count = omniglove_session_device_count(session);
    if (options.device_index >= count) {
        std::cerr << "device index out of range: requested="
                  << options.device_index << " count=" << count << '\n';
        omniglove_session_stop(session);
        omniglove_session_destroy(session);
        return 1;
    }
    auto* device = omniglove_session_device_at(session, options.device_index);
    if (device == nullptr) {
        std::cerr << "selected device handle is null\n";
        omniglove_session_stop(session);
        omniglove_session_destroy(session);
        return 1;
    }

    const auto hand = omniglove_device_hand(device);
    const auto uid = omniglove_device_uid(device);
    const auto product = PublicString(device, true);
    CallbackState callback;
    callback.expected_hand = hand;
    callback.expected_uid = uid;
    callback.expected_components = options.pose_components;
    omniglove_stream_config_t config{};
    config.struct_size = sizeof(config);
    config.kind = OMNIGLOVE_STREAM_POSE_DATA;
    config.pose_components = options.pose_components;
    config.output_mode = OMNIGLOVE_STREAM_OUTPUT_DIRECT;
    config.source_interval_ms = options.source_interval_ms;
    config.source_timeout_ms = options.source_timeout_ms;
    config.callback = PoseCallback;
    config.callback_user_data = &callback;
    config.callback_queue_capacity = options.queue_capacity;
    const auto configured = omniglove_device_stream_configure(device, &config);
    const auto started =
        configured == OMNIGLOVE_STREAM_ERROR_NONE
            ? omniglove_device_stream_start(device, config.kind)
            : configured;
    if (started != OMNIGLOVE_STREAM_ERROR_NONE) {
        std::cerr << "POSE DIRECT stream failed: " << StreamErrorName(started)
                  << " (" << started << ")\n";
        omniglove_device_stream_stop(device, config.kind);
        omniglove_session_stop(session);
        omniglove_session_destroy(session);
        return 1;
    }

    bool received_first = false;
    {
        std::unique_lock<std::mutex> lock{callback.mutex};
        received_first = callback.ready.wait_for(
            lock, std::chrono::milliseconds{options.source_timeout_ms * 2ULL},
            [&] { return callback.have_sample || g_stop_requested != 0; });
    }
    std::uint64_t displayed = 0;
    std::uint64_t displayed_version = 0;
    auto next_refresh = Clock::now();
    while (received_first && g_stop_requested == 0 &&
           (options.frame_limit == 0 || displayed < options.frame_limit)) {
        ViewerSample sample{};
        std::uint64_t callbacks = 0;
        std::uint64_t invalid_layout = 0;
        std::uint64_t version = 0;
        bool have_sample = false;
        {
            std::lock_guard<std::mutex> lock{callback.mutex};
            callbacks = callback.received;
            invalid_layout = callback.invalid_layout;
            version = callback.version;
            have_sample = callback.have_sample;
            if (have_sample) sample = callback.latest;
        }
        if (have_sample && version != displayed_version) {
            displayed_version = version;
            ++displayed;
            PrintSample(sample, hand, options.device_index, uid, product,
                        options, callbacks, invalid_layout, displayed);
        }
        next_refresh += std::chrono::milliseconds{options.refresh_ms};
        const auto now = Clock::now();
        if (next_refresh <= now) next_refresh = now;
        std::this_thread::sleep_until(next_refresh);
    }

    const auto stopped_once =
        omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_POSE_DATA);
    const auto stopped_twice =
        omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_POSE_DATA);
    omniglove_stream_status_t stats{};
    stats.struct_size = sizeof(stats);
    const auto stats_error = omniglove_device_stream_status(
        device, OMNIGLOVE_STREAM_POSE_DATA, &stats);
    const auto invalid_layout = callback.invalid_layout;
    const auto stop_error = omniglove_session_stop(session);
    omniglove_session_destroy(session);

    if (!received_first && g_stop_requested == 0) {
        std::cerr << "timed out waiting for the first valid POSE_DATA sample"
                  << std::endl;
    }
    std::cout << "DIRECT stream summary: displayed=" << displayed
              << " accepted=" << stats.callback_accepted
              << " delivered=" << stats.callback_delivered
              << " dropped_full=" << stats.callback_dropped_full
              << " discontinuities=" << stats.callback_discontinuities
              << " invalid_layout=" << invalid_layout
              << " stats_error=" << StreamErrorName(stats_error)
              << " session_stop=" << omniglove_error_name(stop_error)
              << std::endl;
    return received_first && invalid_layout == 0 &&
                   stopped_once == OMNIGLOVE_STREAM_ERROR_NONE &&
                   stopped_twice == OMNIGLOVE_STREAM_ERROR_NONE &&
                   stats_error == OMNIGLOVE_STREAM_ERROR_NONE &&
                   stats.state == OMNIGLOVE_STREAM_STOPPED &&
                   stop_error == OMNIGLOVE_ERROR_NONE
               ? 0
               : 1;
}

}  // namespace

int main(int argc, char** argv) {
    Options options;
    if (!ParseOptions(argc, argv, options)) {
        Usage(argv[0]);
        return 2;
    }
    if (options.layout_self_test) return RunLayoutSelfTest() ? 0 : 1;
    std::signal(SIGINT, HandleSignal);
    std::signal(SIGTERM, HandleSignal);
    return Run(options);
}
