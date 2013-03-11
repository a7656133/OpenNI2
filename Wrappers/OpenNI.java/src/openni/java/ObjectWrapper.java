/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package openni.java;

/**
 *
 * @author clebeson
 */
public abstract class ObjectWrapper
{
    
public ObjectWrapper(long ptr)
{
if (ptr == 0)
{
throw new NullPointerException("JavaWrapper: Trying to wrap a null object!");
}
this.ptr = ptr;
}

public long myNativeObject()
{
return this.ptr;
}

protected void finalize()
{
dispose();
}

public void dispose()
{
if (this.ptr != 0)
{
freeObject(this.ptr);
this.ptr = 0;
}
}

protected abstract void freeObject(long ptr);

private long ptr;
}