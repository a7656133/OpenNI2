/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class openni_java_VideoMode */

#ifndef _Included_openni_java_VideoMode
#define _Included_openni_java_VideoMode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     openni_java_VideoMode
 * Method:    getPixelFormat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getPixelFormat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoMode
 * Method:    getResolutionX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getResolutionX
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoMode
 * Method:    getResolutionY
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getResolutionY
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoMode
 * Method:    getFps
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoMode_getFps
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoMode
 * Method:    setPixelFormat
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoMode_setPixelFormat
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     openni_java_VideoMode
 * Method:    setResolution
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoMode_setResolution
  (JNIEnv *, jobject, jint, jint, jlong);

/*
 * Class:     openni_java_VideoMode
 * Method:    setFps
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoMode_setFps
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     openni_java_VideoMode
 * Method:    videoMode
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoMode_videoMode
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
