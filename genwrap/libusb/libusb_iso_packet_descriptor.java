package libusb;
import libusb.LibusbLibrary.libusb_transfer_status;
import org.bridj.BridJ;
import org.bridj.IntValuedEnum;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * \ingroup asyncio
 * Isochronous packet descriptor.<br>
 * <i>native declaration : libusb.h:495</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("libusb") 
public class libusb_iso_packet_descriptor extends StructObject {
	static {
		BridJ.register();
	}
	@Field(0) 
	public int length() {
		return this.io.getIntField(this, 0);
	}
	@Field(0) 
	public libusb_iso_packet_descriptor length(int length) {
		this.io.setIntField(this, 0, length);
		return this;
	}
	@Field(1) 
	public int actual_length() {
		return this.io.getIntField(this, 1);
	}
	@Field(1) 
	public libusb_iso_packet_descriptor actual_length(int actual_length) {
		this.io.setIntField(this, 1, actual_length);
		return this;
	}
	/** C type : libusb_transfer_status */
	@Field(2) 
	public IntValuedEnum<libusb_transfer_status > status() {
		return this.io.getEnumField(this, 2);
	}
	/** C type : libusb_transfer_status */
	@Field(2) 
	public libusb_iso_packet_descriptor status(IntValuedEnum<libusb_transfer_status > status) {
		this.io.setEnumField(this, 2, status);
		return this;
	}
	public libusb_iso_packet_descriptor() {
		super();
	}
	public libusb_iso_packet_descriptor(Pointer pointer) {
		super(pointer);
	}
}