package com.agilink.omniglove.sample;

/** Shared camera for both viewports; drag rotates the visible surface with the pointer. */
public final class OrbitCamera {
    private float yaw = -18, pitch = 18, zoom = 1;
    public synchronized void drag(float dx, float dy) {
        if (Float.isNaN(dx) || Float.isInfinite(dx) || Float.isNaN(dy) || Float.isInfinite(dy)) return;
        // The renderer looks from +Y with +Z up: positive Rz carries the
        // camera-facing surface to screen right; negative Rx carries it down.
        yaw = (yaw + dx * .4f) % 360;
        pitch = Math.max(-85, Math.min(85, pitch - dy * .4f));
    }
    public synchronized void scale(float factor) {
        if (Float.isNaN(factor) || Float.isInfinite(factor) || factor <= 0) return;
        zoom = Math.max(.55f, Math.min(2.2f, zoom / factor));
    }
    public synchronized float[] snapshot() { return new float[]{yaw, pitch, zoom}; }
}
