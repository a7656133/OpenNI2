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
public class OpenNI {
    //all int return status
      private  static native   int initialize();
      private  static native  void shutdown();
      private  static native long getVersion();
      private  static native String getExtendedError();
      private  static native  void enumerateDevices(long deviceInfoList);
      private  static native   int waitForAnyStream(long pStreams, int streamCount, int pReadyStreamIndex, int timeout);
       
      private  static native   int addDeviceConnectedListener(DeviceConnectedListener pListener);
      private  static native   int addDeviceDisconnectedListener(DeviceDisconnectedListener pListener);
      private  static native   int addDeviceStateChangedListener(DeviceStateChangedListener pListener);
      private  static native void removeDeviceConnectedListener(DeviceConnectedListener pListener);
      private  static native void removeDeviceDisconnectedListener(DeviceDisconnectedListener pListener);
      private  static native void removeDeviceStateChangedListener(DeviceStateChangedListener pListener);   

      
      
      
    private static class DeviceConnectedListener {

        public DeviceConnectedListener() {
        }
    }

    private static class DeviceDisconnectedListener {

        public DeviceDisconnectedListener() {
        }
    }

    private static class DeviceStateChangedListener {

        public DeviceStateChangedListener() {
        }
    }
}
