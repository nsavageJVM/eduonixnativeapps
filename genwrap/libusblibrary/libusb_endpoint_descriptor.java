package libusblibrary;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup desc<br>
 * A structure representing the standard USB endpoint descriptor. This<br>
 * descriptor is documented in section 9.6.6 of the USB 3.0 specification.<br>
 * All multiple-byte fields are represented in host-endian format.<br>
 * <i>native declaration : libusb.h:186</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("LibusbLibrary") 
public class libusb_endpoint_descriptor extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public byte bLength() {
		return this.io.getByteField(this, 0);
	}
	@Field(0) 
	public libusb_endpoint_descriptor bLength(byte bLength) {
		this.io.setByteField(this, 0, bLength);
		return this;
	}
	@Field(1) 
	public byte bDescriptorType() {
		return this.io.getByteField(this, 1);
	}
	@Field(1) 
	public libusb_endpoint_descriptor bDescriptorType(byte bDescriptorType) {
		this.io.setByteField(this, 1, bDescriptorType);
		return this;
	}
	@Field(2) 
	public byte bEndpointAddress() {
		return this.io.getByteField(this, 2);
	}
	@Field(2) 
	public libusb_endpoint_descriptor bEndpointAddress(byte bEndpointAddress) {
		this.io.setByteField(this, 2, bEndpointAddress);
		return this;
	}
	@Field(3) 
	public byte bmAttributes() {
		return this.io.getByteField(this, 3);
	}
	@Field(3) 
	public libusb_endpoint_descriptor bmAttributes(byte bmAttributes) {
		this.io.setByteField(this, 3, bmAttributes);
		return this;
	}
	@Field(4) 
	public short wMaxPacketSize() {
		return this.io.getShortField(this, 4);
	}
	@Field(4) 
	public libusb_endpoint_descriptor wMaxPacketSize(short wMaxPacketSize) {
		this.io.setShortField(this, 4, wMaxPacketSize);
		return this;
	}
	@Field(5) 
	public byte bInterval() {
		return this.io.getByteField(this, 5);
	}
	@Field(5) 
	public libusb_endpoint_descriptor bInterval(byte bInterval) {
		this.io.setByteField(this, 5, bInterval);
		return this;
	}
	@Field(6) 
	public byte bRefresh() {
		return this.io.getByteField(this, 6);
	}
	@Field(6) 
	public libusb_endpoint_descriptor bRefresh(byte bRefresh) {
		this.io.setByteField(this, 6, bRefresh);
		return this;
	}
	@Field(7) 
	public byte bSynchAddress() {
		return this.io.getByteField(this, 7);
	}
	@Field(7) 
	public libusb_endpoint_descriptor bSynchAddress(byte bSynchAddress) {
		this.io.setByteField(this, 7, bSynchAddress);
		return this;
	}
	/** C type : const unsigned char* */
	@Field(8) 
	public Pointer<Byte > extra() {
		return this.io.getPointerField(this, 8);
	}
	/** C type : const unsigned char* */
	@Field(8) 
	public libusb_endpoint_descriptor extra(Pointer<Byte > extra) {
		this.io.setPointerField(this, 8, extra);
		return this;
	}
	@Field(9) 
	public int extra_length() {
		return this.io.getIntField(this, 9);
	}
	@Field(9) 
	public libusb_endpoint_descriptor extra_length(int extra_length) {
		this.io.setIntField(this, 9, extra_length);
		return this;
	}
	public libusb_endpoint_descriptor() {
		super();
	}
	public libusb_endpoint_descriptor(Pointer pointer) {
		super(pointer);
	}
}
