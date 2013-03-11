/* 
 * File:   openni_java_PlaybackControl.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 2:55
 */

#include <cstdlib>
#include "OpenNI.h"
#include "openni_java_PlaybackControl.h"

using namespace std;

/*
 * Class:     openni_java_PlaybackControl
 * Method:    getSpeed
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_openni_java_PlaybackControl_getSpeed
(JNIEnv *env, jobject, jlong myObject) {
    openni::PlaybackControl *pbControl = (openni::PlaybackControl*)myObject;
    return (jfloat) pbControl->getSpeed();
}

/*
 * Class:     openni_java_PlaybackControl
 * Method:    setSpeed
 * Signature: (FJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_PlaybackControl_setSpeed
(JNIEnv *env, jobject, jfloat speed, jlong myObject) {
    openni::PlaybackControl *pbControl = (openni::PlaybackControl*)myObject;
    return (jint) pbControl->setSpeed(speed);
}

/*
 * Class:     openni_java_PlaybackControl
 * Method:    getRepeatEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_PlaybackControl_getRepeatEnabled
(JNIEnv *env, jobject, jlong myObject) {
    openni::PlaybackControl *pbControl = (openni::PlaybackControl*)myObject;
    return (jboolean) pbControl->getRepeatEnabled();
}

/*
 * Class:     openni_java_PlaybackControl
 * Method:    setRepeatEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_PlaybackControl_setRepeatEnabled
(JNIEnv *env, jobject, jboolean repeat, jlong myObject) {
    openni::PlaybackControl *pbControl = (openni::PlaybackControl*)myObject;
    return (jint) pbControl->setRepeatEnabled((bool)repeat);
}

/*
 * Class:     openni_java_PlaybackControl
 * Method:    seek
 * Signature: (Lopenni/java/VideoStream;IJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_PlaybackControl_seek
(JNIEnv *env, jobject, jlong stream, jint frameIndex, jlong myObject) {
    openni::PlaybackControl *pbControl = (openni::PlaybackControl*)myObject;    
    return (jint) pbControl->seek((const openni::VideoStream&)stream,frameIndex);
}

/*
 * Class:     openni_java_PlaybackControl
 * Method:    getNumberOfFrames
 * Signature: (Lopenni/java/VideoStream;J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_PlaybackControl_getNumberOfFrames
(JNIEnv *env, jobject, jlong stream, jlong myObject) {
    openni::PlaybackControl *pbControl = (openni::PlaybackControl*)myObject;
    return (jint) pbControl->getNumberOfFrames((const openni::VideoStream&)stream);
}

/*
 * Class:     openni_java_PlaybackControl
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_PlaybackControl_isValid
(JNIEnv *env, jobject, jlong myObject) {
    openni::PlaybackControl *pbControl = (openni::PlaybackControl*)myObject;
    return (jboolean) pbControl->isValid();
}



