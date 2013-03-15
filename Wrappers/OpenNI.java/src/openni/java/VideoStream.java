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
class VideoStream  extends ObjectWrapper{
     //VideoStream
        private  native boolean isValid(long myNativeObject);
        private  native   int create(long device,  int  sensorType,long myNativeObject);
        private  native  void destroy(long myNativeObject);
        private  native long getSensorInfo(long myNativeObject);
        private  native  int start(long myNativeObject);
        private  native void stop(long myNativeObject);
        private  native  int readFrame(long pFrame,long myNativeObject);
        private  native long getCameraSettings(long myNativeObject);
        private  native  int getProperty(int propertyId, long data, int dataSize,long myNativeObject);
        private  native  int setProperty(int propertyId, long data, int dataSize,long myNativeObject);
        private  native long getVideoMode(long myNativeObject);
        private  native  int setVideoMode(long videoMode,long myNativeObject);
        private  native int getMaxPixelValue(long myNativeObject);
        private  native int getMinPixelValue(long myNativeObject);
        private  native boolean isCroppingSupported(long myNativeObject);
        private  native boolean getCropping(int pOriginX, int pOriginY, int pWidth, int pHeight,long myNativeObject);
        private  native  int setCropping(int originX, int originY, int width, int height,long myNativeObject);
        private  native  int resetCropping(long myNativeObject);
        private  native boolean getMirroringEnabled(long myNativeObject);
        private  native  int setMirroringEnabled(boolean isEnabled,long myNativeObject);
        private  native float getHorizontalFieldOfView(long myNativeObject);
        private  native float getVerticalFieldOfView(long myNativeObject);
        private  native boolean isPropertySupported(int propertyId,long myNativeObject);
        private  native  int invoke(int commandId, long data, int dataSize,long myNativeObject);
        private  native boolean isCommandSupported(int commandId,long myNativeObject);
        private native long Videotream();

    public VideoStream() {
        setObjectWrapper(Videotream());
    }
    public VideoStream(long ptr) {
        setObjectWrapper(ptr);
    }

      
    
public boolean isValid(){
    return isValid(myNativeObject());
}

public int create(Device device, int sensorType){
   return create(device.myNativeObject(), sensorType,myNativeObject());
}
public void destroy(){
    destroy(myNativeObject());
}

public int start(){
 return start(myNativeObject());   
}

public void stop(){
 stop(myNativeObject());   
}

public int readFrame(VideoFrameRef pFrame){
        return readFrame(pFrame.myNativeObject(),myNativeObject());
        }

public CameraSettings getCameraSettings() {
    
return new CameraSettings(getCameraSettings(myNativeObject()));
}

//public int  getProperty(int propertyId, void* data, int* dataSize){
    

//Status setProperty(int propertyId, const void* data, int dataSize)

public VideoMode getVideoMode(){
   return new VideoMode(getVideoMode(myNativeObject()));
}

public int setVideoMode(VideoMode videoMode){
    return setVideoMode(videoMode.myNativeObject(),myNativeObject());
}
public int getMaxPixelValue(){
  return getMaxPixelValue(myNativeObject());  
}

public int getMinPixelValue(){
    return getMinPixelValue(myNativeObject());
}

public boolean isCroppingSupported(){
    return isCroppingSupported(myNativeObject());
}

public boolean getCropping(int pOriginX, int pOriginY, int pWidth, int pHeight){
return getCropping(pOriginX, pOriginY, pWidth, pHeight, myNativeObject());
}

public int setCropping(int originX, int originY, int width, int height){
    return  setCropping(originX, originY, width, height, myNativeObject());
}

public int resetCropping(){
    return resetCropping(myNativeObject());
}

public boolean getMirroringEnabled(){
  return getMirroringEnabled(myNativeObject());  
}
public int setMirroringEnabled(boolean isEnabled){
    return setMirroringEnabled(isEnabled,myNativeObject());
}

public float getHorizontalFieldOfView(){
    return getHorizontalFieldOfView(myNativeObject());
}

public float getVerticalFieldOfView(){
    return getVerticalFieldOfView(myNativeObject());
}

public boolean isPropertySupported(int propertyId){
    return isPropertySupported(propertyId,myNativeObject());
}

//public int invoke(int commandId, void* data, int dataSize)


public boolean isCommandSupported(int commandId){
    return isCommandSupported(commandId,myNativeObject());  
}
        
    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
}
