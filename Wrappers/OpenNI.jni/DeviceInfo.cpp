/* 
 * File:   DeviceInfo.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 2:40
 */

#include <cstdlib>
#include "openni_java_DeviceInfo.h"
#include "OpenNI.h"

using namespace std;

/*
 * Class:     openni_java_DeviceInfo
 * Method:    getUri
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_openni_java_DeviceInfo_getUri
(JNIEnv *env, jobject, jlong myObject) {
    openni::DeviceInfo *deviceInfo = (openni::DeviceInfo*)myObject;
    jstring uri=env->NewStringUTF(deviceInfo->getUri());
    return uri;
}

/*
 * Class:     openni_java_DeviceInfo
 * Method:    getVendor
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_openni_java_DeviceInfo_getVendor
(JNIEnv *env, jobject, jlong myObject) {
    openni::DeviceInfo *deviceInfo = (openni::DeviceInfo*)myObject;
    jstring vendor=env->NewStringUTF(deviceInfo->getVendor());
    return vendor;
}

/*
 * Class:     openni_java_DeviceInfo
 * Method:    getName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_openni_java_DeviceInfo_getName
(JNIEnv *env, jobject, jlong myObject) {
    openni::DeviceInfo *deviceInfo = (openni::DeviceInfo*)myObject;
    jstring name=env->NewStringUTF(deviceInfo->getName());
    return name;
}

/*
 * Class:     openni_java_DeviceInfo
 * Method:    getUsbVendorId
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_openni_java_DeviceInfo_getUsbVendorId
(JNIEnv *env, jobject, jlong myObject) {
    openni::DeviceInfo *deviceInfo = (openni::DeviceInfo*)myObject;
    return (jshort)deviceInfo->getUsbVendorId();
}

/*
 * Class:     openni_java_DeviceInfo
 * Method:    getUsbProductId
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_openni_java_DeviceInfo_getUsbProductId
(JNIEnv *env, jobject, jlong myObject) {
    openni::DeviceInfo *deviceInfo = (openni::DeviceInfo*)myObject;
    return (jshort) deviceInfo->getUsbProductId();
}

/*
 * Class:     openni_java_DeviceInfo
 * Method:    deviceInfo
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_DeviceInfo_deviceInfo
(JNIEnv *env, jobject){
     openni::DeviceInfo *deviceInfo= new openni::DeviceInfo();
     return (jlong)deviceInfo;
}