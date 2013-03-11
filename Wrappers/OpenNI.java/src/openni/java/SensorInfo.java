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
class SensorInfo extends ObjectWrapper{
   private native int getSensorType(long myNativeObject);
    private native long getSupportedVideoModes(long myNativeObject); 

    public SensorInfo(long ptr) {
        super(ptr);
    }
  
public int  getSensorType(){ 
    return getSensorType(myNativeObject());
}
public Array<VideoMode> getSupportedVideoModes(){
    long ptr=getSupportedVideoModes(myNativeObject());
    Array<VideoMode> array=new Array<VideoMode>(ptr);
    return array;
}

    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
}
