package eduonix.nativeapp;

import com.sun.jna.Native;
import com.sun.jna.Platform;

/**
 * https://github.com/twall/jna/blob/master/www/DirectMapping.md
 */
public class JnaRegisterDemo {

    public static void main(String[] args) throws InterruptedException

    {
        HelloJNARegister hj = new HelloJNARegister();

        hj.printf("Hello JNARegister ");

    }

}

class HelloJNARegister
{

    public native void printf(String format);

    static
    {
        Native.register((Platform.isWindows() ? "msvcrt" : "c"));
    }
}
