package com.agilink.omniglove;

/** Immutable stream settings. Source interval is a compatibility field, not a device-rate control. */
public final class StreamConfig {
    public static final int ON_NEW_SAMPLE = 0, FIXED_RATE_LATEST = 1;
    public final int kind, mode, poseComponents, sourceIntervalMs, sourceTimeoutMs, queueCapacity;
    public final int processIntervalMs, publishPolicy, publishIntervalMs, port, callbackQueueCapacity;
    public final String ipv4;
    public final boolean isolatedCallbacks;

    private StreamConfig(Builder b) {
        kind = b.kind; mode = b.mode; poseComponents = b.poseComponents;
        sourceIntervalMs = b.sourceIntervalMs; sourceTimeoutMs = b.sourceTimeoutMs; queueCapacity = b.queueCapacity;
        processIntervalMs = b.processIntervalMs; publishPolicy = b.publishPolicy; publishIntervalMs = b.publishIntervalMs;
        ipv4 = b.ipv4; port = b.port; isolatedCallbacks = b.isolatedCallbacks; callbackQueueCapacity = b.callbackQueueCapacity;
        if (kind < 2 || kind > 4) throw new IllegalArgumentException("Unsupported stream kind");
        if (sourceIntervalMs <= 0 || sourceTimeoutMs <= 0 || queueCapacity <= 0 || callbackQueueCapacity <= 0)
            throw new IllegalArgumentException("Intervals and queue capacities must be positive");
        if (kind == 2 ? poseComponents <= 0 || (poseComponents & ~3) != 0 : poseComponents != 0)
            throw new IllegalArgumentException("Invalid POSE components");
        // Mode support remains a native capability check, preserving native error codes.
        if (isUdp()) {
            if (ipv4.isEmpty() || port <= 0 || port > 65535 || processIntervalMs < 0 || isolatedCallbacks)
                throw new IllegalArgumentException("Invalid UDP settings");
            if (publishPolicy == ON_NEW_SAMPLE ? publishIntervalMs != 0 :
                    publishPolicy != FIXED_RATE_LATEST || publishIntervalMs <= 0)
                throw new IllegalArgumentException("Invalid publish policy/interval");
        } else if (port != 0 || processIntervalMs != 0 || publishPolicy != ON_NEW_SAMPLE || publishIntervalMs != 0) {
            throw new IllegalArgumentException("UDP settings cannot be used with DIRECT output");
        }
    }

    public boolean isUdp() { return ipv4 != null; }
    public static Builder direct(int kind) { return new Builder(kind, null, 0); }
    public static Builder udp(int kind, String ipv4, int port) {
        if (ipv4 == null) throw new IllegalArgumentException("IPv4 destination is required");
        return new Builder(kind, ipv4, port);
    }
    int[] nativeSettings() {
        return new int[]{kind, mode, poseComponents, sourceIntervalMs, sourceTimeoutMs,
                queueCapacity, processIntervalMs, publishPolicy, publishIntervalMs};
    }

    public static final class Builder {
        private final int kind, port;
        private final String ipv4;
        private int mode, poseComponents, sourceIntervalMs = 8, sourceTimeoutMs = 1000, queueCapacity = 64;
        private int processIntervalMs, publishPolicy, publishIntervalMs, callbackQueueCapacity = 64;
        private boolean isolatedCallbacks;
        private Builder(int kind, String ipv4, int port) {
            this.kind = kind; this.ipv4 = ipv4; this.port = port;
            poseComponents = kind == 2 ? 3 : 0; processIntervalMs = ipv4 == null ? 0 : 8;
        }
        public Builder mode(int value) { mode = value; return this; }
        public Builder poseComponents(int value) { poseComponents = value; return this; }
        public Builder sourceIntervalMs(int value) { sourceIntervalMs = value; return this; }
        public Builder sourceTimeoutMs(int value) { sourceTimeoutMs = value; return this; }
        /** Native DIRECT callback queue or UDP publisher queue capacity. */
        public Builder queueCapacity(int value) { queueCapacity = value; return this; }
        public Builder processIntervalMs(int value) { processIntervalMs = value; return this; }
        public Builder publishOnNewSample() { publishPolicy = ON_NEW_SAMPLE; publishIntervalMs = 0; return this; }
        public Builder publishLatestEvery(int milliseconds) {
            publishPolicy = FIXED_RATE_LATEST; publishIntervalMs = milliseconds; return this;
        }
        /** Opt in to a dedicated serial Java worker/queue for this device stream.
         * Different isolated streams can invoke their listeners concurrently. */
        public Builder isolatedCallbacks(int capacity) {
            isolatedCallbacks = true; callbackQueueCapacity = capacity; return this;
        }
        public StreamConfig build() { return new StreamConfig(this); }
    }
}
