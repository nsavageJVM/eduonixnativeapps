package libusblibrary;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup desc<br>
 * A structure representing the standard USB configuration descriptor. This<br>
 * descriptor is documented in section 9.6.3 of the USB 3.0 specification.<br>
 * All multiple-byte fields are represented in host-endian format.<br>
 * <i>native declaration : libusb.h:233</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("LibusbLibrary") 
public class libusb_config_descriptor extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public byte bLength() {
		return this.io.getByteField(this, 0);
	}
	@Field(0) 
	public libusb_config_descriptor bLength(byte bLength) {
		this.io.setByteField(this, 0, bLength);
		return this;
	}
	@Field(1) 
	public byte bDescriptorType() {
		return this.io.getByteField(this, 1);
	}
	@Field(1) 
	public libusb_config_descriptor bDescriptorType(byte bDescriptorType) {
		this.io.setByteField(this, 1, bDescriptorType);
		return this;
	}
	@Field(2) 
	public short wTotalLength() {
		return this.io.getShortField(this, 2);
	}
	@Field(2) 
	public libusb_config_descriptor wTotalLength(short wTotalLength) {
		this.io.setShortField(this, 2, wTotalLength);
		return this;
	}
	@Field(3) 
	public byte bNumInterfaces() {
		return this.io.getByteField(this, 3);
	}
	@Field(3) 
	public libusb_config_descriptor bNumInterfaces(byte bNumInterfaces) {
		this.io.setByteField(this, 3, bNumInterfaces);
		return this;
	}
	@Field(4) 
	public byte bConfigurationValue() {
		return this.io.getByteField(this, 4);
	}
	@Field(4) 
	public libusb_config_descriptor bConfigurationValue(byte bConfigurationValue) {
		this.io.setByteField(this, 4, bConfigurationValue);
		return this;
	}
	@Field(5) 
	public byte iConfiguration() {
		return this.io.getByteField(this, 5);
	}
	@Field(5) 
	public libusb_config_descriptor iConfiguration(byte iConfiguration) {
		this.io.setByteField(this, 5, iConfiguration);
		return this;
	}
	@Field(6) 
	public byte bmAttributes() {
		return this.io.getByteField(this, 6);
	}
	@Field(6) 
	public libusb_config_descriptor bmAttributes(byte bmAttributes) {
		this.io.setByteField(this, 6, bmAttributes);
		return this;
	}
	@Field(7) 
	public byte MaxPower() {
		return this.io.getByteField(this, 7);
	}
	@Field(7) 
	public libusb_config_descriptor MaxPower(byte MaxPower) {
		this.io.setByteField(this, 7, MaxPower);
		return this;
	}
	/** C type : libusb_interface* */
	@Field(8) 
	public Pointer<libusb_interface > interface$() {
		return this.io.getPointerField(this, 8);
	}
	/** C type : libusb_interface* */
	@Field(8) 
	public libusb_config_descriptor interface$(Pointer<libusb_interface > interface$) {
		this.io.setPointerField(this, 8, interface$);
		return this;
	}
	/** C type : const unsigned char* */
	@Field(9) 
	public Pointer<Byte > extra() {
		return this.io.getPointerField(this, 9);
	}
	/** C type : const unsigned char* */
	@Field(9) 
	public libusb_config_descriptor extra(Pointer<Byte > extra) {
		this.io.setPointerField(this, 9, extra);
		return this;
	}
	@Field(10) 
	public int extra_length() {
		return this.io.getIntField(this, 10);
	}
	@Field(10) 
	public libusb_config_descriptor extra_length(int extra_length) {
		this.io.setIntField(this, 10, extra_length);
		return this;
	}
	public libusb_config_descriptor() {
		super();
	}
	public libusb_config_descriptor(Pointer pointer) {
		super(pointer);
	}
}
