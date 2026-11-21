package com.agilink.omniglove;

/** Java delivery counters for the current configuration of one device stream. */
public final class CallbackStatistics {
    public final long accepted, delivered, droppedFull, discarded, failures, queueHighWatermark;
    public final int pending;
    CallbackStatistics(long accepted, long delivered, long droppedFull, long discarded,
                       long failures, long highWatermark, int pending) {
        this.accepted = accepted; this.delivered = delivered; this.droppedFull = droppedFull;
        this.discarded = discarded; this.failures = failures; queueHighWatermark = highWatermark; this.pending = pending;
    }
}
