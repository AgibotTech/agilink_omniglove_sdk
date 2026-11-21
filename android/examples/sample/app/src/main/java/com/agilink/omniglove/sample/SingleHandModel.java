package com.agilink.omniglove.sample;

import com.agilink.omniglove.StreamSample;

/** Display-only POST consumer, bound to one selected device. */
public final class SingleHandModel {
    public static final int LEFT = 1, RIGHT = 2;
    public enum State { WAITING, LIVE, INVALID }

    /** Owned mesh-space positions: wrist, then four landmarks per finger. */
    public static final class Snapshot {
        public final int hand;
        public final float[] points, rotations;
        public final State state;
        public final long generation, sequence, receivedAtNs;
        public final boolean hasPose;
        private Snapshot(int hand, float[] points, float[] rotations, State state, long generation,
                         long sequence, long receivedAtNs, boolean hasPose) {
            this.hand = hand; this.points = points; this.rotations = rotations; this.state = state;
            this.generation = generation; this.sequence = sequence;
            this.receivedAtNs = receivedAtNs; this.hasPose = hasPose;
        }
        public boolean isFresh(long nowNs) {
            return state == State.LIVE && nowNs - receivedAtNs < 1_000_000_000L;
        }
    }
    private Snapshot current;
    private final int kind;
    private boolean hasSequence;
    private long deviceId;
    public SingleHandModel() { this(3); }
    SingleHandModel(int kind) { this.kind = kind; select(0); }

    public synchronized void select(int hand) {
        if (hand != 0 && hand != LEFT && hand != RIGHT) throw new IllegalArgumentException("hand");
        current = new Snapshot(hand, new float[63], null, State.WAITING, 0, 0, 0, false);
        hasSequence = false;
    }
    public synchronized Snapshot snapshot() { return current; }

    /** Called only by the selected device. Ignore unrelated or old samples. */
    public synchronized boolean accept(StreamSample sample, long nowNs) {
        if (kind != 3 || sample.post == null || !canAccept(sample)) return false;
        float[] points = positions(sample);
        return acceptSolved(sample, points, points == null ? null : rotations(sample), nowNs);
    }
    synchronized boolean canAccept(StreamSample sample) {
        if (sample.kind != kind
                || (sample.hand != LEFT && sample.hand != RIGHT)
                || (current.hand != 0 && sample.hand != current.hand)) return false;
        if (hasSequence) {
            if (sample.deviceId != deviceId) return false;
            if (unsignedLess(sample.connectionGeneration, current.generation)) return false;
            if (sample.connectionGeneration == current.generation
                    && !unsignedLess(current.sequence, sample.sourceSequence)) return false;
        }
        return true;
    }
    synchronized boolean acceptSolved(StreamSample sample, float[] points, float[] rotations, long nowNs) {
        if (!canAccept(sample)) return false;
        boolean newGeneration = !hasSequence || sample.connectionGeneration != current.generation;
        boolean valid = points != null;
        boolean held = !newGeneration && current.hasPose;
        current = new Snapshot(sample.hand, valid ? points : held ? current.points : new float[63],
                valid ? rotations : held ? current.rotations : null,
                valid ? State.LIVE : State.INVALID, sample.connectionGeneration,
                sample.sourceSequence, nowNs, valid || held);
        hasSequence = true;
        deviceId = sample.deviceId;
        return true;
    }
    private static boolean unsignedLess(long a, long b) {
        return (a ^ Long.MIN_VALUE) < (b ^ Long.MIN_VALUE);
    }
    private static float[] positions(StreamSample sample) {
        StreamSample.PostData post = sample.post;
        // MODEL_OK + IK_OK suffice for wrist-local landmarks. WRIST_OK is separate.
        // The demo does not infer a global wrist pose or reinterpret reserved.
        if (!post.mapped || (post.flags & 5) != 5) return null;
        float[] points = new float[63];
        StreamSample.PostFinger[] fingers = {post.thumb, post.index, post.middle, post.ring, post.pinky};
        int offset = 3;
        float sign = sample.hand == RIGHT ? -1 : 1;
        for (StreamSample.PostFinger finger : fingers) {
            for (StreamSample.Pose6 landmark : finger.landmarks) {
                float[] p = landmark.positionM;
                for (float value : p) {
                    if (Float.isNaN(value) || Float.isInfinite(value) || Math.abs(value) >= 2) return null;
                }
                // Toolbox TrajectoryCoordinates.h: SDK +X radial, +Z proximal;
                // mesh +Y dorsal, +Z distal. Each hand uses a proper rotation.
                points[offset++] = -sign * p[0];
                points[offset++] = sign * p[1];
                points[offset++] = -p[2];
            }
        }
        for (int finger = 0; finger < 5; ++finger) {
            for (int segment = 0; segment < 3; ++segment) {
                int a = (1 + finger * 4 + segment) * 3, b = a + 3;
                float length2 = 0;
                for (int axis = 0; axis < 3; ++axis) {
                    float delta = points[a + axis] - points[b + axis];
                    length2 += delta * delta;
                }
                if (length2 < 0.000001f || length2 > 0.0625f) return null;
            }
        }
        return points;
    }
    private static float[] rotations(StreamSample sample) {
        float[] rotations = new float[84];
        float[] basis = sample.hand == RIGHT ? new float[]{1,0,0,0} : new float[]{0,1,0,0};
        System.arraycopy(basis, 0, rotations, 0, 4);
        StreamSample.PostFinger[] fingers = {sample.post.thumb,sample.post.index,sample.post.middle,sample.post.ring,sample.post.pinky};
        int offset = 4;
        for (StreamSample.PostFinger finger : fingers) for (StreamSample.Pose6 landmark : finger.landmarks) {
            float[] q = BoneAsset.normalized(landmark.quaternionXyzw);
            // Change only the destination basis: local bone vertices retain their link frame.
            if (q != null) System.arraycopy(BoneAsset.multiply(basis, q), 0, rotations, offset, 4);
            offset += 4;
        }
        return rotations;
    }
}
