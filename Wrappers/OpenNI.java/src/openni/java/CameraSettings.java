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
public class CameraSettings extends ObjectWrapper{
       private native int setAutoExposureEnabled(boolean enabled,long myNativeObject);//Status
       private native int setAutoWhiteBalanceEnabled(boolean enabled,long myNativeObject);//Status
       private native boolean getAutoExposureEnabled(long myNativeObject);
       private native boolean getAutoWhiteBalanceEnabled(long myNativeObject);
       private native boolean isValid(long myNativeObject);
       private native long CameraSettings();

    public CameraSettings() {
     setObjectWrapper(CameraSettings());       
    }    
    public CameraSettings(long CameraSettings) {
        setObjectWrapper(CameraSettings);
    }

    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
      
    
public int setAutoExposureEnabled(boolean enabled){
    return setAutoExposureEnabled(enabled,myNativeObject());
}


public int setAutoWhiteBalanceEnabled(boolean enabled){
  return  setAutoWhiteBalanceEnabled(enabled, myNativeObject());
}

public boolean getAutoExposureEnabled()
{
return getAutoExposureEnabled(myNativeObject());

}
public boolean  getAutoWhiteBalanceEnabled()
{
return getAutoWhiteBalanceEnabled(myNativeObject());
}

public boolean isValid(){
    return isValid(myNativeObject());
}

    

    

   
	
}
