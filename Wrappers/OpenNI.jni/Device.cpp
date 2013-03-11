/* 
 * File:   Device.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 1:55
 */

#include <cstdlib>
#include "openni_java_Device.h"
#include "OpenNI.h"

using namespace std;


openni::SensorType getSensorType(jint value){
 return (openni::SensorType)value;
 
}


openni::ImageRegistrationMode getImageRMType(jint value){
 return (openni::ImageRegistrationMode)value;
}

/*
 * Class:     openni_java_Device
 * Method:    open
 * Signature: (Ljava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Device_open
  (JNIEnv *env, jobject, jstring uri, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;   
    return (jint)device->open(env->GetStringUTFChars(uri,NULL));
}

/*
 * Class:     openni_java_Device
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_Device_close
  (JNIEnv *env, jobject, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;     
    device->close();
}

/*
 * Class:     openni_java_Device
 * Method:    getDeviceInfo
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_Device_getDeviceInfo
  (JNIEnv *env, jobject, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject; 
    const openni::DeviceInfo* devInfo=&(device->getDeviceInfo());
    return (jlong)devInfo;
}

/*
 * Class:     openni_java_Device
 * Method:    hasSensor
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Device_hasSensor
  (JNIEnv *env, jobject, jint sensorType, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;      
    return (jboolean)device->hasSensor(getSensorType(sensorType));
}

/*
 * Class:     openni_java_Device
 * Method:    getSensorInfo
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_Device_getSensorInfo
  (JNIEnv *env, jobject, jint sensorType, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;   
   return (jlong)device->getSensorInfo(getSensorType(sensorType));
}

/*
 * Class:     openni_java_Device
 * Method:    getPlaybackControl
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_Device_getPlaybackControl
  (JNIEnv *env, jobject, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;  
    return (jlong)device->getPlaybackControl();
}

/*
 * Class:     openni_java_Device
 * Method:    setProperty
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Device_setProperty
  (JNIEnv *env, jobject , jint propertyID, jlong data, jint dataSize, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;  
    return (jint)device->setProperty(propertyID,(const void*)data,dataSize);
}

/*
 * Class:     openni_java_Device
 * Method:    isImageRegistrationModeSupported
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Device_isImageRegistrationModeSupported
  (JNIEnv *env, jobject, jint mode, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject; 
    return (jboolean)device->isImageRegistrationModeSupported(getImageRMType(mode));
}

/*
 * Class:     openni_java_Device
 * Method:    getImageRegistrationMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Device_getImageRegistrationMode
  (JNIEnv *env, jobject, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;   
    return (jint)device->getImageRegistrationMode();
}

/*
 * Class:     openni_java_Device
 * Method:    setImageRegistrationMode
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Device_setImageRegistrationMode
  (JNIEnv *env, jobject, jint mode, jlong myObject){ 
    openni::Device  *device =(openni::Device*)myObject;   
    return (jint)device->setImageRegistrationMode(getImageRMType(mode));
}

/*
 * Class:     openni_java_Device
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Device_isValid
  (JNIEnv *env, jobject, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;   
    return (jboolean)device->isValid();
}

/*
 * Class:     openni_java_Device
 * Method:    isFile
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Device_isFile
  (JNIEnv *env, jobject, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;
 return (jboolean)device->isFile();
}

/*
 * Class:     openni_java_Device
 * Method:    setDepthColorSyncEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Device_setDepthColorSyncEnabled
  (JNIEnv *env, jobject, jboolean iseEnabled, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject; 
 return (jint)device->setDepthColorSyncEnabled((bool)iseEnabled);
}

/*
 * Class:     openni_java_Device
 * Method:    isPropertySupported
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Device_isPropertySupported
  (JNIEnv *env, jobject, jint property, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;  
     return (jboolean)device->isPropertySupported(property);
}

/*
 * Class:     openni_java_Device
 * Method:    invoke
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Device_invoke
  (JNIEnv *env, jobject, jint command, jlong data, jint dataSize, jlong myObject){ 
    openni::Device  *device =(openni::Device*)myObject;  
    return (jint)device->invoke(command,(const void*)data,dataSize);
}

/*
 * Class:     openni_java_Device
 * Method:    isCommandSupported
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Device_isCommandSupported
  (JNIEnv *env, jobject, jint command, jlong myObject){  
    openni::Device  *device =(openni::Device*)myObject;   
     return (jboolean)device->isCommandSupported(command);
}

/*
 * Class:     openni_java_Device
 * Method:    Device
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_Device_Device
  (JNIEnv *env, jobject){  
    openni::Device  *device= new openni::Device(); 
     return (jlong)device;
}




//
//
//
//
//void SetOutArgObjectValue(JNIEnv* env, jobject p, jobject value)
//{
//jclass cls = env->GetObjectClass(p);
//jfieldID fieldID = env->GetFieldID(cls, "value", "Ljava/lang/Object;");
//env->SetObjectField(p, fieldID, value);
//}
//
//void SetOutArgDoubleValue(JNIEnv* env, jobject p, double value)
//{
//jclass cls = env->FindClass("java/lang/Double");
//jmethodID ctor = env->GetMethodID(cls, "<init>", "(D)V");
//SetOutArgObjectValue(env, p, env->NewObject(cls, ctor, value));
//}
//
//void SetOutArgLongValue(JNIEnv* env, jobject p, jlong value)
//{
//
//jclass cls = env->FindClass("java/lang/Long");
//jmethodID ctor = env->GetMethodID(cls, "<init>", "(J)V");
//SetOutArgObjectValue(env, p, env->NewObject(cls, ctor, value));
//}
//
//void SetOutArgPointerValue(JNIEnv* env, jobject p, const void* value)
//{
//SetOutArgLongValue(env, p, (jlong)value);
//}
//

 