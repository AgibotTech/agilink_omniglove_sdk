package com.agilink.omniglove;

/** BONE transaction metadata plus owned read payload (empty for writes). */
public final class BoneResult extends ControlResult {
    public final byte[] data;
    BoneResult(byte[] encoded) { this(new NativeReader(encoded)); }
    private BoneResult(NativeReader reader) { super(reader); data = reader.bytes(); reader.end(); }
}
