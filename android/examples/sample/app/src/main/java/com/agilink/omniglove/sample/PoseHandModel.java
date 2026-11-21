package com.agilink.omniglove.sample;

import com.agilink.omniglove.StreamSample;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/** Independent POSE comparison. Uses device BONE, never POST angles/landmarks. */
public final class PoseHandModel {
    private final Rig[] rigs;
    private final SingleHandModel model = new SingleHandModel(2);
    private Calibration calibration;
    private long boneGeneration, lastSolveNs;
    private boolean accepted;
    private double acceptedTime;
    private double[][] warm;
    private String error = "等待设备标定";
    private final double[] positionErrors = new double[5];
    private static final String[] FINGERS = {"拇指", "食指", "中指", "无名指", "小指"};
    private final EuroFilter[] filters = new EuroFilter[5];

    public PoseHandModel(InputStream left, InputStream right) throws IOException {
        rigs = new Rig[]{readRig(left, 1), readRig(right, 2)};
        for (int i=0;i<5;++i) filters[i]=new EuroFilter();
        reset();
    }
    public synchronized void select(int hand) {
        model.select(hand); calibration=null; reset();
    }
    public SingleHandModel.Snapshot snapshot() { return model.snapshot(); }
    public synchronized String error() { return error; }
    synchronized void clearPose() { model.select(model.snapshot().hand); reset(); }
    public synchronized boolean hasCalibration(long generation) { return calibration!=null && boneGeneration==generation; }
    public synchronized void bind(byte[] bone, int hand, long generation) {
        Calibration next=Calibration.read(bone, hand);
        if (model.snapshot().hand!=0 && next.hand!=model.snapshot().hand) throw new IllegalArgumentException("BONE hand differs from selected device");
        if (model.snapshot().receivedAtNs!=0 && unsignedLess(generation, model.snapshot().generation)) return;
        calibration=next; boneGeneration=generation; model.select(next.hand); reset();
    }
    private void reset() {
        accepted=false; acceptedTime=0; lastSolveNs=0; warm=new double[5][];
        error=calibration==null?"等待设备标定":"等待 POSE 数据";
        for (EuroFilter filter:filters) if(filter!=null)filter.ready=false;
    }
    private static boolean unsignedLess(long a,long b) { return (a^Long.MIN_VALUE)<(b^Long.MIN_VALUE); }

