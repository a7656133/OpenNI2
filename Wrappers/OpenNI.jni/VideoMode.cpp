/* 
 * File:   VideoMode.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 3:20
 */

#include <cstdlib>
#include "OpenNI.h"
#include "openni_java_VideoMode.h"

using namespace std;
openni::PixelFormat getPixelFormat(jint value){
 return (openni::PixelFormat)value;
 
}
/*
 * Class:     openni_java_VideoMode
 * Method:    getPixelFormat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getPixelFormat
(JNIEnv *env, jobject, jlong myObject) {
    openni::VideoMode *video= (openni::VideoMode*)myObject;
    return (jint)video->getPixelFormat();
   
}

/*
 * Class:     openni_java_VideoMode
 * Method:    getResolutionX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getResolutionX
(JNIEnv *env, jobject, jlong myObject){
    openni::VideoMode *video= (openni::VideoMode*)myObject;
    return (jint)video->getResolutionX();
   
}

/*
 * Class:     openni_java_VideoMode
 * Method:    getResolutionY
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getResolutionY
(JNIEnv *env, jobject, jlong myObject){
    openni::VideoMode *video= (openni::VideoMode*)myObject;
    return (jint)video->getResolutionY();
   
}

/*
 * Class:     openni_java_VideoMode
 * Method:    getFps
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getFps
(JNIEnv *env, jobject, jlong myObject){
    openni::VideoMode *video= (openni::VideoMode*)myObject;
    return (jint)video->getFps();
   
}

/*
 * Class:     openni_java_VideoMode
 * Method:    setPixelFormat
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoMode_setPixelFormat
(JNIEnv *env, jobject, jint format, jlong myObject){
    openni::VideoMode *video= (openni::VideoMode*)myObject;
    video->setPixelFormat(getPixelFormat(format));
   
}
/*
 * Class:     openni_java_VideoMode
 * Method:    setResolution
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoMode_setResolution
(JNIEnv *env, jobject, jint resolutionX, jint resolutionY, jlong myObject){
    openni::VideoMode *video= (openni::VideoMode*)myObject;
    video->setResolution(resolutionX,resolutionY);
   
}
/*
 * Class:     openni_java_VideoMode
 * Method:    setFps
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoMode_setFps
(JNIEnv *env, jobject, jint fps, jlong myObject) {
    openni::VideoMode *video= (openni::VideoMode*)myObject;
    video->setFps(fps);
   
}

/*
 * Class:     openni_java_VideoMode
 * Method:    videoMode
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoMode_videoMode
(JNIEnv *env, jobject){
    openni::VideoMode *video= new openni::VideoMode();
    return (jlong)video;
}




