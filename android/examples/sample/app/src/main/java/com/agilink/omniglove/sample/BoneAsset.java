package com.agilink.omniglove.sample;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;
import java.nio.ShortBuffer;

/** Toolbox HBON v1 surfaces, preserved in their owning link frames. Units: metres. */
public final class BoneAsset {
    public final float[] restPoints, restRotations;
    public final Part[] parts;

    public static final class Part {
        public final int anchor, end, indexCount;
        public final boolean forearm;
        public final float restLength;
        public final Pose restPose;
        public final FloatBuffer vertices;
        public final ShortBuffer indices;
        private Part(int anchor, int end, boolean forearm, float length, Pose pose,
                     FloatBuffer vertices, ShortBuffer indices, int count) {
            this.anchor = anchor; this.end = end; this.forearm = forearm;
            restLength = length; restPose = pose; this.vertices = vertices;
            this.indices = indices; indexCount = count;
        }
    }
    public static final class Pose {
        public final float[] position, rotation;
        public final float lengthScale;
        private Pose(float[] position, float[] rotation, float scale) {
            this.position = position; this.rotation = rotation; lengthScale = scale;
        }
    }
    private BoneAsset(float[] points, float[] rotations, Part[] parts) {
        restPoints = points; restRotations = rotations; this.parts = parts;
    }
    public static BoneAsset read(InputStream input) throws IOException {
        try {
            ByteArrayOutputStream output = new ByteArrayOutputStream(); byte[] chunk = new byte[8192];
            int read;
            while ((read = input.read(chunk)) != -1) {
                output.write(chunk, 0, read);
                require(output.size() <= 2_000_000, "asset size");
            }
            ByteBuffer data = ByteBuffer.wrap(output.toByteArray()).order(ByteOrder.LITTLE_ENDIAN);
            require(data.get() == 'H' && data.get() == 'B' && data.get() == 'O' && data.get() == 'N', "HBON magic");
            require(data.getInt() == 1 && data.getInt() == 29, "HBON version/parts");
            float[] points = new float[63], rotations = new float[84];
            for (int i = 0; i < points.length; ++i) points[i] = finite(data.getFloat()) * .001f;
            for (int i = 0; i < 21; ++i) {
                float[] q = quaternion(data);
                System.arraycopy(q, 0, rotations, i * 4, 4);
            }
            Part[] parts = new Part[29];
            int totalVertices = 0, totalIndices = 0;
            for (int i = 0; i < parts.length; ++i) {
                int anchor = data.getInt(), end = data.getInt(), forearm = data.getInt();
                require(anchor >= -1 && anchor < 21 && end >= -1 && end < 21 && forearm >= 0 && forearm <= 1, "binding");
                require(anchor < 0 || end >= 0, "moving segment end");
                float[] p = {finite(data.getFloat()) * .001f, finite(data.getFloat()) * .001f, finite(data.getFloat()) * .001f};
                float[] q = quaternion(data);
                float length = finite(data.getFloat()) * .001f;
                int vertices = data.getInt(), indices = data.getInt();
                require(length >= 0 && vertices > 0 && vertices <= 65535 && indices > 0 && indices <= 600000 && indices % 3 == 0, "mesh size");
                totalVertices += vertices; totalIndices += indices;
                require(totalVertices <= 500000 && totalIndices <= 2000000, "mesh totals");
                FloatBuffer vertexBuffer = ByteBuffer.allocateDirect(vertices * 24).order(ByteOrder.nativeOrder()).asFloatBuffer();
                for (int v = 0; v < vertices; ++v) {
                    for (int axis = 0; axis < 6; ++axis) vertexBuffer.put(finite(data.getFloat()) * (axis < 3 ? .001f : 1));
                }
                ShortBuffer indexBuffer = ByteBuffer.allocateDirect(indices * 2).order(ByteOrder.nativeOrder()).asShortBuffer();
                for (int j = 0; j < indices; ++j) {
                    int index = data.getInt(); require(index >= 0 && index < vertices, "triangle index");
                    indexBuffer.put((short) index);
                }
                vertexBuffer.position(0); indexBuffer.position(0);
                parts[i] = new Part(anchor, end, forearm != 0, length, new Pose(p, q, 1), vertexBuffer, indexBuffer, indices);
            }
            require(!data.hasRemaining(), "trailing bytes");
            return new BoneAsset(points, rotations, parts);
        } catch (RuntimeException malformed) { throw new IOException("Invalid hand bone asset", malformed); }
    }
    private static float finite(float value) {
        require(!Float.isNaN(value) && !Float.isInfinite(value), "nonfinite value"); return value;
    }
    private static float[] quaternion(ByteBuffer data) {
        float[] q = normalized(new float[]{data.getFloat(), data.getFloat(), data.getFloat(), data.getFloat()});
        require(q != null, "rest quaternion"); return q;
    }
    private static void require(boolean valid, String message) {
        if (!valid) throw new IllegalArgumentException(message);
    }

