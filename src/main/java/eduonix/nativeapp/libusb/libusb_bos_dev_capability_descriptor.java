package eduonix.nativeapp.libusb;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Array;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup desc
<br>
 * A generic representation of a BOS Device Capability descriptor. It is
<br>
 * advised to check bDevCapabilityType and call the matching
<br>
 * libusb_get_*_descriptor function to get a structure fully matching the type.<br>
 * <i>native declaration : libusb.h:259</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("C:\\Users\\ubu\\eduonixnativeapps\\genwrap\\libusb")
public class libusb_bos_dev_capability_descriptor extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public byte bLength() {
		return this.io.getByteField(this, 0);
	}
	@Field(0) 
	public libusb_bos_dev_capability_descriptor bLength(byte bLength) {
		this.io.setByteField(this, 0, bLength);
		return this;
	}
	@Field(1) 
	public byte bDescriptorType() {
		return this.io.getByteField(this, 1);
	}
	@Field(1) 
	public libusb_bos_dev_capability_descriptor bDescriptorType(byte bDescriptorType) {
		this.io.setByteField(this, 1, bDescriptorType);
		return this;
	}
	@Field(2) 
	public byte bDevCapabilityType() {
		return this.io.getByteField(this, 2);
	}
	@Field(2) 
	public libusb_bos_dev_capability_descriptor bDevCapabilityType(byte bDevCapabilityType) {
		this.io.setByteField(this, 2, bDevCapabilityType);
		return this;
	}
	/** C type : uint8_t[0] */
	@Array({0}) 
	@Field(3) 
	public Pointer<Byte > dev_capability_data() {
		return this.io.getPointerField(this, 3);
	}
	public libusb_bos_dev_capability_descriptor() {
		super();
	}
	public libusb_bos_dev_capability_descriptor(Pointer pointer) {
		super(pointer);
	}
}
