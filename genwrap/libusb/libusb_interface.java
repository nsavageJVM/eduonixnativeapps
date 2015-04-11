package libusb;
import org.bridj.BridJ;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup desc
 * A collection of alternate settings for a particular USB interface.<br>
 * <i>native declaration : libusb.h:214</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("libusb") 
public class libusb_interface extends StructObject {
	static {
		BridJ.register();
	}
	/** C type : libusb_interface_descriptor* */
	@Field(0) 
	public Pointer<libusb_interface_descriptor > altsetting() {
		return this.io.getPointerField(this, 0);
	}
	/** C type : libusb_interface_descriptor* */
	@Field(0) 
	public libusb_interface altsetting(Pointer<libusb_interface_descriptor > altsetting) {
		this.io.setPointerField(this, 0, altsetting);
		return this;
	}
	@Field(1) 
	public int num_altsetting() {
		return this.io.getIntField(this, 1);
	}
	@Field(1) 
	public libusb_interface num_altsetting(int num_altsetting) {
		this.io.setIntField(this, 1, num_altsetting);
		return this;
	}
	public libusb_interface() {
		super();
	}
	public libusb_interface(Pointer pointer) {
		super(pointer);
	}
}