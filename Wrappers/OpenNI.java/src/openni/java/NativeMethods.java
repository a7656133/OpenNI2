/*
 To change this template, choose Tools | Templates
 and open the template in the editor.
 */
package openni.java;

import openni.java.JavaTypes.*;

/*
 
 @author clebeson
 */
public class NativeMethods {
  
    //VideoMode
    static native PixelFormat getPixelFormat();
    static native int getResolutionX();;
    static native int getResolutionY() ;
    static native int getFps();
    static native void setPixelFormat(PixelFormat format);
    static native void setResolution(int resolutionX, int resolutionY);
    static native void setFps(int fps);
    
    //SensorInfo
    static native SensorType getSensorType() ;
    static native Array<VideoMode> getSupportedVideoModes() ;
	
    //DeviceInfo
    static native String getUri();
    static native String getVendor();
    static native String getName();
    static native short getUsbVendorId();
    static native short getUsbProductId();
    
    
    //VideoFrameRef    
    static native  int getDataSize();
    static native void getData();
    static native SensorType VFR_getSensorType();
    static native VideoMode getVideoMode();
    static native short getTimestamp();
        static native  int getFrameIndex();
        static native  int getWidth() ;
        static native  int getHeight();
        static native  boolean getCroppingEnabled();
        static native  int getCropOriginX();
        static native  int getCropOriginY();
        static native  int getStrideInBytes();
        static native  boolean isValid();
        static native void release();

        
        
        
        
        //VideoStream
        static native boolean VS_isValid();
        static native  Status create(Device device, SensorType sensorType);
        static native  void destroy();
        static native SensorInfo getSensorInfo();
        static native Status start();
        static native void stop();
        static native Status readFrame(VideoFrameRef pFrame);
        static native CameraSettings getCameraSettings();
        static native Status getProperty(int propertyId, long data, int dataSize);
        static native Status setProperty(int propertyId, long data, int dataSize);
        static native VideoMode VS_getVideoMode();
        static native Status setVideoMode(VideoMode videoMode);
        static native int getMaxPixelValue();
        static native int getMinPixelValue();
        static native boolean isCroppingSupported();
        static native boolean getCropping(int pOriginX, int pOriginY, int pWidth, int pHeight);
        static native Status setCropping(int originX, int originY, int width, int height);
        static native Status resetCropping();
        static native boolean getMirroringEnabled();
        static native Status setMirroringEnabled(boolean isEnabled);
        static native float getHorizontalFieldOfView();
        static native float getVerticalFieldOfView();
        static native boolean isPropertySupported(int propertyId);
        static native Status invoke(int commandId, long data, int dataSize);
        static native boolean isCommandSupported(int commandId);
        
        
        //Device
        
	static native Status open(String uri);
        static native void close();
        static native DeviceInfo getDeviceInfo();
        static native  boolean hasSensor(SensorType sensorType);
        static native SensorInfo getSensorInfo(SensorType sensorType);
        static native PlaybackControl getPlaybackControl();
       static native Status D_setProperty(int propertyId,long data, int dataSize);
       static native boolean isImageRegistrationModeSupported(ImageRegistrationMode mode);
       static native ImageRegistrationMode getImageRegistrationMode();
       static native Status setImageRegistrationMode(ImageRegistrationMode mode);
       static native boolean D_isValid();
       static native boolean isFile();
       static native Status setDepthColorSyncEnabled(boolean isEnabled);
       static native boolean D_isPropertySupported(int propertyId);
       static native Status D_invoke(int commandId, long data, int dataSize);
       static native boolean D_isCommandSupported(int commandId);
       
       
       
       
       //PlaybackControl
       static native  float getSpeed();
       static native Status setSpeed(float speed);
       static native boolean getRepeatEnabled();
       static native Status setRepeatEnabled(boolean repeat);
       static native Status seek(VideoStream stream, int frameIndex);
       static native int getNumberOfFrames(VideoStream stream);
       static native boolean PC_isValid();
       static native Status attach(Device device);
       static native void detach();
	