    public synchronized boolean accept(StreamSample sample,long nowNs) {
        if (sample.pose==null || !model.canAccept(sample)) return false;
        if (lastSolveNs!=0 && nowNs-lastSolveNs<33_333_333L && model.snapshot().generation==sample.connectionGeneration) return false;
        if (model.snapshot().generation!=sample.connectionGeneration || nowNs-lastSolveNs>500_000_000L) reset();
        lastSolveNs=nowNs;
        if (!hasCalibration(sample.connectionGeneration) || calibration.hand!=sample.hand)
            return invalid(sample,nowNs,"等待当前连接的设备标定");
        if (!sample.pose.mapped || (sample.pose.components&2)==0)
            return invalid(sample,nowNs,"POSE 未包含定位数据");
        StreamSample.PoseNode[] nodes={sample.pose.thumb,sample.pose.index,sample.pose.middle,sample.pose.ring,sample.pose.pinky};
        for(int f=0;f<5;++f) if(nodes[f].valid!=1 || nodes[f].confidenceMilli>1000)
            return invalid(sample,nowNs,FINGERS[f]+"磁定位数据无效");
        double time=nowNs/1e9;
        double[][] candidates=new double[5][];
        Rig rig=rigs[sample.hand-1];
        boolean valid=true;
        for(int f=0;f<5;++f) {
            double[] raw=new double[6];
            for(int axis=0;axis<3;++axis) { raw[axis]=nodes[f].positionMm[axis]*.001;raw[axis+3]=nodes[f].yawPitchRollCdeg[axis]*.01; }
            double[] filtered=filters[f].filter(raw,time);
            double[] sensor=DisplayMath.euler(Math.toRadians(filtered[3]),Math.toRadians(filtered[4]),Math.toRadians(filtered[5]));
            double[] target=DisplayMath.add(DisplayMath.rotate(sensor,calibration.rxPosition[f]), new double[]{filtered[0],filtered[1],filtered[2]});
            target=DisplayMath.add(DisplayMath.rotate(calibration.txRotation,target),calibration.txPosition);
            double[] targetQ=DisplayMath.multiply(DisplayMath.multiply(calibration.txRotation,sensor),calibration.rxRotation[f]);
            if(warm[f]==null) {
                warm[f]=new double[rig.fingers[f].length-1];
                for(int j=0;j<warm[f].length;++j) {
                    Joint joint=rig.fingers[f][j];
                    // Same cold flexion floor as the toolbox model.
                    warm[f][j]=Math.max(joint.lower,Math.min(joint.upper, (f==0?j==1 || j>=3:j==0 || j>=2)?.05:0));
                }
            }
            positionErrors[f]=Double.NaN;
            candidates[f]=solve(rig,f,calibration,target,targetQ,warm[f],accepted?Math.sqrt(.008/Math.max(.001,time-acceptedTime)):0,positionErrors);
            if(candidates[f]==null) valid=false;
        }
        if(!valid) {
            for(int f=0;f<5;++f)if(candidates[f]==null)
                return invalid(sample,nowNs,FINGERS[f]+"姿态求解未收敛");
        }
        warm=candidates;accepted=true;acceptedTime=time;
        error="";
        int worst=0;for(int f=1;f<5;++f)if(positionErrors[f]>positionErrors[worst])worst=f;
        if(positionErrors[worst]>=10)error=String.format(java.util.Locale.ROOT,"%s拟合偏差 %.1f mm",FINGERS[worst],positionErrors[worst]);
        Geometry geometry=forward(sample.hand,calibration,warm);
        float sign=sample.hand==2?-1:1;
        float[] points=new float[63],rotations=new float[84];
        float[] basis=sample.hand==2?new float[]{1,0,0,0}:new float[]{0,1,0,0};
        for(int i=0;i<21;++i) {
            int p=i*3,q=i*4;
            points[p]=-sign*geometry.points[p];points[p+1]=sign*geometry.points[p+1];points[p+2]=-geometry.points[p+2];
            float[] rotation=BoneAsset.multiply(basis,new float[]{geometry.rotations[q],geometry.rotations[q+1],geometry.rotations[q+2],geometry.rotations[q+3]});
            System.arraycopy(rotation,0,rotations,q,4);
        }
        return model.acceptSolved(sample,points,rotations,nowNs);
    }
    private boolean invalid(StreamSample sample,long nowNs,String message) {
        error=message;return model.acceptSolved(sample,null,null,nowNs);
    }

