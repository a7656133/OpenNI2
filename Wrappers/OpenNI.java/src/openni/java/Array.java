/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package openni.java;

/**
 *
 * @author clebeson
 */
public class Array<T>  extends ObjectWrapper{
 	private long m_data;
	private int m_count;
	private boolean m_owner;

private native void Array();         
private native void Array(long data,int count);

    @Override
    protected void freeObject(long ptr) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public Array(long ptr){
        super(ptr);
    }

        
    
}
