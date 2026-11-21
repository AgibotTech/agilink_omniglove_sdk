package com.agilink.omniglove;

/** Terminal control result. Check status == 0 AND returnCode == 0 for success. */
public class ControlResult {
    public static final int POSE_INFO = 0, CALIBRATION_BLOB_WRITE = 1, CALIBRATION_BLOB_READ = 2,
            CALIBRATION_PHASE_WRITE = 3, CALIBRATION_PHASE_READ = 4, REMOTE_DATA = 5;
    public final int kind, status, hand, protocolSequence, returnCode, deviceErrorCode;
    public final long requestId, connectionGeneration, completedMonotonicNs;
    public final long nodeCount, nominalSourceRateHz, calibrationState, maxDistanceMm, capabilityFlags, remoteHand, remoteButtons;
    /** TX matrix 9, RX matrices 54, dist_r0 6, dist_g0 6, dist_n 6, dist_valid 1. */
    public final float[] calibrationBlob;
    public final boolean phaseValid;
    public final int phaseHand;
    public final float[] phaseXyz;
    ControlResult(byte[] data) { this(new NativeReader(data), true); }
    private ControlResult(NativeReader r, boolean complete) { this(r); r.end(); }
    ControlResult(NativeReader r) {
        kind = r.integer(); status = r.integer(); hand = r.integer();
        requestId = r.u64(); connectionGeneration = r.u64(); completedMonotonicNs = r.u64();
        protocolSequence = r.integer(); returnCode = r.integer(); deviceErrorCode = r.integer();
        nodeCount = r.u32(); nominalSourceRateHz = r.u32(); calibrationState = r.u32(); maxDistanceMm = r.u32(); capabilityFlags = r.u32(); remoteHand = r.u32(); remoteButtons = r.u32();
        calibrationBlob = new float[82]; float[] values = r.floats(81); System.arraycopy(values, 0, calibrationBlob, 0, 81); calibrationBlob[81] = r.u32();
        phaseValid = r.integer() != 0; phaseHand = r.integer(); phaseXyz = r.floats(3);
    }
    public boolean succeeded() { return status == 0 && returnCode == 0 && deviceErrorCode == 0; }
}
