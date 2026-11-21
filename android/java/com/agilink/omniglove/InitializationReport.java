package com.agilink.omniglove;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/** Owned aggregate and per-candidate initialization results, including ordinary discovery failures. */
public final class InitializationReport {
    public static final int SUCCESS = 0, PARTIAL_SUCCESS = 1, NO_DEVICE = 2, ALL_FAILED = 3, CANCELLED = 4;
    public final int error, outcome;
    public final String message;
    public final List<Candidate> candidates;
    InitializationReport(byte[] payload) {
        NativeReader r = new NativeReader(payload);
        error = r.integer(); outcome = r.integer();
        message = new String(r.bytes(), StandardCharsets.UTF_8);
        int count = r.integer();
        if (count < 0 || count > (payload.length / 28)) throw new IllegalArgumentException("Invalid candidate count");
        List<Candidate> result = new ArrayList<>(count);
        for (int i = 0; i < count; ++i) result.add(new Candidate(r));
        candidates = Collections.unmodifiableList(result); r.end();
    }
    public boolean succeeded() { return outcome == SUCCESS || outcome == PARTIAL_SUCCESS; }
    public static final class Candidate {
        public final int probeStatus, error;
        public final boolean hasDeviceUid, selectorMatched, initialized;
        public final long deviceUid;
        private Candidate(NativeReader r) {
            probeStatus = r.integer(); error = r.integer(); hasDeviceUid = r.integer() != 0;
            deviceUid = r.u64(); selectorMatched = r.integer() != 0; initialized = r.integer() != 0;
        }
    }
}
