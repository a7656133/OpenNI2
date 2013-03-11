/* 
 * File:   CoordinateConverter.cpp
 * Author: clebeson
 *
 * Created on 25 de febrero de 2013, 2:20
 */

#include <cstdlib>
#include "openni_java_CoordinateConverter.h"
#include "OpenNI.h"

using namespace std;

/*
 * Class:     openni_java_CoordinateConverter
 * Method:    convertWorldToDepth
 * Signature: (JFFFIIS)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CoordinateConverter_convertWorldToDepth__JFFFIIS
(JNIEnv *env, jclass, jlong depthStream, jfloat worldX, jfloat worldY, jfloat worldZ, jint pdepthX, jint pdepthY, jshort pdepthZ) {
    int depthX=pdepthX;
    int depthY=pdepthY;
    openni::DepthPixel depthZ=(openni::DepthPixel)pdepthZ;   
   return  (jint)openni::CoordinateConverter::convertWorldToDepth((const openni::VideoStream&)depthStream, worldX, worldY, worldZ, &depthX, &depthY,&depthZ);
}


/*
 * Class:     openni_java_CoordinateConverter
 * Method:    convertWorldToDepth
 * Signature: (JFFFFFF)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CoordinateConverter_convertWorldToDepth__JFFFFFF
(JNIEnv *, jclass, jlong depthStream, jfloat worldX, jfloat worldY, jfloat worldZ, jfloat pdepthX, jfloat pdepthY, jfloat pdepthZ){
    float depthX=pdepthX;
    float depthY=pdepthY;
    float depthZ=pdepthZ; 
    return  (jint)openni::CoordinateConverter::convertWorldToDepth((const openni::VideoStream&)depthStream, worldX, worldY, worldZ, &depthX, &depthY,&depthZ);
}

/*
 * Class:     openni_java_CoordinateConverter
 * Method:    convertDepthToWorld
 * Signature: (JIISFFF)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CoordinateConverter_convertDepthToWorld__JIISFFF
(JNIEnv *, jclass, jlong depthStream, jint depthX, jint depthY, jshort pdepthZ, jfloat pworldX, jfloat pworldY, jfloat pworldZ){
    float worldX=pworldX;
    float worldY=worldY;
    float worldZ=worldZ; 
    openni::DepthPixel depthZ=(openni::DepthPixel)pdepthZ;
 return  (jint)openni::CoordinateConverter::convertDepthToWorld((const openni::VideoStream&)depthStream, depthX, depthY,depthZ, &worldX, &worldY, &worldZ); 

}

/*
 * Class:     openni_java_CoordinateConverter
 * Method:    convertDepthToWorld
 * Signature: (JFFFFFF)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CoordinateConverter_convertDepthToWorld__JFFFFFF
(JNIEnv *, jclass, jlong depthStream, jfloat depthX, jfloat depthY, jfloat depthZ, jfloat pworldX, jfloat pworldY, jfloat pworldZ){
    float worldX=pworldX;
    float worldY=worldY;
    float worldZ=worldZ; 
 return  (jint)openni::CoordinateConverter::convertDepthToWorld((const openni::VideoStream&)depthStream, depthX, depthY,depthZ, &worldX, &worldY, &worldZ); 
   
}

/*
 * Class:     openni_java_CoordinateConverter
 * Method:    convertDepthToColor
 * Signature: (JJIISII)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CoordinateConverter_convertDepthToColor
(JNIEnv *, jclass, jlong depthStream, jlong colorStream, jint depthX, jint depthY, jshort depthZ, jint pcolorX, jint pcolorY){
    int colorX=pcolorX;
    int colorY=pcolorY;
  return  (jint)openni::CoordinateConverter::convertDepthToColor((const openni::VideoStream&)depthStream,(const openni::VideoStream&)colorStream,depthX,depthY,depthZ,&colorX,&colorY);  
}