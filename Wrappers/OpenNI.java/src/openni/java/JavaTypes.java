/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package openni.java;

/**
 *
 * @author clebeson
 */
public class JavaTypes {
    
    
  
  public enum PixelFormat { 
        PIXEL_FORMAT_DEPTH_1_MM(100),
	PIXEL_FORMAT_DEPTH_100_UM(101),
	PIXEL_FORMAT_SHIFT_9_2(102),
	PIXEL_FORMAT_SHIFT_9_3(103),
	// Color
	PIXEL_FORMAT_RGB888 (200),
	PIXEL_FORMAT_YUV422 (201),
	PIXEL_FORMAT_GRAY8 (202),
	PIXEL_FORMAT_GRAY16 (203),
	PIXEL_FORMAT_JPEG (204);
        private int pixelformat;

        private PixelFormat(int pixelformat) {
            this.pixelformat = pixelformat;
        }

        public int getPixelFormat(){
            return pixelformat;
        }
                
    }
    public enum SensorType {
        SENSOR_IR (1),
	SENSOR_COLOR(2),
	SENSOR_DEPTH (3);
        private int sensorType;

        private SensorType(int sensorType) {
            this.sensorType = sensorType;
        }

        public int getSensortype() {
            return sensorType;
        }

        
        
    }
    public enum  Status {
        STATUS_OK (0),
	STATUS_ERROR (1),
	STATUS_NOT_IMPLEMENTED (2),
	STATUS_NOT_SUPPORTED (3),
	STATUS_BAD_PARAMETER (4),
	STATUS_OUT_OF_FLOW (5),
	STATUS_NO_DEVICE (6),
	STATUS_TIME_OUT (102);
        private int status;

        private Status(int status) {
            this.status = status;
        }

        public int getStatus() {
            return status;
        }
        
    }
    public enum ImageRegistrationMode{
        IMAGE_REGISTRATION_OFF(0),
	IMAGE_REGISTRATION_DEPTH_TO_COLOR(1);
        private int imageRegistrationMode;

        private ImageRegistrationMode(int imageRegistrationMode) {
            this.imageRegistrationMode = imageRegistrationMode;
        }

        public int getImageRegistrationMode() {
            return imageRegistrationMode;
        }
        
        
    }
    
    public class Version{
            public int major;
            public int minor;
            public int maintenance;
            public int build;

        public Version(int major, int minor, int maintenance, int build) {
            this.major = major;
            this.minor = minor;
            this.maintenance = maintenance;
            this.build = build;
        }
            
    }
    
    

}
