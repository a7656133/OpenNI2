/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package openni.java;

/**
 *
 * @author clebeson
 */
class DeviceInfo extends ObjectWrapper{
    private native String getUri(long myNativeObject);
    private native String getVendor(long myNativeObject);
    private native String getName(long myNativeObject);
    private native short getUsbVendorId(long myNativeObject);
    private native short getUsbProductId(long myNativeObject);
    private native long deviceInfo();

    public DeviceInfo() {
      setObjectWrapper(deviceInfo());  
    }

    
    public  DeviceInfo(long ptr) {
        setObjectWrapper(ptr);
    }

    
 public  String  getUri()  {
     return getUri(myNativeObject());
 }
public String getVendor() {
 return getVendor(myNativeObject());   
}
public String getName(){
    return getName(myNativeObject());
}
public short getUsbVendorId(){
    return getUsbVendorId(myNativeObject());
}
public short getUsbProductId(){
    return getUsbProductId(myNativeObject());
}

    
    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
    
}