    /** Rig FK in SDK wrist coordinates; also used to validate this display solver. */
    public synchronized Geometry forward(int hand,Calibration calibration,double[][] angles) {
        Geometry result=new Geometry();result.rotations[3]=1;
        for(int f=0;f<5;++f) fk(rigs[hand-1],f,calibration,angles[f],result);
        return result;
    }
    public static final class Geometry {
        public final float[] points=new float[63], rotations=new float[84];
    }
    private static final class Joint {
        int landmark;
        double[] position,rotation,axis;
        double lower,upper,neutral,weight,temporal;
    }
    private static final class Rig {
        double[] position,rotation;
        Joint[][] fingers=new Joint[5][];
    }
    private static Rig readRig(InputStream stream,int hand) throws IOException {
        try {
            DataInputStream input=new DataInputStream(stream);
            DisplayMath.require(input.readInt()==0x484b494e,"HKIN magic");
            DisplayMath.require(integer(input)==1 && integer(input)==hand,"HKIN version/hand");
            Rig rig=new Rig();rig.position=vector(input,3);rig.rotation=DisplayMath.normalize(vector(input,4));
            for(int f=0;f<5;++f) {
                int n=integer(input);DisplayMath.require(n==(f==0?6:5),"HKIN joints");rig.fingers[f]=new Joint[n];
                for(int i=0;i<n;++i) {
                    Joint j=new Joint();j.landmark=integer(input);j.position=vector(input,3);j.rotation=DisplayMath.normalize(vector(input,4));j.axis=vector(input,3);
                    j.lower=number(input);j.upper=number(input);j.neutral=number(input);j.weight=number(input);j.temporal=number(input);
                    DisplayMath.require(j.landmark>=-1 && j.landmark<21 && j.lower<=j.upper && j.weight>=0 && j.temporal>=0,"HKIN joint data");
                    DisplayMath.require(i==n-1?DisplayMath.norm2(j.axis)==0:Math.abs(DisplayMath.norm2(j.axis)-1)<1e-8,"HKIN axis");
                    if(i>=n-3) DisplayMath.require(Math.abs(j.position[0])+Math.abs(j.position[1])<1e-10 && j.position[2]>0,"HKIN bone length");
                    rig.fingers[f][i]=j;
                }
            }
            DisplayMath.require(input.read()==-1,"HKIN trailing data");return rig;
        } catch(IllegalArgumentException invalid) { throw new IOException("Invalid pose rig",invalid); }
    }
    private static int integer(DataInputStream input) throws IOException { return Integer.reverseBytes(input.readInt()); }
    private static double number(DataInputStream input) throws IOException {
        double result=Double.longBitsToDouble(Long.reverseBytes(input.readLong()));DisplayMath.require(DisplayMath.finite(result),"HKIN nonfinite");return result;
    }
    private static double[] vector(DataInputStream input,int n) throws IOException { double[] result=new double[n];for(int i=0;i<n;++i)result[i]=number(input);return result; }

    /** BONE v4: row-major transforms in metres; finger roots are palm-local. */
    public static final class Calibration {
        public final int hand;
        final double[] txPosition,txRotation;
        final double[][] rxPosition=new double[5][],rxRotation=new double[5][],lengths=new double[5][3],roots=new double[5][3];
        private Calibration(int hand,double[][] tx) { this.hand=hand;txPosition=tx[0];txRotation=tx[1]; }
        public static Calibration read(byte[] bytes,int expectedHand) {
            DisplayMath.require(bytes!=null && bytes.length==547,"BONE size");
            ByteBuffer b=ByteBuffer.wrap(bytes).order(ByteOrder.LITTLE_ENDIAN);
            int version=b.get()&255, hand=(b.get()&255)+1, dummy=b.get()&255, wrist=b.get()&255;
            DisplayMath.require(version==4 && hand<=2 && (expectedHand==0 || expectedHand==hand),"BONE version/hand");
            DisplayMath.require(dummy==0 && wrist<=1 && b.get()==0 && b.get()==0 && b.get()==0,"BONE metadata/dummy fingers");
            Calibration c=new Calibration(hand,transform(b));
            for(int f=0;f<5;++f) { double[][] t=transform(b);c.rxPosition[f]=t[0];c.rxRotation[f]=t[1]; }
            for(int f=0;f<5;++f)for(int axis=0;axis<3;++axis) {
                c.lengths[f][axis]=b.getFloat();DisplayMath.require(DisplayMath.finite(c.lengths[f][axis]) && c.lengths[f][axis]>=.001 && c.lengths[f][axis]<.25,"BONE lengths");
            }
            for(int f=0;f<5;++f)for(int axis=0;axis<3;++axis) {
                c.roots[f][axis]=b.getFloat();DisplayMath.require(DisplayMath.finite(c.roots[f][axis]) && Math.abs(c.roots[f][axis])<.5,"BONE roots");
            }
            for(int i=0;i<9;++i) { float v=b.getFloat();DisplayMath.require(DisplayMath.finite(v) && (wrist!=0 || v==0),"BONE wrist zero"); }
            return c;
        }
        private static double[][] transform(ByteBuffer b) {
            double[] m=new double[16],r=new double[9],p=new double[3];
            for(int i=0;i<16;++i) { m[i]=b.getFloat();DisplayMath.require(DisplayMath.finite(m[i]),"BONE transform"); }
            DisplayMath.require(m[12]==0 && m[13]==0 && m[14]==0 && m[15]==1,"BONE homogeneous row");
            for(int i=0;i<3;++i) {p[i]=m[i*4+3];DisplayMath.require(Math.abs(p[i])<.5,"BONE translation");for(int j=0;j<3;++j)r[i*3+j]=m[i*4+j];}
            for(int i=0;i<3;++i)for(int j=0;j<3;++j) {
                double dot=0;for(int k=0;k<3;++k)dot+=r[i*3+k]*r[j*3+k];DisplayMath.require(Math.abs(dot-(i==j?1:0))<.005,"BONE proper rotation");
            }
            double det=r[0]*(r[4]*r[8]-r[5]*r[7])-r[1]*(r[3]*r[8]-r[5]*r[6])+r[2]*(r[3]*r[7]-r[4]*r[6]);
            DisplayMath.require(Math.abs(det-1)<.005,"BONE reflected rotation");return new double[][]{p,DisplayMath.fromMatrix(r)};
        }
    }

