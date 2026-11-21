package com.agilink.omniglove;

/** One owned sample. Arrays belong to this Java sample and may be retained.
 * Unsigned 64-bit IDs/timestamps retain their bit pattern in Java long. */
public final class StreamSample {
    public final int kind, hand, flags, layoutVersion;
    public final long deviceSequence, deviceId, connectionGeneration, sourceSequence, sampleMonotonicNs, gapCount, deviceTimeMs;
    public final int deviceTimeUs;
    public final PoseData pose;
    public final PostData post;
    public final RemoteData remote;

    StreamSample(long[] m, byte[] payload) {
        if (m.length != 12) throw new IllegalArgumentException("Invalid sample metadata");
        kind = (int) m[0]; hand = (int) m[1]; flags = (int) m[2]; layoutVersion = (int) m[3]; deviceSequence = m[4];
        deviceId = m[5]; connectionGeneration = m[6]; sourceSequence = m[7]; sampleMonotonicNs = m[8]; gapCount = m[9]; deviceTimeMs = m[10]; deviceTimeUs = (int) m[11];
        NativeReader r = new NativeReader(payload);
        pose = kind == 2 ? new PoseData(r) : null;
        post = kind == 3 ? new PostData(r) : null;
        remote = kind == 4 ? new RemoteData(r) : null;
        if (pose == null && post == null && remote == null) throw new IllegalArgumentException("Unsupported sample kind");
        r.end();
    }
    public boolean hasDeviceSequence() { return (flags & 2) != 0; }
    public boolean hasDeviceTime() { return (flags & 4) != 0; }

    public static final class Imu {
        public final int[] rollPitchYawCdeg;
        public final int flags, reserved;
        Imu(NativeReader r) { rollPitchYawCdeg = r.shorts(3); flags = r.u8(); reserved = r.u8(); }
    }
    public static final class PoseNode {
        public final int[] positionMm, yawPitchRollCdeg;
        public final int confidenceMilli, valid, reserved;
        public final Imu imu;
        PoseNode(NativeReader r) {
            positionMm = r.shorts(3); yawPitchRollCdeg = r.shorts(3);
            confidenceMilli = r.u16(); valid = r.u8(); reserved = r.u8(); imu = new Imu(r);
        }
    }
    public static final class TactileRegion {
        public final int rows, columns;
        /** Unsigned pressure value: data[i] & 255, grams at 1 g/LSB. */
        public final byte[] data;
        TactileRegion(NativeReader r) { rows = r.integer(); columns = r.integer(); data = r.bytes(); }
    }
    public static final class TactileFinger {
        public final TactileRegion tip, pad, middle, root;
        TactileFinger(NativeReader r) { tip = new TactileRegion(r); pad = new TactileRegion(r); middle = new TactileRegion(r); root = new TactileRegion(r); }
    }
    public static final class Tactile {
        public final boolean mapped;
        public final int count;
        public final TactileFinger thumb, index, middle, ring, pinky;
        public final TactileRegion palmSurface;
        public final byte[] unmapped;
        Tactile(NativeReader r) {
            mapped = r.integer() != 0; count = r.integer();
            thumb = new TactileFinger(r); index = new TactileFinger(r); middle = new TactileFinger(r); ring = new TactileFinger(r); pinky = new TactileFinger(r);
            palmSurface = new TactileRegion(r); unmapped = r.bytes();
        }
    }
    public static final class PoseData {
        public final boolean mapped;
        public final int components;
        public final long deviceTickMs;
        public final PoseNode thumb, index, middle, ring, pinky, wrist;
        public final Imu backOfHandImu;
        public final Tactile tactile;
        public final byte[] unmapped;
        public final int tactilePositionCount, coordinateFrame, positionUnit;
        /** mode 1: XYZ metres in flattened tactile order; empty in default mode. */
        public final float[] tactilePositionXyz;
        PoseData(NativeReader r) {
            mapped = r.integer() != 0; components = r.integer(); deviceTickMs = r.u32();
            thumb = new PoseNode(r); index = new PoseNode(r); middle = new PoseNode(r); ring = new PoseNode(r); pinky = new PoseNode(r); wrist = new PoseNode(r);
            backOfHandImu = new Imu(r); tactile = new Tactile(r); unmapped = r.bytes();
            tactilePositionCount = r.integer();
            if (tactilePositionCount != 0 && tactilePositionCount != 746) throw new IllegalArgumentException("Invalid tactile position count");
            coordinateFrame = tactilePositionCount > 0 ? r.integer() : 0;
            positionUnit = tactilePositionCount > 0 ? r.integer() : 0;
            tactilePositionXyz = r.floats(tactilePositionCount * 3);
        }
    }
    public static final class Pose6 {
        public final float[] positionM, quaternionXyzw;
        Pose6(NativeReader r) { positionM = r.floats(3); quaternionXyzw = r.floats(4); }
    }
    public static final class PostFinger {
        /** Thumb: CMC rotation/abduction/flexion, MCP/IP flexion.
         * Other fingers: MCP abduction/flexion, PIP/DIP flexion. All radians. */
        public final float[] jointsRad;
        /** Thumb: CMC/MCP/IP/tip. Others: MCP/PIP/DIP/tip. */
        public final Pose6[] landmarks;
        public final Pose6 rxTipTarget;
        PostFinger(NativeReader r, boolean thumb) {
            jointsRad = r.floats(thumb ? 5 : 4);
            landmarks = new Pose6[4]; for (int i = 0; i < 4; ++i) landmarks[i] = new Pose6(r);
            rxTipTarget = new Pose6(r);
        }
    }
    public static final class PostData {
        public final boolean mapped;
        public final long deviceTickMs, flags, frameId;
        public final PostFinger thumb, index, middle, ring, pinky;
        public final Pose6 wristLandmark;
        public final float[] wristQuaternionXyzw;
        public final byte[] unmapped;
        public final int reserved;
        PostData(NativeReader r) {
            mapped = r.integer() != 0; deviceTickMs = r.u32(); flags = r.u32(); frameId = r.u32();
            thumb = new PostFinger(r, true); index = new PostFinger(r, false); middle = new PostFinger(r, false); ring = new PostFinger(r, false); pinky = new PostFinger(r, false);
            wristLandmark = new Pose6(r); wristQuaternionXyzw = r.floats(4); unmapped = r.bytes(); reserved = r.u8();
        }
    }
    public static final class RemoteData {
        public final boolean mapped;
        public final long deviceTickMs;
        public final int hand, buttonBits, xRaw, yRaw;
        public final byte[] unmapped;
        RemoteData(NativeReader r) {
            mapped = r.integer() != 0; deviceTickMs = r.u32(); hand = r.integer(); buttonBits = r.integer(); xRaw = r.integer(); yRaw = r.integer(); unmapped = r.bytes();
        }
    }
}
