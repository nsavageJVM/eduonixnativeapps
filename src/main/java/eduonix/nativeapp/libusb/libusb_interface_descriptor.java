package eduonix.nativeapp.libusb;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup desc
<br>
 * A structure representing the standard USB interface descriptor. This
<br>
 * descriptor is documented in section 9.6.5 of the USB 3.0 specification.
<br>
 * All multiple-byte fields are represented in host-endian format.<br>
 * <i>native declaration : libusb.h:206</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("C:\\Users\\ubu\\eduonixnativeapps\\genwrap\\libusb")
public class libusb_interface_descriptor extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public byte bLength() {
		return this.io.getByteField(this, 0);
	}
	@Field(0) 
	public libusb_interface_descriptor bLength(byte bLength) {
		this.io.setByteField(this, 0, bLength);
		return this;
	}
	@Field(1) 
	public byte bDescriptorType() {
		return this.io.getByteField(this, 1);
	}
	@Field(1) 
	public libusb_interface_descriptor bDescriptorType(byte bDescriptorType) {
		this.io.setByteField(this, 1, bDescriptorType);
		return this;
	}
	@Field(2) 
	public byte bInterfaceNumber() {
		return this.io.getByteField(this, 2);
	}
	@Field(2) 
	public libusb_interface_descriptor bInterfaceNumber(byte bInterfaceNumber) {
		this.io.setByteField(this, 2, bInterfaceNumber);
		return this;
	}
	@Field(3) 
	public byte bAlternateSetting() {
		return this.io.getByteField(this, 3);
	}
	@Field(3) 
	public libusb_interface_descriptor bAlternateSetting(byte bAlternateSetting) {
		this.io.setByteField(this, 3, bAlternateSetting);
		return this;
	}
	@Field(4) 
	public byte bNumEndpoints() {
		return this.io.getByteField(this, 4);
	}
	@Field(4) 
	public libusb_interface_descriptor bNumEndpoints(byte bNumEndpoints) {
		this.io.setByteField(this, 4, bNumEndpoints);
		return this;
	}
	@Field(5) 
	public byte bInterfaceClass() {
		return this.io.getByteField(this, 5);
	}
	@Field(5) 
	public libusb_interface_descriptor bInterfaceClass(byte bInterfaceClass) {
		this.io.setByteField(this, 5, bInterfaceClass);
		return this;
	}
	@Field(6) 
	public byte bInterfaceSubClass() {
		return this.io.getByteField(this, 6);
	}
	@Field(6) 
	public libusb_interface_descriptor bInterfaceSubClass(byte bInterfaceSubClass) {
		this.io.setByteField(this, 6, bInterfaceSubClass);
		return this;
	}
	@Field(7) 
	public byte bInterfaceProtocol() {
		return this.io.getByteField(this, 7);
	}
	@Field(7) 
	public libusb_interface_descriptor bInterfaceProtocol(byte bInterfaceProtocol) {
		this.io.setByteField(this, 7, bInterfaceProtocol);
		return this;
	}
	@Field(8) 
	public byte iInterface() {
		return this.io.getByteField(this, 8);
	}
	@Field(8) 
	public libusb_interface_descriptor iInterface(byte iInterface) {
		this.io.setByteField(this, 8, iInterface);
		return this;
	}
	/** C type : libusb_endpoint_descriptor* */
	@Field(9) 
	public Pointer<libusb_endpoint_descriptor > endpoint() {
		return this.io.getPointerField(this, 9);
	}
	/** C type : libusb_endpoint_descriptor* */
	@Field(9) 
	public libusb_interface_descriptor endpoint(Pointer<libusb_endpoint_descriptor > endpoint) {
		this.io.setPointerField(this, 9, endpoint);
		return this;
	}
	/** C type : const unsigned char* */
	@Field(10) 
	public Pointer<Byte > extra() {
		return this.io.getPointerField(this, 10);
	}
	/** C type : const unsigned char* */
	@Field(10) 
	public libusb_interface_descriptor extra(Pointer<Byte > extra) {
		this.io.setPointerField(this, 10, extra);
		return this;
	}
	@Field(11) 
	public int extra_length() {
		return this.io.getIntField(this, 11);
	}
	@Field(11) 
	public libusb_interface_descriptor extra_length(int extra_length) {
		this.io.setIntField(this, 11, extra_length);
		return this;
	}
	public libusb_interface_descriptor() {
		super();
	}
	public libusb_interface_descriptor(Pointer pointer) {
		super(pointer);
	}
}
