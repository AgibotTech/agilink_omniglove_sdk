package com.agilink.omniglove.sample;

import android.content.Context;
import android.opengl.GLES20;
import android.opengl.GLSurfaceView;
import android.opengl.Matrix;
import android.view.MotionEvent;
import android.view.ScaleGestureDetector;
import com.agilink.omniglove.StreamSample;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/** One glove, optionally shown as independently driven POST and POSE viewports. */
public final class HandModelView extends GLSurfaceView {
    private final SingleHandModel model = new SingleHandModel();
    private final PoseHandModel poseModel;
    private final TactileOverlay.Pressure pressure = new TactileOverlay.Pressure();
    private final OrbitCamera camera = new OrbitCamera();
    private final HandRenderer renderer = new HandRenderer();
    private final ScaleGestureDetector scaleDetector;
    private float touchX, touchY;
    private long lastRenderNs, epoch;
    private volatile Options options = new Options(false, false);
    private volatile String poseError = "等待手套连接";

    public static final class Options {
        public final boolean comparison, tactile;
        private Options(boolean comparison, boolean tactile) { this.comparison=comparison; this.tactile=tactile; }
    }
    public HandModelView(Context context) {
        super(context);
        try (InputStream left=context.getAssets().open("hand_display/pose_left.bin");
             InputStream right=context.getAssets().open("hand_display/pose_right.bin")) {
            poseModel=new PoseHandModel(left,right);
        } catch (IOException failure) { throw new IllegalStateException("Cannot load comparison rig",failure); }
        setEGLContextClientVersion(2);
        setEGLConfigChooser(8, 8, 8, 0, 16, 0);
        setRenderer(renderer);
        setRenderMode(RENDERMODE_WHEN_DIRTY);
        scaleDetector = new ScaleGestureDetector(context, new ScaleGestureDetector.SimpleOnScaleGestureListener() {
            @Override public boolean onScale(ScaleGestureDetector detector) {
                camera.scale(detector.getScaleFactor()); requestRender(); return true;
            }
        });
        setContentDescription("手部模型，拖动旋转，双指或滚轮缩放");
    }
    public synchronized void select(int hand, long sessionEpoch) {
        epoch=sessionEpoch; lastRenderNs=0; model.select(hand); poseModel.select(hand); pressure.select(hand);
        poseError=hand==0?"等待手套连接":"等待设备标定"; requestRender();
    }
    public Options options() { return options; }
    public synchronized void setComparison(boolean enabled) {
        if(enabled && !options.comparison) poseModel.clearPose();
        options=new Options(enabled,enabled?false:options.tactile); requestRender();
    }
    public synchronized void setTactile(boolean enabled) {
        options=new Options(options.comparison,enabled && !options.comparison); requestRender();
    }
    public SingleHandModel.Snapshot snapshot() { return model.snapshot(); }
    public SingleHandModel.Snapshot poseSnapshot() { return poseModel.snapshot(); }
    public float[] cameraSnapshot() { return camera.snapshot(); }
    public String poseError() { String message=poseError;return message.isEmpty()?poseModel.error():message; }
    public synchronized boolean needsBone(long generation) { return options.comparison && !poseModel.hasCalibration(generation); }
    public synchronized void bindBone(byte[] bytes,int hand,long generation,long sessionEpoch) {
        if(epoch!=sessionEpoch)return;
        poseModel.bind(bytes,hand,generation); poseError=""; requestRender();
    }
    public synchronized void boneError(String message,long sessionEpoch) { if(epoch==sessionEpoch)poseError=message; }
    public synchronized void submit(StreamSample sample, long sessionEpoch) {
        if (sessionEpoch != epoch) return;
        long now=System.nanoTime(); boolean changed=false;
        if(sample.kind==3) changed=model.accept(sample,now);
        else if(sample.kind==2) {
            changed=pressure.accept(sample,now);
            if(options.comparison)changed=poseModel.accept(sample,now)||changed;
        }
        if(changed && now-lastRenderNs>=33_333_333L) {lastRenderNs=now;requestRender();}
    }
    @Override public boolean onTouchEvent(MotionEvent event) {
        scaleDetector.onTouchEvent(event);
        int action=event.getActionMasked();
        if(action==MotionEvent.ACTION_DOWN) {
            getParent().requestDisallowInterceptTouchEvent(true);
            touchX=event.getX();touchY=event.getY();return true;
        }
        if(action==MotionEvent.ACTION_POINTER_DOWN || action==MotionEvent.ACTION_POINTER_UP) {
            int index=action==MotionEvent.ACTION_POINTER_UP && event.getActionIndex()==0?1:0;
            touchX=event.getX(index);touchY=event.getY(index);return true;
        }
        if(action==MotionEvent.ACTION_MOVE) {
            if(event.getPointerCount()==1 && !scaleDetector.isInProgress()) {
                camera.drag(event.getX()-touchX,event.getY()-touchY);requestRender();
            }
            touchX=event.getX();touchY=event.getY();return true;
        }
        if(action==MotionEvent.ACTION_UP || action==MotionEvent.ACTION_CANCEL) {
            getParent().requestDisallowInterceptTouchEvent(false);
            if(action==MotionEvent.ACTION_UP)performClick();return true;
        }
        return true;
    }
    @Override public boolean onGenericMotionEvent(MotionEvent event) {
        if(event.getActionMasked()==MotionEvent.ACTION_SCROLL) {
            camera.scale((float)Math.pow(1.12,event.getAxisValue(MotionEvent.AXIS_VSCROLL)));requestRender();return true;
        }
        return super.onGenericMotionEvent(event);
    }
    @Override public boolean performClick() { super.performClick(); return true; }