     //CameraSettings
       static native Status setAutoExposureEnabled(boolean enabled);
       static native Status setAutoWhiteBalanceEnabled(boolean enabled);
       static native boolean getAutoExposureEnabled();
       static native boolean getAutoWhiteBalanceEnabled();
       static native boolean CS_isValid(); 


       
       //OpenNI
       static native  Status initialize();
       static native  void shutdown();
       static native Version getVersion();
       static native String getExtendedError();
       static native  void enumerateDevices(Array<DeviceInfo> deviceInfoList);
       static native  Status waitForAnyStream(VideoStream[] pStreams, int streamCount, int pReadyStreamIndex, int timeout);
      /* 
       static native  Status addDeviceConnectedListener(DeviceConnectedListener pListener);
       static native  Status addDeviceDisconnectedListener(DeviceDisconnectedListener pListener);
       static native  Status addDeviceStateChangedListener(DeviceStateChangedListener pListener);
       static native void removeDeviceConnectedListener(DeviceConnectedListener pListener);
       static native void removeDeviceDisconnectedListener(DeviceDisconnectedListener pListener);
       static native void removeDeviceStateChangedListener(DeviceStateChangedListener pListener);
	*/
       //CoordinateConverter
       static native  Status convertWorldToDepth(VideoStream  depthStream, float worldX, float worldY, float worldZ, int pDepthX, int pDepthY, short pDepthZ);
       static native Status convertWorldToDepth(VideoStream  depthStream, float worldX, float worldY, float worldZ, float pDepthX, float pDepthY, float pDepthZ);
       static native  Status convertDepthToWorld(VideoStream  depthStream, int depthX, int depthY, short depthZ, float pWorldX, float pWorldY, float pWorldZ);
       static native  Status convertDepthToWorld(VideoStream  depthStream, float depthX, float depthY, float depthZ, float pWorldX, float pWorldY, float pWorldZ);
       static native  Status convertDepthToColor(VideoStream  depthStream, VideoStream  colorStream, int depthX, int depthY, short depthZ, int pColorX, int pColorY);
	
