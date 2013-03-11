/* 
 * File:   CameraSettings.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 1:48
 */

#include <cstdlib>
#include "openni_java_CameraSettings.h"
#include "OpenNI.h"


using namespace std;

/*
 * Class:     openni_java_CameraSettings
 * Method:    setAutoExposureEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CameraSettings_setAutoExposureEnabled
(JNIEnv *, jobject, jboolean enabled, jlong myObject) {
    openni::CameraSettings *cam = (openni::CameraSettings*)myObject;
    return (jint) cam->setAutoExposureEnabled(enabled);
}

/*
 * Class:     openni_java_CameraSettings
 * Method:    setAutoWhiteBalanceEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CameraSettings_setAutoWhiteBalanceEnabled
(JNIEnv *, jobject, jboolean enabled, jlong myObject) {
    openni::CameraSettings *cam = (openni::CameraSettings*)myObject;
    return (jint) cam->setAutoWhiteBalanceEnabled(enabled);
}

/*
 * Class:     openni_java_CameraSettings
 * Method:    getAutoExposureEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_CameraSettings_getAutoExposureEnabled
(JNIEnv *, jobject, jlong myObject) {
    openni::CameraSettings *cam = (openni::CameraSettings*)myObject;
    return (jboolean) cam->getAutoExposureEnabled();
}

/*
 * Class:     openni_java_CameraSettings
 * Method:    getAutoWhiteBalanceEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_CameraSettings_getAutoWhiteBalanceEnabled
(JNIEnv *, jobject, jlong myObject) {
    openni::CameraSettings *cam = (openni::CameraSettings*)myObject;
    return (jboolean) cam->getAutoWhiteBalanceEnabled();
}

/*
 * Class:     openni_java_CameraSettings
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_CameraSettings_isValid
(JNIEnv *, jobject, jlong myObject) {
    openni::CameraSettings *cam = (openni::CameraSettings*)myObject;
    return (jboolean) cam->isValid();
}

/*
 * Class:     openni_java_CameraSettings
 * Method:    CameraSettings
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_CameraSettings_CameraSettings__
(JNIEnv *, jobject ) {
    openni::CameraSettings *cam;
    
    return (jlong)cam;
}