    private final class HandRenderer implements Renderer {
        private int width,height;
        private int program,position,normal,modelUniform,mvpUniform,colorUniform,scaleUniform;
        private int dotProgram,dotPosition,dotColor,dotMvp,dotPixels;
        private final float[] projection=new float[16],view=new float[16],scene=new float[16];
        private final float[] transform=new float[16],world=new float[16],mvp=new float[16],pv=new float[16];
        private final FloatBuffer dots=ByteBuffer.allocateDirect(TactileOverlay.COUNT*24).order(ByteOrder.nativeOrder()).asFloatBuffer();
        private BoneAsset left,right;
        private TactileOverlay tactileLeft,tactileRight;
        private SingleHandModel.Snapshot cachedFrame;
        private float[] cachedPoints;

        @Override public void onSurfaceCreated(GL10 ignored,EGLConfig config) {
            String vertex="uniform mat4 uModel; uniform mat4 uMvp; uniform vec3 uScale; attribute vec3 aPosition; attribute vec3 aNormal; varying vec3 vNormal; void main(){vNormal=mat3(uModel)*(aNormal/uScale); gl_Position=uMvp*vec4(aPosition*uScale,1.0);}";
            String fragment="precision mediump float; uniform vec3 uColor; varying vec3 vNormal; void main(){vec3 n=normalize(vNormal); float light=0.35+0.55*max(dot(n,normalize(vec3(-0.4,0.85,0.5))),0.0)+0.10*max(dot(n,normalize(vec3(0.5,-0.4,0.3))),0.0); gl_FragColor=vec4(uColor*light,1.0);}";
            program=program(vertex,fragment);
            position=GLES20.glGetAttribLocation(program,"aPosition");normal=GLES20.glGetAttribLocation(program,"aNormal");
            modelUniform=GLES20.glGetUniformLocation(program,"uModel");mvpUniform=GLES20.glGetUniformLocation(program,"uMvp");
            colorUniform=GLES20.glGetUniformLocation(program,"uColor");scaleUniform=GLES20.glGetUniformLocation(program,"uScale");
            dotProgram=program("uniform mat4 uMvp; uniform float uPixels; attribute vec3 aPosition; attribute vec3 aColor; varying vec3 vColor; void main(){gl_Position=uMvp*vec4(aPosition,1.0);gl_PointSize=clamp(uPixels/max(.01,gl_Position.w),2.5,12.0);vColor=aColor;}",
                "precision mediump float; varying vec3 vColor; void main(){float r=length(gl_PointCoord-vec2(.5));if(r>.5)discard;gl_FragColor=vec4(r>.39?vec3(.97,.98,.99):vColor,1.0);}");
            dotPosition=GLES20.glGetAttribLocation(dotProgram,"aPosition");dotColor=GLES20.glGetAttribLocation(dotProgram,"aColor");
            dotMvp=GLES20.glGetUniformLocation(dotProgram,"uMvp");dotPixels=GLES20.glGetUniformLocation(dotProgram,"uPixels");
            if(left==null) {left=loadBone("left");right=loadBone("right");tactileLeft=loadTactile("left",1);tactileRight=loadTactile("right",2);}
            GLES20.glEnable(GLES20.GL_DEPTH_TEST);GLES20.glDisable(GLES20.GL_CULL_FACE);
            GLES20.glClearColor(.045f,.067f,.105f,1);
        }
        private BoneAsset loadBone(String hand) {
            try(InputStream stream=getContext().getAssets().open("hand_bones/"+hand+".bin")) {return BoneAsset.read(stream);}
            catch(IOException failure) {throw new IllegalStateException("Cannot load hand bones",failure);}
        }
        private TactileOverlay loadTactile(String name,int hand) {
            try(InputStream stream=getContext().getAssets().open("hand_display/tactile_"+name+".bin")) {return TactileOverlay.read(stream,hand);}
            catch(IOException failure) {throw new IllegalStateException("Cannot load tactile points",failure);}
        }
        @Override public void onSurfaceChanged(GL10 ignored,int width,int height) {this.width=width;this.height=height;}
        @Override public void onDrawFrame(GL10 ignored) {
            GLES20.glClear(GLES20.GL_COLOR_BUFFER_BIT|GLES20.GL_DEPTH_BUFFER_BIT);
            SingleHandModel.Snapshot post=model.snapshot(),pose=poseModel.snapshot();Options mode=options;
            int hand=post.hand!=0?post.hand:mode.comparison?pose.hand:0;
            if(hand==0)return;
            BoneAsset asset=hand==2?right:left;
            int viewportWidth=mode.comparison?width/2:width;
            float aspect=(float)viewportWidth/Math.max(height,1);
            Matrix.perspectiveM(projection,0,40,aspect,.01f,10);
            float[] bounds={-.035f,.035f,-.015f,.015f,-.015f,0};
            bounds(bounds,post.hasPose?post.points:asset.restPoints);
            if(mode.comparison)bounds(bounds,pose.hasPose?pose.points:asset.restPoints);
            float extent=Math.max(.18f,Math.max(bounds[5]-bounds[4],(bounds[1]-bounds[0])/Math.max(.25f,aspect)));
            float[] orbit=camera.snapshot();float distance=extent*1.9f*orbit[2];
            Matrix.setLookAtM(view,0,0,distance,0,0,0,0,0,0,1);Matrix.multiplyMM(pv,0,projection,0,view,0);
            Matrix.setIdentityM(scene,0);Matrix.rotateM(scene,0,orbit[1],1,0,0);Matrix.rotateM(scene,0,orbit[0],0,0,1);
            Matrix.translateM(scene,0,-(bounds[0]+bounds[1])/2,-(bounds[2]+bounds[3])/2,-(bounds[4]+bounds[5])/2);
            GLES20.glViewport(0,0,viewportWidth,height);drawBones(asset,post);
            if(mode.tactile && !mode.comparison)drawTactile(hand==2?tactileRight:tactileLeft,asset,post);
            if(mode.comparison) {
                GLES20.glViewport(viewportWidth,0,width-viewportWidth,height);drawBones(asset,pose);
                GLES20.glEnable(GLES20.GL_SCISSOR_TEST);GLES20.glScissor(viewportWidth-1,0,2,height);
                GLES20.glClearColor(.22f,.28f,.35f,1);GLES20.glClear(GLES20.GL_COLOR_BUFFER_BIT);
                GLES20.glClearColor(.045f,.067f,.105f,1);GLES20.glDisable(GLES20.GL_SCISSOR_TEST);
            }
        }
        private void bounds(float[] bounds,float[] points) {
            for(int i=0;i<points.length;i+=3)for(int axis=0;axis<3;++axis) {
                bounds[axis*2]=Math.min(bounds[axis*2],points[i+axis]);bounds[axis*2+1]=Math.max(bounds[axis*2+1],points[i+axis]);
            }
        }
        private void drawBones(BoneAsset asset,SingleHandModel.Snapshot frame) {
            float brightness=frame.isFresh(System.nanoTime())?1:.60f;GLES20.glUseProgram(program);
            for(BoneAsset.Part part:asset.parts) {
                if(part.forearm)continue;
                BoneAsset.Pose pose=asset.pose(part,frame);rotationMatrix(transform,pose.rotation,pose.position);
                Matrix.multiplyMM(world,0,scene,0,transform,0);Matrix.multiplyMM(mvp,0,pv,0,world,0);
                GLES20.glUniformMatrix4fv(modelUniform,1,false,world,0);GLES20.glUniformMatrix4fv(mvpUniform,1,false,mvp,0);
                GLES20.glUniform3f(scaleUniform,1,1,pose.lengthScale);GLES20.glUniform3f(colorUniform,.914f*brightness,.847f*brightness,.722f*brightness);
                part.vertices.position(0);GLES20.glVertexAttribPointer(position,3,GLES20.GL_FLOAT,false,24,part.vertices);
                part.vertices.position(3);GLES20.glVertexAttribPointer(normal,3,GLES20.GL_FLOAT,false,24,part.vertices);
                GLES20.glEnableVertexAttribArray(position);GLES20.glEnableVertexAttribArray(normal);
                part.indices.position(0);GLES20.glDrawElements(GLES20.GL_TRIANGLES,part.indexCount,GLES20.GL_UNSIGNED_SHORT,part.indices);
            }
            GLES20.glDisableVertexAttribArray(position);GLES20.glDisableVertexAttribArray(normal);
        }
        private void drawTactile(TactileOverlay layout,BoneAsset asset,SingleHandModel.Snapshot frame) {
            if(cachedFrame!=frame) {cachedFrame=frame;cachedPoints=layout.worldPoints(asset,frame);}
            if(cachedPoints==null)return;
            byte[] values=frame.isFresh(System.nanoTime())?pressure.current(frame.hand,frame.generation,System.nanoTime()):null;
            dots.clear();
            for(int i=0;i<TactileOverlay.COUNT;++i) {
                dots.put(cachedPoints,i*3,3);dots.put(TactileOverlay.color(values==null?-1:values[i]&255));
            }
            GLES20.glUseProgram(dotProgram);Matrix.multiplyMM(mvp,0,pv,0,scene,0);
            GLES20.glUniformMatrix4fv(dotMvp,1,false,mvp,0);GLES20.glUniform1f(dotPixels,(float)(.0013*height/(2*Math.tan(Math.toRadians(20)))));
            dots.position(0);GLES20.glVertexAttribPointer(dotPosition,3,GLES20.GL_FLOAT,false,24,dots);
            dots.position(3);GLES20.glVertexAttribPointer(dotColor,3,GLES20.GL_FLOAT,false,24,dots);
            GLES20.glEnableVertexAttribArray(dotPosition);GLES20.glEnableVertexAttribArray(dotColor);
            // Match the toolbox overlay: dots remain visible over bones, including the far side.
            GLES20.glDisable(GLES20.GL_DEPTH_TEST);GLES20.glDrawArrays(GLES20.GL_POINTS,0,TactileOverlay.COUNT);GLES20.glEnable(GLES20.GL_DEPTH_TEST);
            GLES20.glDisableVertexAttribArray(dotPosition);GLES20.glDisableVertexAttribArray(dotColor);
        }
    }
    private static int program(String vertex,String fragment) {
        int vs=shader(GLES20.GL_VERTEX_SHADER,vertex),fs=shader(GLES20.GL_FRAGMENT_SHADER,fragment),program=GLES20.glCreateProgram();
        GLES20.glAttachShader(program,vs);GLES20.glAttachShader(program,fs);GLES20.glLinkProgram(program);GLES20.glDeleteShader(vs);GLES20.glDeleteShader(fs);
        int[] status=new int[1];GLES20.glGetProgramiv(program,GLES20.GL_LINK_STATUS,status,0);
        if(status[0]==0)throw new IllegalStateException(GLES20.glGetProgramInfoLog(program));return program;
    }
    private static int shader(int type,String source) {
        int shader=GLES20.glCreateShader(type);GLES20.glShaderSource(shader,source);GLES20.glCompileShader(shader);
        int[] status=new int[1];GLES20.glGetShaderiv(shader,GLES20.GL_COMPILE_STATUS,status,0);
        if(status[0]==0)throw new IllegalStateException(GLES20.glGetShaderInfoLog(shader));return shader;
    }
    private static void rotationMatrix(float[] m,float[] q,float[] p) {
        float x=q[0],y=q[1],z=q[2],w=q[3];Matrix.setIdentityM(m,0);
        m[0]=1-2*(y*y+z*z);m[1]=2*(x*y+z*w);m[2]=2*(x*z-y*w);
        m[4]=2*(x*y-z*w);m[5]=1-2*(x*x+z*z);m[6]=2*(y*z+x*w);
        m[8]=2*(x*z+y*w);m[9]=2*(y*z-x*w);m[10]=1-2*(x*x+y*y);m[12]=p[0];m[13]=p[1];m[14]=p[2];
    }
}
