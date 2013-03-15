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
public class Recorder extends ObjectWrapper {

    private native int create(String fileName, long myNativeObject);

    private native boolean isValid(long myNativeObject);

    private static native int attach(long stream, boolean allowLossyCompression, long myNativeObject);

    private native int start(long myNativeObject);

    private native void stop(long myNativeObject);

    private native void destroy(long myNativeObject);

    private native long recorder();

    
    
     public Recorder() {
        setObjectWrapper(recorder());
    }
    public Recorder(long ptr) {
        setObjectWrapper(ptr);
    }

    public int create(String fileName) {
        return create(fileName, myNativeObject());
    }

    public boolean isValid() {
        return isValid(myNativeObject());
    }

    public int attach(VideoStream stream, boolean allowLossyCompression) {
        return attach(stream.myNativeObject(), allowLossyCompression, myNativeObject());
    }

    public int start() {
        return start(myNativeObject());
    }

    void stop() {
        stop(myNativeObject());
    }

    public void destroy(){
      destroy(myNativeObject());
    }

    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
}
