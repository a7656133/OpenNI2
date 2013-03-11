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
class VideoFrameRef extends ObjectWrapper{

    private native int getDataSize(long myNativeObject);
    private native long getData(long myNativeObject);
    private native int getSensorType(long myNativeObject);
    private native long getVideoMode(long myNativeObject);
    private native short getTimestamp(long myNativeObject);
    private native int getFrameIndex(long myNativeObject);
    private native int getWidth(long myNativeObject);
    private native int getHeight(long myNativeObject);
    private native boolean getCroppingEnabled(long myNativeObject);
    private native int getCropOriginX(long myNativeObject);
    private native int getCropOriginY(long myNativeObject);
    private native int getStrideInBytes(long myNativeObject);
    private native boolean isValid(long myNativeObject);
    private native void release(long myNativeObject);
    private native long videoFrameRef();

    public VideoFrameRef(long ptr) {
        super(ptr);
    }

public int getDataSize()
{
return getDataSize(myNativeObject());
}

//inline const void* getData() const


public int getSensorType() 
{
return getSensorType(myNativeObject());
}

public  VideoMode getVideoMode()
{
    
return new VideoMode(getVideoMode(myNativeObject()));
}

public short getTimestamp()
{
return getTimestamp(myNativeObject());
}

public int getFrameIndex()
{
return getFrameIndex(myNativeObject());
}

public int getWidth()
{
return getWidth(myNativeObject());
}

public int getHeight()
{
return getHeight(myNativeObject());
}

public boolean getCroppingEnabled()
{
return getCroppingEnabled(myNativeObject());
}
public int getCropOriginX()
{
return getCropOriginX(myNativeObject());
}

public int getCropOriginY(){
    return getCropOriginY(myNativeObject());
}

public int getStrideInBytes(){
    return getStrideInBytes(myNativeObject());
}

public boolean isValid(){
    return isValid(myNativeObject());
}

public void release(){
 release(myNativeObject());
}

    
    
    
    
    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
    
    
}
