
/* 
 * File:   DeviceInfo.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 3:05
 */
#include <cstdlib>
#include "OpenNI.h"
#include "openni_java_Recorder.h"

using namespace std;

/*
 * Class:     openni_java_Recorder
 * Method:    create
 * Signature: (Ljava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Recorder_create
(JNIEnv *env, jobject, jstring fileName, jlong myObject) {
    openni::Recorder *recorder = (openni::Recorder*)myObject;
    const char* fName=env->GetStringUTFChars(fileName,NULL);
    return (jint) recorder->create(fName);
}

/*
 * Class:     openni_java_Recorder
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Recorder_isValid
(JNIEnv *env, jobject, jlong myObject) {
    openni::Recorder *recorder = (openni::Recorder*)myObject;
    return (jboolean) recorder->isValid();
}

/*
 * Class:     openni_java_Recorder
 * Method:    attach
 * Signature: (Lopenni/java/VideoStream;ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Recorder_attach
(JNIEnv *env, jclass, jlong stream, jboolean allowLossyCompression , jlong myObject) {
    openni::Recorder *recorder = (openni::Recorder*)myObject;
    return (jint) recorder->attach((openni::VideoStream&)stream,allowLossyCompression);
}

/*
 * Class:     openni_java_Recorder
 * Method:    start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Recorder_start
(JNIEnv *env, jobject, jlong myObject) {
    openni::Recorder *recorder = (openni::Recorder*)myObject;
    return (jint) recorder->start();
}

/*
 * Class:     openni_java_Recorder
 * Method:    stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_Recorder_stop
(JNIEnv *env, jobject, jlong myObject) {
    openni::Recorder *recorder = (openni::Recorder*)myObject;
    recorder->stop();
}

/*
 * Class:     openni_java_Recorder
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_Recorder_destroy
(JNIEnv *env, jobject, jlong myObject) {
    openni::Recorder *recorder = (openni::Recorder*)myObject;
    recorder->destroy();
}

/*
 * Class:     openni_java_Recorder
 * Method:    recorder
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_Recorder_recorder
(JNIEnv *env, jobject){
 openni::Recorder *recorder=new openni::Recorder();
 return (jlong)recorder;
}
