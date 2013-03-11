/* 
 * File:   VideoFrameRef.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 3:14
 */

#include <cstdlib>
#include "OpenNI.h"
#include "openni_java_VideoFrameRef.h"

using namespace std;

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getDataSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getDataSize
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getDataSize();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getData
 * Signature: (J)V
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoFrameRef_getData
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jlong)VFRef->getData();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getSensorType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getSensorType
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getSensorType();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getVideoMode
 * Signature: (J)Lopenni/java/VideoMode;
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoFrameRef_getVideoMode
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    const openni::VideoMode *vm=&(VFRef->getVideoMode());
    return (jlong)vm;
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getTimestamp
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_openni_java_VideoFrameRef_getTimestamp
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jshort) VFRef->getTimestamp();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getFrameIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getFrameIndex
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getFrameIndex();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getWidth
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getWidth();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getHeight
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getHeight();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getCroppingEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoFrameRef_getCroppingEnabled
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jboolean) VFRef->getCroppingEnabled();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getCropOriginX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getCropOriginX
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getCropOriginX();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getCropOriginY
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getCropOriginY
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getCropOriginY();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    getStrideInBytes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoFrameRef_getStrideInBytes
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jint) VFRef->getStrideInBytes();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoFrameRef_isValid
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    return (jboolean) VFRef->isValid();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoFrameRef_release
(JNIEnv *, jobject, jlong myObject) {
    openni::VideoFrameRef *VFRef = (openni::VideoFrameRef*)myObject;
    VFRef->release();
}

/*
 * Class:     openni_java_VideoFrameRef
 * Method:    videoFrameRef
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoFrameRef_videoFrameRef
(JNIEnv *, jobject){
    
     openni::VideoFrameRef *VFRef= new openni::VideoFrameRef();
     return (jlong)VFRef;
}


