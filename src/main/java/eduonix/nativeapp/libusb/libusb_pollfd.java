package eduonix.nativeapp.libusb;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup poll
<br>
 * File descriptor for polling<br>
 * <i>native declaration : libusb.h:1048</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("C:\\Users\\ubu\\eduonixnativeapps\\genwrap\\libusb")
public class libusb_pollfd extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public int fd() {
		return this.io.getIntField(this, 0);
	}
	@Field(0) 
	public libusb_pollfd fd(int fd) {
		this.io.setIntField(this, 0, fd);
		return this;
	}
	@Field(1) 
	public short events() {
		return this.io.getShortField(this, 1);
	}
	@Field(1) 
	public libusb_pollfd events(short events) {
		this.io.setShortField(this, 1, events);
		return this;
	}
	public libusb_pollfd() {
		super();
	}
	public libusb_pollfd(Pointer pointer) {
		super(pointer);
	}
}
