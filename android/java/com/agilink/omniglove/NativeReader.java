package com.agilink.omniglove;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

// Shared private decoder for the portable JNI encoding.
final class NativeReader {
    final ByteBuffer buffer;
    NativeReader(byte[] data) { buffer = ByteBuffer.wrap(data).order(ByteOrder.LITTLE_ENDIAN); }
    int u8() { return buffer.get() & 255; }
    int u16() { return buffer.getShort() & 65535; }
    int i16() { return buffer.getShort(); }
    long u32() { return buffer.getInt() & 0xffffffffL; }
    int integer() { return buffer.getInt(); }
    long u64() { return buffer.getLong(); }
    float[] floats(int count) {
        if (count < 0 || count > buffer.remaining() / 4) throw new IllegalArgumentException("Invalid native float count");
        float[] values = new float[count]; for (int i = 0; i < count; ++i) values[i] = buffer.getFloat(); return values;
    }
    int[] shorts(int count) { int[] values = new int[count]; for (int i = 0; i < count; ++i) values[i] = i16(); return values; }
    byte[] bytes() {
        int size = integer();
        if (size < 0 || size > buffer.remaining()) throw new IllegalArgumentException("Invalid native byte count");
        byte[] values = new byte[size]; buffer.get(values); return values;
    }
    void end() { if (buffer.hasRemaining()) throw new IllegalArgumentException("Unexpected native payload tail"); }
}