    /** Same attachment and local-Z scaling as toolbox HandBoneGeometry. */
    public Pose pose(Part part, SingleHandModel.Snapshot frame) {
        if (!frame.hasPose || part.anchor < 0) return part.restPose;
        float[] p = point(frame.points, part.anchor), end = point(frame.points, part.end);
        float[] direction = subtract(end, p);
        float scale = part.restLength > .0000001f ? Math.max(.01f, length(direction) / part.restLength) : 1;
        float[] q = null;
        if (frame.rotations != null) {
            int offset = part.anchor * 4;
            q = normalized(new float[]{frame.rotations[offset], frame.rotations[offset + 1], frame.rotations[offset + 2], frame.rotations[offset + 3]});
        }
        if (q == null) {
            float[] restDirection = subtract(point(restPoints, part.end), point(restPoints, part.anchor));
            q = multiply(rotationTo(restDirection, direction), part.restPose.rotation);
        }
        return new Pose(p, q, scale);
    }
    public static float[] normalized(float[] q) {
        float norm = 0;
        for (float value : q) norm += value * value;
        if (Float.isNaN(norm) || Float.isInfinite(norm) || norm < 1e-8f) return null;
        float inverse = 1 / (float) Math.sqrt(norm);
        return new float[]{q[0] * inverse, q[1] * inverse, q[2] * inverse, q[3] * inverse};
    }
    public static float[] multiply(float[] a, float[] b) {
        return new float[]{a[3]*b[0]+a[0]*b[3]+a[1]*b[2]-a[2]*b[1],
                a[3]*b[1]-a[0]*b[2]+a[1]*b[3]+a[2]*b[0],
                a[3]*b[2]+a[0]*b[1]-a[1]*b[0]+a[2]*b[3],
                a[3]*b[3]-a[0]*b[0]-a[1]*b[1]-a[2]*b[2]};
    }
    public static float[] rotate(float[] q, float[] p) {
        float tx = 2*(q[1]*p[2]-q[2]*p[1]), ty = 2*(q[2]*p[0]-q[0]*p[2]), tz = 2*(q[0]*p[1]-q[1]*p[0]);
        return new float[]{p[0]+q[3]*tx+q[1]*tz-q[2]*ty, p[1]+q[3]*ty+q[2]*tx-q[0]*tz, p[2]+q[3]*tz+q[0]*ty-q[1]*tx};
    }
    private static float[] rotationTo(float[] a, float[] b) {
        float la = length(a), lb = length(b);
        if (la < 1e-8f || lb < 1e-8f) return new float[]{0,0,0,1};
        for (int i = 0; i < 3; ++i) { a[i] /= la; b[i] /= lb; }
        float dot = a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
        if (dot < -.999999f) {
            float[] axis = Math.abs(a[0]) < .9f ? new float[]{0,a[2],-a[1]} : new float[]{-a[2],0,a[0]};
            return normalized(new float[]{axis[0],axis[1],axis[2],0});
        }
        return normalized(new float[]{a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0],1+dot});
    }
    private static float[] point(float[] points, int index) {
        return new float[]{points[index*3],points[index*3+1],points[index*3+2]};
    }
    private static float[] subtract(float[] a, float[] b) { return new float[]{a[0]-b[0],a[1]-b[1],a[2]-b[2]}; }
    private static float length(float[] p) { return (float) Math.sqrt(p[0]*p[0]+p[1]*p[1]+p[2]*p[2]); }
}
