/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package openni.java;

/**
 *
 * @author clebeson
 */
    public class Version {
        long myObjectWrapper;
        public int major;
        public int minor;
        public int maintenance;
        public int build;

        public Version(long myObjectWrapper) {
            this.myObjectWrapper = myObjectWrapper;
           
        }

    }
