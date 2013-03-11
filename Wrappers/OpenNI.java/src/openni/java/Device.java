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
class Device extends ObjectWrapper{
    //all int return Status
        private native int open(String uri,long myNativeObject);
        private native void close(long myNativeObject);
        private native long getDeviceInfo(long myNativeObject);
        private native  boolean hasSensor(int sensorType,long myNativeObject);
        private native long getSensorInfo(int sensorType,long myNativeObject);
        private native long getPlaybackControl(long myNativeObject);
       private native int setProperty(int propertyId,long data, int dataSize,long myNativeObject);
       private native boolean isImageRegistrationModeSupported( int mode,long myNativeObject);//imageregistatrationmode
       private native  int getImageRegistrationMode(long myNativeObject); //imageregistrationmode
       private native int setImageRegistrationMode( int mode,long myNativeObject);//imageregistrationmode
       private native boolean isValid(long myNativeObject);
       private native boolean isFile(long myNativeObject);
       private native int setDepthColorSyncEnabled(boolean isEnabled,long myNativeObject);
       private native boolean isPropertySupported(int propertyId,long myNativeObject);
       private native int invoke(int commandId, long data, int dataSize,long myNativeObject);
       private native boolean isCommandSupported(int commandId,long myNativeObject);
       private native long Device();

    public Device(long ptr) {
        super(ptr);
    }
      
    
public int open(String uri){
    return open(uri,myNativeObject());
}

public void close(){
    close(myNativeObject());
    
}
public  DeviceInfo getDeviceInfo(){
    long object=getDeviceInfo(myNativeObject());
    DeviceInfo devInfo=new DeviceInfo(object);
    return devInfo;
}
public boolean hasSensor(int sensorType){
    return hasSensor(sensorType,myNativeObject());
}
public PlaybackControl getPlaybackControl() 
{
    long object=getPlaybackControl(myNativeObject());
    PlaybackControl pbControl=new PlaybackControl(object);
    return pbControl;
}
//Status getProperty(int propertyId, void* data, int* dataSize){ //no implemented

//Status setProperty(int propertyId, const void* data, int dataSize)

public boolean isImageRegistrationModeSupported(int ImageRegistrationMode){
    return isImageRegistrationModeSupported(ImageRegistrationMode,myNativeObject());
}
public  int getImageRegistrationMode(){
    return getImageRegistrationMode(myNativeObject());
    
}
public int setImageRegistrationMode(int imageRegistrationMode){
    return setImageRegistrationMode(imageRegistrationMode,myNativeObject());
}
public boolean isValid(){
   return isValid(myNativeObject());
}
public boolean isFile(){
    return isFile(myNativeObject());
}
public int setDepthColorSyncEnabled(boolean isEnabled){
   return setDepthColorSyncEnabled(isEnabled, myNativeObject()); 
}
public boolean isPropertySupported(int propertyId){
   return isPropertySupported(propertyId,myNativeObject()); 
}
//public int  invoke(int commandId, const void* data, int dataSize){
    

public boolean isCommandSupported(int commandId){
    return isCommandSupported(commandId,myNativeObject());
}

    
    
    
    
    
    
    
    
    
    
    
    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
       
       

       
}
