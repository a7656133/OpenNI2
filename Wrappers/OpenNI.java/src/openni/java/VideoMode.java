/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package openni.java;
import openni.java.JavaTypes.*;
/**
 *
 * @author clebeson
 */
class VideoMode extends ObjectWrapper{
   //VideoMode
    private native int getPixelFormat(long myNativeObject);
    private native int getResolutionX(long myNativeObject);
    private native int getResolutionY(long myNativeObject);
    private native int getFps(long myNativeObject);
    private native void setPixelFormat(int format,long myNativeObject);
    private native void setResolution(int resolutionX, int resolutionY,long myNativeObject);
    private native void setFps(int fps,long myNativeObject); 
    private native long videoMode();
    
    public VideoMode() {
        setObjectWrapper(videoMode());
    }
    public VideoMode(long ptr) {
        setObjectWrapper(ptr);
    }

    
public int getPixelFormat(){
    return getPixelFormat(myNativeObject());
}

public int getResolutionX(){
 return getResolutionX(myNativeObject());   
} 

        public int getResolutionY(){
    return getResolutionY(myNativeObject());
}

public int getFps() {
   return getFps(myNativeObject()); 
}

public void setPixelFormat(int pixelFormat) { 
setPixelFormat(pixelFormat,myNativeObject());
}

public void setResolution(int resolutionX, int resolutionY)
{
setResolution(resolutionX, resolutionY, myNativeObject());
}
public void setFps(int fps) { 
setFps(fps,myNativeObject());
}

    
    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
    
    
}