       // Recorder
       static native Status create(String fileName);
        static native boolean R_isValid();
        static native Status attach(VideoStream stream, boolean allowLossyCompression);
        static native Status R_start();
        static native void R_stop();
        static native void R_destroy();
	
       
	
	

    
    
    
    
    
    
    
    
    
    
    
    
    


    
    
    
    
    
//    public enum OniStatus {
//        
//}
//
//    enum XnStatus {
//    };
//
//    enum RecordType {
//    };
//
//    enum NodeType {
//    };
//   
//    //Context
//    static native OniStatus initialize();
//
//    static native void shutdown();
//
//    static native int registerDeviceConnectedCallback(OniDeviceInfoCallback handler, Object pCookie, OniCallbackHandle handle);
//
//    static native void unregisterDeviceConnectedCallback(OniCallbackHandle handle);
//
//    static native OniStatus registerDeviceDisconnectedCallback(OniDeviceI1nfoCallback handler, Object pCookie, OniCallbackHandle handle);
//
//    static native void unregisterDeviceDisconnectedCallback(OniCallbackHandle handle);
//
//    static native OniStatus registerDeviceStateChangedCallback(OniDeviceStateCallback handler, Object pCookie, OniCallbackHandle handle);
//
//    static native void unregisterDeviceStateChangedCallback(OniCallbackHandle handle);
//
//    static native OniStatus getDeviceList(OniDeviceInfo[] pDevices, int pDeviceCount);
//
//    static native OniStatus releaseDeviceList(OniDeviceInfo pDevices);
//
//    static native OniStatus deviceOpen(String uri, OniDeviceHandle pDevice);
//
//    static native OniStatus deviceClose(OniDeviceHandle device);
//
//    static native OniSensorInfo getSensorInfo(OniDeviceHandle device, OniSensorType sensorType);
//
//    static native OniStatus createStream(OniDeviceHandle device, OniSensorType sensorType, OniStreamHandle pStream);
//
//    static native OniStatus streamDestroy(OniStreamHandle stream);
//
//    static native OniSensorInfo getSensorInfo(OniStreamHandle stream);
//
//    static native OniStatus readFrame(OniStreamHandle stream, OniFrame[] pFrame);
//
//    static native void frameRelease(OniFrame pFrame);
//
//    static native void frameAddRef(OniFrame pFrame);
//
//    static native OniStatus waitForStreams(OniStreamHandle pStreams, int streamCount, int pStreamIndex, int timeout);
//
//    static native OniStatus enableFrameSync(OniStreamHandle pStreams, int numStreams, OniFrameSyncHandle pFrameSyncHandle);
//
//    static native OniStatus enableFrameSyncEx(VideoStream[] pStreams, int numStreams, DeviceDriver pDriver, OniFrameSyncHandle pFrameSyncHandle);
//
//    static native void disableFrameSync(OniFrameSyncHandle frameSyncHandle);
//
//    static native void clearErrorLogger();
//
//    static native String getExtendedError();
//
//    static native void addToLogger(XnChar cpFormat);
//
//    static native OniStatus recorderOpen(String fileName, OniRecorderHandle pRecorder);
//
//    static native OniStatus recorderClose(OniRecorderHandle pRecorder);
//
//    static native OniStatus recorderClose(Recorder pRecorder);
//
//    static native OniStatus streamDestroy(VideoStream pStream);
//
//    static native void deviceDriver_DeviceConnected(Device pDevice, Object pCookie);
//
//    static native void deviceDriver_DeviceDisconnected(Device pDevice, Object pCookie);
//
//    static native void deviceDriver_DeviceStateChanged(Device pDevice, OniDeviceState deviceState, Object pCookie);
//    
//    
//
//    //Device        
//    static native OniStatus open();
//
//    static native OniStatus close();
//
//    static native OniStatus getSensorInfoList(OniSensorInfo[] pSensors, int numSensors);
//
//    static native VideoStream createStream(OniSensorType sensorType);
//
//    static native OniStatus setProperty(int propertyId, Object data, int dataSize);
//
//    static native OniStatus getProperty(int propertyId, Object data, int pDataSize);
//
//    static native Oniboolean isPropertySupported(int propertId);
//
//    static native void notifyAllProperties();
//
//    static native OniStatus invoke(int commandId, Object data, int dataSize);
//
//    static native Oniboolean isCommandSupported(int commandId);
//
//    static native Oniboolean isImageRegistrationModeSupported(OniImageRegistrationMode mode);
//
//    static native OniStatus tryManualTrigger();
//
//    static native void clearStream(VideoStream pStream);
//
//    static native OniStatus enableDepthColorSync(Context pContext);
//
//    static native void disableDepthColorSync();
//
//    static native void refreshDepthColorSyncState();
//    
//    
//
//    //Device Driver
//    static native boolean tryDevice(String uri);
//
//    static native OniStatus registerDeviceConnectedCallback(DeviceCallback handler, Object pCookie, OniCallbackHandle handle);
//
//    static native void Device_unregisterDeviceConnectedCallback(OniCallbackHandle handle);
//
//    static native OniStatus registerDeviceDisconnectedCallback(DeviceCallback handler, Object pCookie, OniCallbackHandle handle);
//
//    static native void Device_unregisterDeviceDisconnectedCallback(OniCallbackHandle handle);
//
//    static native OniStatus registerDeviceStateChangedCallback(DeviceStateCallback handler, Object pCookie, OniCallbackHandle handle);
//
//    static native void Device_unregisterDeviceStateChangedCallback(OniCallbackHandle handle);
//
//    static native Object enableFrameSync(VideoStream[] pStreams, int streamCount);
//
//    static native void disableFrameSync(Object frameSyncGroup);
//    
//    
//
//    //Recorder
//    static native OniStatus initialize(String fileName);
//
//    static native OniStatus attachStream(VideoStream stream, Oniboolean allowLossyCompression);
//
//    static native OniStatus detachStream(VideoStream stream);
//
//    static native OniStatus detachAllStreams();
//
//    static native OniStatus start();
//
//    static native void stop();
//
//    static native OniStatus record(VideoStream stream, OniFrame aFrame);
//
//    static native OniStatus recordStreamProperty(VideoStream stream, int propertyId, Object pData, int intdataSize);
//
//    static native int threadMain(Long pThreadParam); //XN_THREAD_PARAM and XN_THREAD_PROC
//
//    static native void messagePump();
//
//    static native void send(Object type, VideoStream pStream, Object pData, int propertyId, Long dataSize, int priority);
//
//    static native void onInitialize();
//
//    static native void onTerminate();
//
//    static native void onAttach(int nodeId, VideoStream pStream);
//
//    static native void onDetach(int nodeId);
//
//    static native void onStart(int nodeId);
//
//    static native void onRecord(int nodeId, Long pCodec, OniFrame pFrame, int frameId, Long timestamp);
//
//    static native void onRecordProperty(int nodeId, int propertyId, Object pData, Long dataSize);
//
//    static native Long getLastPropertyRecordPos(int nodeId, String propName, Long newRecordPos);
//    
//    
//
//    //videoStream
//    static native OniStatus VS_start();
//
//    static native void VS_stop();
//
//    static native boolean isStarted();
//
//    static native OniStatus readFrame(OniFrame[] pFrame);
//
//    static native OniFrame peekFrame();
//
//    static native void lockFrame();
//
//    static native void unlockFrame();
//
//    static native OniStatus VS_setProperty(int propertyId, Object data, int dataSize);
//
//    static native OniStatus VS_PropertySupported(int propertyId);
//
//    static native OniStatus VS_invoke(int commandId, Object data, int dataSize);
//
//    static native Oniboolean VS_isCommandSupported(int commandId);
//
//    static native void VS_notifyAllProperties();
//
//    static native void VS_frameRelease(OniFrame pFrame);
//
//    static native void VS_frameAddRef(OniFrame pFrame);
//
//    static native void initializeFramePool(int dataSize, int poolSize);
//
//    static native void initializeFramePool(OniGeneralBuffer buffers, int numBuffers, int dataSize);
//
//    static native OniStatus registerNewFrameCallback(OniGeneralCallback handler, ObjectpCookie cookie, XnCallbackHandle pHandle);
//
//    static native void unregisterNewFrameCallback(XnCallbackHandle handle);
//
//    static native OniSensorInfo getSensorInfo();
//
//    static native Device getDevice();
//
//    static native void getHandle();
//
//    static native void setFrameHolder(FrameHolder pFrameHolder);
//
//    static native FrameHolder getFrameHolder();
//
//    static native void raiseNewFrameEvent();
//
//    static native XnStatus waitForNewFrameEvent();
//
//    static native void setContextNewFrameEvent(OSEvent pContextNewFrameEvent);
//
//    static native VideoStream getFrameStream(OniFrame pFrame);
//
//    static native OniStatus addRecorder(Recorder aRecorder);
//
//    static native OniStatus removeRecorder(Recorder aRecorder);
//
//    static native OniStatus convertDepthToWorldCoordinates(float depthX, float depthY, float depthZ, float pWorldX, float pWorldY, float pWorldZ);
//
//    static native OniStatus convertWorldToDepthCoordinates(float worldX, float worldY, float worldZ, float pDepthX, float pDepthY, float pDepthZ);
//
//    static native OniStatus convertDepthToColorCoordinates(VideoStream colorStream, int depthX, int depthY, OniDepthPixel depthZ, int pColorX, int pColorY);
//    
//    
//
//    //StreamFrameHolder
//    static native OniStatus readFrame(VideoStream pStream, OniFrame pFrame);
//
//    static native OniStatus processNewFrame(VideoStream pStream, OniFrame pFrame);
//
//    static native OniFrame peekFrame(VideoStream pStream);
//
//    static native void clear();
//
//    static native void getStreams(VideoStream ppStreams, int pNumStreams);
//
//    static native int getNumStreams();
//
//    static native void setStreamEnabled(VideoStream pStream, Oniboolean enabled);// ver /variavel/
//    
//    
//
//    //SyncedStreamsFrameHolder
//    static native OniStatus Sy_readFrame(VideoStream pStream, OniFrame pFrame);
//
//    static native OniStatus Sy_processNewFrame(VideoStream pStream, OniFrame pFrame);
//
//    static native OniFrame Sy_peekFrame(VideoStream pStream);
//
//    static native void Sy_clear();
//
//    static native void Sy_setStreamEnabled(VideoStream pStream, Oniboolean enabled);
//
//    static native void Sy_getStreams(VideoStream ppStreams, int pNumStreams);
//
//    static native int Sy_getNumStreams();
}
