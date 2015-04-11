package eduonix.nativeapp;


import eduonix.nativeapp.libusb.LibusbLibrary;
import eduonix.nativeapp.libusb.libusb_version;


/**
 * Created by ubu on 4/11/2015.
 */
public class LibOneUSBLibaryRunner {

    public static void main(String[] args) {

        System.out.println(LibusbLibrary.libusb_get_version());

        System.out.println(LibusbLibrary.LIBUSBX_API_VERSION);
    }
}
