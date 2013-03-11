/* 
 * File:   SensorInfo.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 3:12
 */

#include <cstdlib>
#include "OpenNI.h"
#include "openni_java_SensorInfo.h"

using namespace std;

/*
 * Class:     openni_java_SensorInfo
 * Method:    getSensorType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_SensorInfo_getSensorType
(JNIEnv *, jobject, jlong myObject) {
  openni::SensorInfo *sensorInfo = (openni::SensorInfo*)myObject;
  return (jint) sensorInfo->getSensorType();
}

/*
 * Class:     openni_java_SensorInfo
 * Method:    getSupportedVideoModes
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_SensorInfo_getSupportedVideoModes
(JNIEnv *, jobject, jlong myObject) {
   openni::SensorInfo *sensorInfo = (openni::SensorInfo*)myObject;
   const openni::Array<openni::VideoMode> *arrayVideo=(&sensorInfo->getSupportedVideoModes());
   return (jlong) arrayVideo;
}