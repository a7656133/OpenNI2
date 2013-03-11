/* 
 * File:   VideoStream.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 3:25
 */

#include <cstdlib>
#include "OpenNI.h"
#include "openni_java_VideoStream.h"

using namespace std;

openni::SensorType getSensorType(jint value){
 return (openni::SensorType)value;
 
}
/*
 * Class:     openni_java_VideoStream
 * Method:    isValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isValid
(JNIEnv *env, jobject,jlong myObject){
     openni::VideoStream *videoStream =(openni::VideoStream*)myObject;
    return (jboolean) videoStream->isValid();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    create
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_create
(JNIEnv *env, jobject, jlong device, jint sensorType, jlong myObject)
{
    openni::VideoStream *videoStream =(openni::VideoStream*)myObject;
    return (jint) videoStream->create((const openni::Device&)device,getSensorType(sensorType));
}

/*
 * Class:     openni_java_VideoStream
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoStream_destroy
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    videoStream->destroy();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getSensorInfo
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_getSensorInfo
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    const  openni::SensorInfo *si_p=&(videoStream->getSensorInfo());
    return (jlong)si_p;
}

/*
 * Class:     openni_java_VideoStream
 * Method:    start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_start
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->start();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoStream_stop
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    videoStream->stop();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    readFrame
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_readFrame
(JNIEnv *env, jobject , jlong frame, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->readFrame((openni::VideoFrameRef*)frame);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getCameraSettings
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_getCameraSettings
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jlong)videoStream->getCameraSettings();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getProperty
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_getProperty
(JNIEnv *env, jobject, jint propertID, jlong data, jint dataSize, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    int dtSize=dataSize;
    int *dt=&dtSize;
    return (jint) videoStream->getProperty(propertID,(void*)data,dt);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    setProperty
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setProperty
(JNIEnv *env, jobject, jint propertID, jlong data, jint dataSize, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->setProperty(propertID,(const void*)data,dataSize);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getVideoMode
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_getVideoMode
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    openni::VideoMode vm=videoStream->getVideoMode();
    openni::VideoMode *vm1=&vm;
    return (jlong)vm1;
}

/*
 * Class:     openni_java_VideoStream
 * Method:    setVideoMode
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setVideoMode
(JNIEnv *env, jobject, jlong pVideoMode, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    openni::VideoMode *vs=(openni::VideoMode*)pVideoMode;
    openni::VideoMode vs1=openni::VideoMode();
    vs1.setPixelFormat(vs->getPixelFormat());
    vs1.setResolution(vs->getResolutionX(), vs->getResolutionY());
    vs1.setFps(vs->getFps());    
    return (jint) videoStream->setVideoMode(vs1);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getMaxPixelValue
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_getMaxPixelValue
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->getMaxPixelValue();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getMinPixelValue
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_getMinPixelValue
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->getMinPixelValue();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    isCroppingSupported
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isCroppingSupported
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jboolean) videoStream->isCroppingSupported();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getCropping
 * Signature: (IIIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_getCropping
(JNIEnv *env, jobject, jint poringX, jint poringY, jint pwidth, jint phight, jlong myObject){
int *oringX=&poringX;
int *oringY=&poringY;
int *width=&pwidth;
int *hight=&phight;
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jboolean) videoStream->getCropping(oringX,oringY,width,hight);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    setCropping
 * Signature: (IIIIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setCropping
(JNIEnv *env, jobject, jint oringX, jint oringY, jint width, jint hight, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->setCropping(oringX,oringY,width,hight);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    resetCropping
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_resetCropping
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->resetCropping();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getMirroringEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_getMirroringEnabled
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jboolean) videoStream->getMirroringEnabled();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    setMirroringEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setMirroringEnabled
(JNIEnv *env, jobject, jboolean isEnabled, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->setMirroringEnabled((bool)isEnabled);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getHorizontalFieldOfView
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_openni_java_VideoStream_getHorizontalFieldOfView
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jfloat) videoStream->getHorizontalFieldOfView();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    getVerticalFieldOfView
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_openni_java_VideoStream_getVerticalFieldOfView
(JNIEnv *env, jobject, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jfloat) videoStream->getVerticalFieldOfView();
}

/*
 * Class:     openni_java_VideoStream
 * Method:    isPropertySupported
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isPropertySupported
(JNIEnv *env, jobject, jint commandId, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jboolean) videoStream->isCommandSupported(commandId);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    invoke
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_invoke
(JNIEnv *env, jobject, jint commandId, jlong data, jint dataSize, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jint) videoStream->invoke(commandId,(void*)data,dataSize);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    isCommandSupported
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isCommandSupported
(JNIEnv *env, jobject, jint commandId, jlong myObject)
{
    openni::VideoStream *videoStream = (openni::VideoStream*) myObject;
    return (jboolean) videoStream->isCommandSupported(commandId);
}

/*
 * Class:     openni_java_VideoStream
 * Method:    Videotream
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_Videotream
(JNIEnv *env, jobject){
    openni::VideoStream *videoStream= new openni::VideoStream() ;
    return (jlong)videoStream;
}
