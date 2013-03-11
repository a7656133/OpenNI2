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
class PlaybackControl extends ObjectWrapper{
       private native  float getSpeed(long myNativeObject);
       private native  int setSpeed(float speed,long myNativeObject);//status
       private native boolean getRepeatEnabled(long myNativeObject);
       private native  int setRepeatEnabled(boolean repeat,long myNativeObject); //status
       private native  int seek(long stream, int frameIndex,long myNativeObject);//status
       private native int getNumberOfFrames(long stream,long myNativeObject);
       private native boolean isValid(long myNativeObject);
  //     private native long PlaybackControl(long pDevice); 
       
    public PlaybackControl(long ptr) {
        super(ptr);
    }
       
    
public float getSpeed(){
     return getSpeed(myNativeObject());   
    }
public int   setSpeed(float speed){
    return setSpeed(speed,myNativeObject());
}
public boolean getRepeatEnabled(){
    return getRepeatEnabled(myNativeObject());
}
public int   setRepeatEnabled(boolean repeat){
    return setRepeatEnabled(repeat,myNativeObject());
}
public int   seek(VideoStream stream, int frameIndex){
    return seek(stream.myNativeObject(),frameIndex,myNativeObject());
}
public int getNumberOfFrames(VideoStream stream){
  return getNumberOfFrames(stream.myNativeObject(), myNativeObject());  
}
public boolean isValid(){
    return isValid(myNativeObject());
}

       
	

    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
}
