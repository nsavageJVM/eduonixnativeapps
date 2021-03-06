package eduonix.nativeapp.libusb;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup asyncio
<br>
 * Setup packet for control transfers.<br>
 * <i>native declaration : libusb.h:324</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("C:\\Users\\ubu\\eduonixnativeapps\\genwrap\\libusb")
public class libusb_control_setup extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public byte bmRequestType() {
		return this.io.getByteField(this, 0);
	}
	@Field(0) 
	public libusb_control_setup bmRequestType(byte bmRequestType) {
		this.io.setByteField(this, 0, bmRequestType);
		return this;
	}
	@Field(1) 
	public byte bRequest() {
		return this.io.getByteField(this, 1);
	}
	@Field(1) 
	public libusb_control_setup bRequest(byte bRequest) {
		this.io.setByteField(this, 1, bRequest);
		return this;
	}
	@Field(2) 
	public short wValue() {
		return this.io.getShortField(this, 2);
	}
	@Field(2) 
	public libusb_control_setup wValue(short wValue) {
		this.io.setShortField(this, 2, wValue);
		return this;
	}
	@Field(3) 
	public short wIndex() {
		return this.io.getShortField(this, 3);
	}
	@Field(3) 
	public libusb_control_setup wIndex(short wIndex) {
		this.io.setShortField(this, 3, wIndex);
		return this;
	}
	@Field(4) 
	public short wLength() {
		return this.io.getShortField(this, 4);
	}
	@Field(4) 
	public libusb_control_setup wLength(short wLength) {
		this.io.setShortField(this, 4, wLength);
		return this;
	}
	public libusb_control_setup() {
		super();
	}
	public libusb_control_setup(Pointer pointer) {
		super(pointer);
	}
}
