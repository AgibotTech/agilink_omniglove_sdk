package com.agilink.omniglove.sample;

/** Small display-only rigid-transform operations. Quaternions are xyzw. */
final class DisplayMath {
    static double[] multiply(double[] a, double[] b) {
        return new double[]{a[3]*b[0]+a[0]*b[3]+a[1]*b[2]-a[2]*b[1],
            a[3]*b[1]-a[0]*b[2]+a[1]*b[3]+a[2]*b[0],
            a[3]*b[2]+a[0]*b[1]-a[1]*b[0]+a[2]*b[3],
            a[3]*b[3]-a[0]*b[0]-a[1]*b[1]-a[2]*b[2]};
    }
    static double[] inverse(double[] q) { return new double[]{-q[0],-q[1],-q[2],q[3]}; }
    static double[] rotate(double[] q, double[] p) {
        double tx=2*(q[1]*p[2]-q[2]*p[1]), ty=2*(q[2]*p[0]-q[0]*p[2]), tz=2*(q[0]*p[1]-q[1]*p[0]);
        return new double[]{p[0]+q[3]*tx+q[1]*tz-q[2]*ty, p[1]+q[3]*ty+q[2]*tx-q[0]*tz, p[2]+q[3]*tz+q[0]*ty-q[1]*tx};
    }
    static double[] axis(double[] axis, double angle) {
        double s=Math.sin(angle/2); return new double[]{axis[0]*s,axis[1]*s,axis[2]*s,Math.cos(angle/2)};
    }
    static double[] euler(double yaw, double pitch, double roll) {
        return multiply(multiply(axis(new double[]{0,0,1}, yaw), axis(new double[]{0,1,0}, pitch)), axis(new double[]{1,0,0}, roll));
    }
    static double[] normalize(double[] q) {
        double n=0; for (double value:q) n+=value*value;
        require(finite(n) && n>1e-12, "quaternion");
        n=Math.sqrt(n); for (int i=0;i<4;++i) q[i]/=n; return q;
    }
    static double[] fromMatrix(double[] m) {
        double[] q=new double[4]; double trace=m[0]+m[4]+m[8];
        if (trace>0) {
            double s=2*Math.sqrt(trace+1); q[3]=s/4; q[0]=(m[7]-m[5])/s; q[1]=(m[2]-m[6])/s; q[2]=(m[3]-m[1])/s;
        } else {
            int i=m[0]>m[4] && m[0]>m[8]?0:m[4]>m[8]?1:2, j=(i+1)%3, k=(i+2)%3;
            double s=2*Math.sqrt(1+m[i*3+i]-m[j*3+j]-m[k*3+k]);
            q[i]=s/4; q[j]=(m[j*3+i]+m[i*3+j])/s; q[k]=(m[k*3+i]+m[i*3+k])/s; q[3]=(m[k*3+j]-m[j*3+k])/s;
        }
        return normalize(q);
    }
    static double[] logarithm(double[] q) {
        if (q[3]<0) for(int i=0;i<4;++i) q[i]=-q[i];
        double s=Math.sqrt(q[0]*q[0]+q[1]*q[1]+q[2]*q[2]);
        double factor=s<1e-12?2:2*Math.atan2(s,q[3])/s;
        return new double[]{q[0]*factor,q[1]*factor,q[2]*factor};
    }
    static double[] add(double[] a,double[] b) { return new double[]{a[0]+b[0],a[1]+b[1],a[2]+b[2]}; }
    static double norm2(double[] a) { double n=0; for(double x:a)n+=x*x;return n; }
    static boolean finite(double value) { return !Double.isNaN(value) && !Double.isInfinite(value); }
    static void require(boolean ok,String message) { if(!ok)throw new IllegalArgumentException(message); }
}
