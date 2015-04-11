package libusblibrary;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup desc<br>
 * A structure representing the SuperSpeed USB Device Capability descriptor<br>
 * This descriptor is documented in section 9.6.2.2 of the USB 3.0 specification.<br>
 * All multiple-byte fields are represented in host-endian format.<br>
 * <i>native declaration : libusb.h:300</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("LibusbLibrary") 
public class libusb_ss_usb_device_capability_descriptor extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public byte bLength() {
		return this.io.getByteField(this, 0);
	}
	@Field(0) 
	public libusb_ss_usb_device_capability_descriptor bLength(byte bLength) {
		this.io.setByteField(this, 0, bLength);
		return this;
	}
	@Field(1) 
	public byte bDescriptorType() {
		return this.io.getByteField(this, 1);
	}
	@Field(1) 
	public libusb_ss_usb_device_capability_descriptor bDescriptorType(byte bDescriptorType) {
		this.io.setByteField(this, 1, bDescriptorType);
		return this;
	}
	@Field(2) 
	public byte bDevCapabilityType() {
		return this.io.getByteField(this, 2);
	}
	@Field(2) 
	public libusb_ss_usb_device_capability_descriptor bDevCapabilityType(byte bDevCapabilityType) {
		this.io.setByteField(this, 2, bDevCapabilityType);
		return this;
	}
	@Field(3) 
	public byte bmAttributes() {
		return this.io.getByteField(this, 3);
	}
	@Field(3) 
	public libusb_ss_usb_device_capability_descriptor bmAttributes(byte bmAttributes) {
		this.io.setByteField(this, 3, bmAttributes);
		return this;
	}
	@Field(4) 
	public short wSpeedSupported() {
		return this.io.getShortField(this, 4);
	}
	@Field(4) 
	public libusb_ss_usb_device_capability_descriptor wSpeedSupported(short wSpeedSupported) {
		this.io.setShortField(this, 4, wSpeedSupported);
		return this;
	}
	@Field(5) 
	public byte bFunctionalitySupport() {
		return this.io.getByteField(this, 5);
	}
	@Field(5) 
	public libusb_ss_usb_device_capability_descriptor bFunctionalitySupport(byte bFunctionalitySupport) {
		this.io.setByteField(this, 5, bFunctionalitySupport);
		return this;
	}
	@Field(6) 
	public byte bU1DevExitLat() {
		return this.io.getByteField(this, 6);
	}
	@Field(6) 
	public libusb_ss_usb_device_capability_descriptor bU1DevExitLat(byte bU1DevExitLat) {
		this.io.setByteField(this, 6, bU1DevExitLat);
		return this;
	}
	@Field(7) 
	public short bU2DevExitLat() {
		return this.io.getShortField(this, 7);
	}
	@Field(7) 
	public libusb_ss_usb_device_capability_descriptor bU2DevExitLat(short bU2DevExitLat) {
		this.io.setShortField(this, 7, bU2DevExitLat);
		return this;
	}
	public libusb_ss_usb_device_capability_descriptor() {
		super();
	}
	public libusb_ss_usb_device_capability_descriptor(Pointer pointer) {
		super(pointer);
	}
}
