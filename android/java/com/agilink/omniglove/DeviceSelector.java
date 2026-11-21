package com.agilink.omniglove;

/** Device identity selector. Unsigned numeric UID bits are preserved in long. */
public final class DeviceSelector {
    public final String opaqueToken;
    public final boolean hasDeviceUid;
    public final long deviceUid;
    private DeviceSelector(String token, boolean hasUid, long uid) {
        opaqueToken = token; hasDeviceUid = hasUid; deviceUid = uid;
    }
    public static DeviceSelector all() { return new DeviceSelector(null, false, 0); }
    public static DeviceSelector byUid(long uid) { return new DeviceSelector(null, true, uid); }
    public static DeviceSelector byToken(String token) {
        if (token == null || token.isEmpty()) throw new IllegalArgumentException("Device token is required");
        return new DeviceSelector(token, false, 0);
    }
}
