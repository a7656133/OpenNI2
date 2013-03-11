/*
  To change this template, choose Tools | Templates
  and open the template in the editor.
 */
package openni.java;
/*
 
  @author clebeson
 */
public class CoordinateConverter {
    //all return Status  
    private  static native  int convertWorldToDepth(long  depthStream, float worldX, float worldY, float worldZ, int pDepthX, int pDepthY, short pDepthZ);
      private  static native int convertWorldToDepth(long  depthStream, float worldX, float worldY, float worldZ, float pDepthX, float pDepthY, float pDepthZ);
      private  static native  int convertDepthToWorld(long  depthStream, int depthX, int depthY, short depthZ, float pWorldX, float pWorldY, float pWorldZ);
      private  static native  int convertDepthToWorld(long  depthStream, float depthX, float depthY, float depthZ, float pWorldX, float pWorldY, float pWorldZ);
      private  static native  int convertDepthToColor(long  depthStream, long  colorStream, int depthX, int depthY, short depthZ, int pColorX, int pColorY); 
      

public static int convertWorldToDepth( VideoStream depthStream, float worldX, float worldY, float worldZ, int pDepthX, int pDepthY, short pDepthZ){
return convertWorldToDepth(depthStream.myNativeObject(), worldX, worldY, worldZ, pDepthX, pDepthY, pDepthZ);
}

public static int convertWorldToDepth( VideoStream depthStream, float worldX, float worldY, float worldZ, float pDepthX, float pDepthY, float pDepthZ){
 return convertWorldToDepth(depthStream.myNativeObject(), worldX, worldY, worldZ, pDepthX, pDepthY, pDepthZ);   
}

public static int convertDepthToWorld( VideoStream depthStream, int depthX, int depthY, short depthZ, float pWorldX, float pWorldY, float pWorldZ){
 return convertDepthToWorld(depthStream.myNativeObject(), depthX, depthY, depthZ, pWorldX, pWorldY, pWorldZ);  
}

public static int convertDepthToWorld( VideoStream depthStream, float depthX, float depthY, float depthZ, float pWorldX, float pWorldY, float pWorldZ){
    return convertDepthToWorld(depthStream.myNativeObject(), depthX, depthY, depthZ, pWorldX, pWorldY, pWorldZ);
}

public static int convertDepthToColor(VideoStream depthStream, VideoStream colorStream, int depthX, int depthY, short depthZ, int pColorX, int pColorY){
 return convertDepthToColor(depthStream.myNativeObject(),colorStream.myNativeObject(), depthX, depthY, depthZ, pColorX, pColorY);  
}
}