    private static double[][] fk(Rig rig,int f,Calibration c,double[] angles,Geometry geometry) {
        double[] p=rig.position.clone(),q=rig.rotation.clone();Joint[] chain=rig.fingers[f];
        for(int i=0;i<chain.length;++i) {
            Joint j=chain[i];double[] origin=j.position;
            if(c!=null && i>=chain.length-3)origin=new double[]{0,0,c.lengths[f][i-(chain.length-3)]};
            // BONE stores joints[0].origin_translation in the palm parent frame,
            // as encoded by calibration_executor, before wrist_to_glove_base.
            if(c!=null && i==0)origin=c.roots[f];
            p=DisplayMath.add(p,DisplayMath.rotate(q,origin));
            q=DisplayMath.multiply(q,j.rotation);
            if(i<angles.length)q=DisplayMath.multiply(q,DisplayMath.axis(j.axis,angles[i]));
            if(geometry!=null && j.landmark>=0) {
                for(int axis=0;axis<3;++axis)geometry.points[j.landmark*3+axis]=(float)p[axis];
                for(int axis=0;axis<4;++axis)geometry.rotations[j.landmark*4+axis]=(float)q[axis];
            }
        }
        return new double[][]{p,q};
    }
    private static double[] residual(Rig rig,int finger,Calibration c,double[] target,double[] targetQ,double[] q,double[] previous,double temporal) {
        double[][] tip=fk(rig,finger,c,q,null);int n=q.length;
        double[] r=new double[6+n+(temporal>0?n:0)];
        double[] rotation=DisplayMath.logarithm(DisplayMath.multiply(DisplayMath.inverse(targetQ),tip[1]));
        for(int i=0;i<3;++i) {r[i]=1000*(tip[0][i]-target[i]);r[i+3]=20*rotation[i];}
        for(int i=0;i<n;++i) {
            Joint j=rig.fingers[finger][i];r[6+i]=j.weight*(q[i]-j.neutral);
            if(temporal>0)r[6+n+i]=temporal*j.temporal*(q[i]-previous[i]);
        }
        return r;
    }
    private static double[] solve(Rig rig,int finger,Calibration c,double[] target,double[] targetQ,double[] previous,double temporal,double[] errors) {
        double[] q=previous.clone();double damping=.001;boolean success=false;
        double[] r=residual(rig,finger,c,target,targetQ,q,previous,temporal);
        for(int iteration=0;iteration<60;++iteration) {
            int n=q.length;double[][] jac=new double[r.length][n],a=new double[n][n];double[] g=new double[n];
            for(int j=0;j<n;++j) {
                double[] changed=q.clone();double step=q[j]+1e-5<=rig.fingers[finger][j].upper?1e-5:-1e-5;changed[j]+=step;
                double[] probe=residual(rig,finger,c,target,targetQ,changed,previous,temporal);
                for(int row=0;row<r.length;++row)jac[row][j]=(probe[row]-r[row])/step;
            }
            for(int i=0;i<n;++i)for(int row=0;row<r.length;++row) {
                g[i]+=jac[row][i]*r[row];for(int j=0;j<n;++j)a[i][j]+=jac[row][i]*jac[row][j];
            }
            boolean[] active=new boolean[n];double projected=0;
            for(int i=0;i<n;++i) {
                Joint j=rig.fingers[finger][i];active[i]=(q[i]<=j.lower+1e-9 && g[i]>0)||(q[i]>=j.upper-1e-9 && g[i]<0);
                if(!active[i])projected=Math.max(projected,Math.abs(g[i]));a[i][i]+=damping*(1+a[i][i]);
            }
            if(projected<1e-4) {success=true;break;}
            for(int i=0;i<n;++i)if(active[i]) {for(int j=0;j<n;++j)a[i][j]=a[j][i]=0;a[i][i]=1;g[i]=0;}
            for(int i=0;i<n;++i)g[i]=-g[i];double[] step=linear(a,g);if(step==null)return null;
            double max=0;for(double v:step)max=Math.max(max,Math.abs(v));if(max>.5)for(int i=0;i<n;++i)step[i]*=.5/max;
            double[] candidate=q.clone();double distance=0;
            for(int i=0;i<n;++i) {Joint j=rig.fingers[finger][i];candidate[i]=Math.max(j.lower,Math.min(j.upper,q[i]+step[i]));distance+=Math.pow(candidate[i]-q[i],2);}
            double[] next=residual(rig,finger,c,target,targetQ,candidate,previous,temporal);
            double cost=DisplayMath.norm2(r),nextCost=DisplayMath.norm2(next);
            if(nextCost<cost) {q=candidate;r=next;damping=Math.max(1e-8,damping*.3);if(cost-nextCost<1e-6*Math.max(1,cost)){success=true;break;}}
            else damping=Math.min(1e10,damping*4);
            if(distance<1e-10) {success=true;break;}
        }
        // Toolbox displays the converged bounded fit even when magnetic data
        // cannot be matched exactly. Residual magnitude is a display warning,
        // not a whole-hand rejection threshold.
        double positionError=0;for(int i=0;i<3;++i)positionError+=r[i]*r[i];
        errors[finger]=Math.sqrt(positionError);
        return success && DisplayMath.finite(DisplayMath.norm2(r))?q:null;
    }
    private static double[] linear(double[][] a,double[] b) {
        int n=b.length;
        for(int k=0;k<n;++k) {
            int pivot=k;for(int i=k+1;i<n;++i)if(Math.abs(a[i][k])>Math.abs(a[pivot][k]))pivot=i;
            if(Math.abs(a[pivot][k])<1e-12)return null;
            double[] row=a[k];a[k]=a[pivot];a[pivot]=row;double value=b[k];b[k]=b[pivot];b[pivot]=value;
            for(int i=k+1;i<n;++i) {double factor=a[i][k]/a[k][k];for(int j=k;j<n;++j)a[i][j]-=factor*a[k][j];b[i]-=factor*b[k];}
        }
        double[] x=new double[n];for(int i=n-1;i>=0;--i) {double value=b[i];for(int j=i+1;j<n;++j)value-=a[i][j]*x[j];x[i]=value/a[i][i];}return x;
    }
    private static final class EuroFilter {
        boolean ready;double time;double[] raw=new double[6],value=new double[6],derivative=new double[6];
        double[] filter(double[] input,double now) {
            if(!ready || now-time>.5) {ready=true;time=now;raw=input.clone();value=input.clone();derivative=new double[6];return input.clone();}
            double dt=now-time;if(dt<=0)return value.clone();double da=alpha(1,dt);
            for(int i=0;i<6;++i) {
                double unwrapped=input[i];if(i>=3)unwrapped=raw[i]+(input[i]-raw[i]-360*Math.floor((input[i]-raw[i]+180)/360));
                derivative[i]=da*(unwrapped-raw[i])/dt+(1-da)*derivative[i];raw[i]=unwrapped;
                double a=alpha(1+(i<3?45:.07)*Math.abs(derivative[i]),dt);value[i]=a*unwrapped+(1-a)*value[i];
            }
            time=now;return value.clone();
        }
        private static double alpha(double cutoff,double dt) {return 1/(1+1/(2*Math.PI*cutoff*dt));}
    }
}
