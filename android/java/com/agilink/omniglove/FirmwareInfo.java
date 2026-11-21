package com.agilink.omniglove;

import java.nio.charset.StandardCharsets;

public final class FirmwareInfo {
    public final int returnCode, deviceErrorCode, protocolSequence;
    public final long requestId, connectionGeneration, completedMonotonicNs;
    public final byte[] loaderVersion, appVersion, hardwareVersion, productName, deviceSn;
    FirmwareInfo(byte[] data) {
        NativeReader r = new NativeReader(data);
        returnCode = r.integer(); deviceErrorCode = r.integer(); protocolSequence = r.integer();
        requestId = r.u64(); connectionGeneration = r.u64(); completedMonotonicNs = r.u64();
        loaderVersion = r.bytes(); appVersion = r.bytes(); hardwareVersion = r.bytes(); productName = r.bytes(); deviceSn = r.bytes(); r.end();
    }
    public String productNameText() { return paddedText(productName); }
    public String hardwareVersionText() { return paddedText(hardwareVersion); }
    private static String paddedText(byte[] bytes) {
        int end = 0; while (end < bytes.length && bytes[end] != 0) ++end;
        return new String(bytes, 0, end, StandardCharsets.UTF_8);
    }
}
