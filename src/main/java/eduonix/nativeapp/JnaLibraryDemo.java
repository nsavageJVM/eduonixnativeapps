package eduonix.nativeapp;

import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Platform;

/**
 * Demonstrates the jna workflow
 */

interface CLibrary extends Library
{
    static CLibrary INSTANCE = (CLibrary) Native.loadLibrary((Platform.isWindows() ? "msvcrt" : "c"), CLibrary.class);
    void printf(String format, Object... args);
}


public class JnaLibraryDemo {

    public static void main(String[] args) throws InterruptedException
    {

            CLibrary.INSTANCE.printf("Hello, JNA World");

    }
}
