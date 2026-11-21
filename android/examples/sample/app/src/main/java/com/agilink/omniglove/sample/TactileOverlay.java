package com.agilink.omniglove.sample;

import com.agilink.omniglove.StreamSample;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;

/** Toolbox schema-2 points and SDK pressure channels in their stable 746-point order. */
public final class TactileOverlay {
    public static final int COUNT=746;
    private static final int[] COUNTS={38,28,38,28,28,37,28,28,37,28,28,39,28,25,308};
    private static final int[][] PALETTE={{0x33,0x41,0x55},{0x0e,0xa5,0xe9},{0x22,0xd3,0xee},{0x10,0xb9,0x81},
        {0xa3,0xe6,0x35},{0xfa,0xcc,0x15},{0xf9,0x73,0x16},{0xef,0x44,0x44}};
    public final int hand;
    private final float[][] points=new float[15][];
    private final int[] positions=new int[15],rotations=new int[15];
    private TactileOverlay(int hand) {this.hand=hand;}
    public static TactileOverlay read(InputStream stream,int hand) throws IOException {
        try {
            DataInputStream input=new DataInputStream(stream);
            DisplayMath.require(input.readInt()==0x48544143,"HTAC magic");
            DisplayMath.require(integer(input)==1 && integer(input)==hand && integer(input)==COUNT,"HTAC version/hand/count");
            TactileOverlay result=new TactileOverlay(hand);
            for(int module=0;module<15;++module) {
                DisplayMath.require(integer(input)==COUNTS[module],"HTAC module count");
                int p=integer(input),r=integer(input);
                DisplayMath.require(p>=0 && p<21 && r>=0 && r<21 && ((p==0)==(r==0)),"HTAC sources");
                result.positions[module]=p;result.rotations[module]=r;result.points[module]=new float[COUNTS[module]*3];
                for(int i=0;i<result.points[module].length;++i) {
                    float value=Float.intBitsToFloat(integer(input));DisplayMath.require(DisplayMath.finite(value) && Math.abs(value)<.5,"HTAC coordinate");result.points[module][i]=value;
                }
            }
            DisplayMath.require(input.read()==-1,"HTAC trailing data");return result;
        } catch(IllegalArgumentException invalid) {throw new IOException("Invalid tactile layout",invalid);}
    }
    private static int integer(DataInputStream input) throws IOException {return Integer.reverseBytes(input.readInt());}

    /** XYZ in mesh coordinates. Wrist JSON points already contain the nominal rest rotation. */
    public float[] worldPoints(BoneAsset asset,SingleHandModel.Snapshot frame) {
        float[] output=new float[COUNT*3];int offset=0;
        for(int module=0;module<15;++module) {
            int p=positions[module],r=rotations[module];
            float[] q;
            if(r==0) q=hand==2?new float[]{1,0,0,0}:new float[]{0,1,0,0};
            else {
                float[] source=frame.hasPose?frame.rotations:asset.restRotations;
                q=source==null?null:BoneAsset.normalized(new float[]{source[r*4],source[r*4+1],source[r*4+2],source[r*4+3]});
                if(q==null) for(BoneAsset.Part part:asset.parts) if(part.anchor==r) {q=asset.pose(part,frame).rotation;break;}
                if(q==null)return null;
            }
            float[] landmarks=frame.hasPose?frame.points:asset.restPoints;
            for(int i=0;i<points[module].length;i+=3) {
                float[] transformed=BoneAsset.rotate(q,new float[]{points[module][i],points[module][i+1],points[module][i+2]});
                for(int axis=0;axis<3;++axis)output[offset++]=transformed[axis]+(p==0?0:landmarks[p*3+axis]);
            }
        }
        return output;
    }
    public static byte[] flatten(StreamSample.Tactile tactile) {
        if(!tactile.mapped || tactile.count!=COUNT)return null;
        StreamSample.TactileRegion[] regions={tactile.thumb.tip,tactile.thumb.pad,
            tactile.index.tip,tactile.index.pad,tactile.index.root,
            tactile.middle.tip,tactile.middle.pad,tactile.middle.root,
            tactile.ring.tip,tactile.ring.pad,tactile.ring.root,
            tactile.pinky.tip,tactile.pinky.middle,tactile.pinky.root,tactile.palmSurface};
        byte[] values=new byte[COUNT];int offset=0;
        for(int i=0;i<regions.length;++i) {
            StreamSample.TactileRegion region=regions[i];
            // Sparse fingertip grids have holes; data is packed by sensor ID,
            // so its length is smaller than rows*columns for those regions.
            if(region.data.length!=COUNTS[i] || region.rows<=0 || region.columns<=0 || (long)region.rows*region.columns<COUNTS[i])return null;
            System.arraycopy(region.data,0,values,offset,COUNTS[i]);offset+=COUNTS[i];
        }
        return values;
    }
    public static float[] color(int value) {
        if(value<0)return new float[]{0x64/255f,0x74/255f,0x8b/255f};
        int[] color=PALETTE[value==0?0:Math.min(7,(Math.min(255,value)*8-1)/255)];
        return new float[]{color[0]/255f,color[1]/255f,color[2]/255f};
    }
    public static final class Pressure {
        private byte[] values;
        private int hand;
        private long generation,sequence,device,receivedAtNs;
        private boolean seen;
        public synchronized void select(int hand) {this.hand=hand;values=null;seen=false;}
        public synchronized boolean accept(StreamSample sample,long nowNs) {
            if(sample.pose==null || (sample.hand!=1 && sample.hand!=2) || (hand!=0 && hand!=sample.hand))return false;
            if(seen && (device!=sample.deviceId || unsignedLess(sample.connectionGeneration,generation) ||
                (generation==sample.connectionGeneration && !unsignedLess(sequence,sample.sourceSequence))))return false;
            values=sample.pose.mapped && (sample.pose.components&1)!=0?flatten(sample.pose.tactile):null;
            hand=sample.hand;device=sample.deviceId;generation=sample.connectionGeneration;sequence=sample.sourceSequence;receivedAtNs=nowNs;seen=true;return true;
        }
        public synchronized byte[] current(int hand,long generation,long nowNs) {
            return this.hand==hand && this.generation==generation && nowNs-receivedAtNs<1_000_000_000L?values:null;
        }
        private static boolean unsignedLess(long a,long b) {return (a^Long.MIN_VALUE)<(b^Long.MIN_VALUE);}
    }
}
