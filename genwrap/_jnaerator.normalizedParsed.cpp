/** ssize_t is also not available (copy/paste from MinGW) */
typedef int ssize_t;
/** stdint.h is not available on older MSVC */
typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;




extern ""C"" {
/**
	 * \ingroup misc
<br>
	 * Convert a 16-bit value from host-endian to little-endian format. On
<br>
	 * little endian systems, this function does nothing. On big endian systems,
<br>
	 * the bytes are swapped.
<br>
	 * \param x the host-endian value to convert
<br>
	 * \returns the value in little-endian byte order<br>
	 * Original signature : <code>uint16_t libusb_cpu_to_le16(const uint16_t)</code>
	 */
	static inline uint16_t libusb_cpu_to_le16(const uint16_t x) {
		libusb_cpu_to_le16__tmp_union _tmp;
		_tmp.b8[1] = (uint8_t)(x >> 8);
		_tmp.b8[0] = (uint8_t)(x & 0xff);
		return _tmp.b16;
	}
	/**
	 * \ingroup desc
<br>
	 * Device and/or Interface Class codes
	 */
	enum libusb_class_code {
		LIBUSB_CLASS_PER_INTERFACE = 0,
		LIBUSB_CLASS_AUDIO = 1,
		LIBUSB_CLASS_COMM = 2,
		LIBUSB_CLASS_HID = 3,
		LIBUSB_CLASS_PHYSICAL = 5,
		LIBUSB_CLASS_PRINTER = 7,
		LIBUSB_CLASS_PTP = 6 /* legacy name from libusb-0.1 usb.h */,
		LIBUSB_CLASS_IMAGE = 6,
		LIBUSB_CLASS_MASS_STORAGE = 8,
		LIBUSB_CLASS_HUB = 9,
		LIBUSB_CLASS_DATA = 10,
		LIBUSB_CLASS_SMART_CARD = 0x0b,
		LIBUSB_CLASS_CONTENT_SECURITY = 0x0d,
		LIBUSB_CLASS_VIDEO = 0x0e,
		LIBUSB_CLASS_PERSONAL_HEALTHCARE = 0x0f,
		LIBUSB_CLASS_DIAGNOSTIC_DEVICE = 0xdc,
		LIBUSB_CLASS_WIRELESS = 0xe0,
		LIBUSB_CLASS_APPLICATION = 0xfe,
		LIBUSB_CLASS_VENDOR_SPEC = 0xff
	};
	/**
	 * \ingroup desc
<br>
	 * Descriptor types as defined by the USB specification.
	 */
	enum libusb_descriptor_type {
		LIBUSB_DT_DEVICE = 0x01,
		LIBUSB_DT_CONFIG = 0x02,
		LIBUSB_DT_STRING = 0x03,
		LIBUSB_DT_INTERFACE = 0x04,
		LIBUSB_DT_ENDPOINT = 0x05,
		LIBUSB_DT_BOS = 0x0f,
		LIBUSB_DT_DEVICE_CAPABILITY = 0x10,
		LIBUSB_DT_HID = 0x21,
		LIBUSB_DT_REPORT = 0x22,
		LIBUSB_DT_PHYSICAL = 0x23,
		LIBUSB_DT_HUB = 0x29,
		LIBUSB_DT_SUPERSPEED_HUB = 0x2a,
		LIBUSB_DT_SS_ENDPOINT_COMPANION = 0x30
	};
	/**
	 * \ingroup desc
<br>
	 * Endpoint direction. Values for bit 7 of the
<br>
	 * \ref libusb_endpoint_descriptor::bEndpointAddress "endpoint address" scheme.
	 */
	enum libusb_endpoint_direction {
		LIBUSB_ENDPOINT_IN = 0x80,
		LIBUSB_ENDPOINT_OUT = 0x00
	};
	/**
	 * \ingroup desc
<br>
	 * Endpoint transfer type. Values for bits 0:1 of the
<br>
	 * \ref libusb_endpoint_descriptor::bmAttributes "endpoint attributes" field.
	 */
	enum libusb_transfer_type {
		LIBUSB_TRANSFER_TYPE_CONTROL = 0,
		LIBUSB_TRANSFER_TYPE_ISOCHRONOUS = 1,
		LIBUSB_TRANSFER_TYPE_BULK = 2,
		LIBUSB_TRANSFER_TYPE_INTERRUPT = 3,
		LIBUSB_TRANSFER_TYPE_BULK_STREAM = 4
	};
	/**
	 * \ingroup misc
<br>
	 * Standard requests, as defined in table 9-5 of the USB 3.0 specifications
	 */
	enum libusb_standard_request {
		LIBUSB_REQUEST_GET_STATUS = 0x00,
		LIBUSB_REQUEST_CLEAR_FEATURE = 0x01,
		LIBUSB_REQUEST_SET_FEATURE = 0x03,
		LIBUSB_REQUEST_SET_ADDRESS = 0x05,
		LIBUSB_REQUEST_GET_DESCRIPTOR = 0x06,
		LIBUSB_REQUEST_SET_DESCRIPTOR = 0x07,
		LIBUSB_REQUEST_GET_CONFIGURATION = 0x08,
		LIBUSB_REQUEST_SET_CONFIGURATION = 0x09,
		LIBUSB_REQUEST_GET_INTERFACE = 0x0A,
		LIBUSB_REQUEST_SET_INTERFACE = 0x0B,
		LIBUSB_REQUEST_SYNCH_FRAME = 0x0C,
		LIBUSB_REQUEST_SET_SEL = 0x30,
		LIBUSB_SET_ISOCH_DELAY = 0x31
	};
	/**
	 * \ingroup misc
<br>
	 * Request type bits of the
<br>
	 * \ref libusb_control_setup::bmRequestType "bmRequestType" field in control
<br>
	 * transfers.
	 */
	enum libusb_request_type {
		LIBUSB_REQUEST_TYPE_STANDARD = (0x00 << 5),
		LIBUSB_REQUEST_TYPE_CLASS = (0x01 << 5),
		LIBUSB_REQUEST_TYPE_VENDOR = (0x02 << 5),
		LIBUSB_REQUEST_TYPE_RESERVED = (0x03 << 5)
	};
	/**
	 * \ingroup misc
<br>
	 * Recipient bits of the
<br>
	 * \ref libusb_control_setup::bmRequestType "bmRequestType" field in control
<br>
	 * transfers. Values 4 through 31 are reserved.
	 */
	enum libusb_request_recipient {
		LIBUSB_RECIPIENT_DEVICE = 0x00,
		LIBUSB_RECIPIENT_INTERFACE = 0x01,
		LIBUSB_RECIPIENT_ENDPOINT = 0x02,
		LIBUSB_RECIPIENT_OTHER = 0x03
	};
	/**
	 * \ingroup desc
<br>
	 * Synchronization type for isochronous endpoints. Values for bits 2:3 of the
<br>
	 * \ref libusb_endpoint_descriptor::bmAttributes "bmAttributes" field in
<br>
	 * libusb_endpoint_descriptor.
	 */
	enum libusb_iso_sync_type {
		LIBUSB_ISO_SYNC_TYPE_NONE = 0,
		LIBUSB_ISO_SYNC_TYPE_ASYNC = 1,
		LIBUSB_ISO_SYNC_TYPE_ADAPTIVE = 2,
		LIBUSB_ISO_SYNC_TYPE_SYNC = 3
	};
	/**
	 * \ingroup desc
<br>
	 * Usage type for isochronous endpoints. Values for bits 4:5 of the
<br>
	 * \ref libusb_endpoint_descriptor::bmAttributes "bmAttributes" field in
<br>
	 * libusb_endpoint_descriptor.
	 */
	enum libusb_iso_usage_type {
		LIBUSB_ISO_USAGE_TYPE_DATA = 0,
		LIBUSB_ISO_USAGE_TYPE_FEEDBACK = 1,
		LIBUSB_ISO_USAGE_TYPE_IMPLICIT = 2
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the standard USB device descriptor. This
<br>
	 * descriptor is documented in section 9.6.1 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields are represented in host-endian format.
	 */
	struct libusb_device_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint16_t bcdUSB;
		uint8_t bDeviceClass;
		uint8_t bDeviceSubClass;
		uint8_t bDeviceProtocol;
		uint8_t bMaxPacketSize0;
		uint16_t idVendor;
		uint16_t idProduct;
		uint16_t bcdDevice;
		uint8_t iManufacturer;
		uint8_t iProduct;
		uint8_t iSerialNumber;
		uint8_t bNumConfigurations;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the standard USB endpoint descriptor. This
<br>
	 * descriptor is documented in section 9.6.6 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields are represented in host-endian format.
	 */
	struct libusb_endpoint_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint8_t bEndpointAddress;
		uint8_t bmAttributes;
		uint16_t wMaxPacketSize;
		uint8_t bInterval;
		uint8_t bRefresh;
		uint8_t bSynchAddress;
		const unsigned char* extra;
		int extra_length;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the standard USB interface descriptor. This
<br>
	 * descriptor is documented in section 9.6.5 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields are represented in host-endian format.
	 */
	struct libusb_interface_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint8_t bInterfaceNumber;
		uint8_t bAlternateSetting;
		uint8_t bNumEndpoints;
		uint8_t bInterfaceClass;
		uint8_t bInterfaceSubClass;
		uint8_t bInterfaceProtocol;
		uint8_t iInterface;
		libusb_endpoint_descriptor* endpoint;
		const unsigned char* extra;
		int extra_length;
	};
	/**
	 * \ingroup desc
<br>
	 * A collection of alternate settings for a particular USB interface.
	 */
	struct libusb_interface {
		libusb_interface_descriptor* altsetting;
		int num_altsetting;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the standard USB configuration descriptor. This
<br>
	 * descriptor is documented in section 9.6.3 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields are represented in host-endian format.
	 */
	struct libusb_config_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint16_t wTotalLength;
		uint8_t bNumInterfaces;
		uint8_t bConfigurationValue;
		uint8_t iConfiguration;
		uint8_t bmAttributes;
		uint8_t MaxPower;
		libusb_interface* interface;
		const unsigned char* extra;
		int extra_length;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the superspeed endpoint companion
<br>
	 * descriptor. This descriptor is documented in section 9.6.7 of
<br>
	 * the USB 3.0 specification. All multiple-byte fields are represented in
<br>
	 * host-endian format.
	 */
	struct libusb_ss_endpoint_companion_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint8_t bMaxBurst;
		uint8_t bmAttributes;
		uint16_t wBytesPerInterval;
	};
	/**
	 * \ingroup desc
<br>
	 * A generic representation of a BOS Device Capability descriptor. It is
<br>
	 * advised to check bDevCapabilityType and call the matching
<br>
	 * libusb_get_*_descriptor function to get a structure fully matching the type.
	 */
	struct libusb_bos_dev_capability_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint8_t bDevCapabilityType;
		uint8_t[0] dev_capability_data;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the Binary Device Object Store (BOS) descriptor.
<br>
	 * This descriptor is documented in section 9.6.2 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields are represented in host-endian format.
	 */
	struct libusb_bos_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint16_t wTotalLength;
		uint8_t bNumDeviceCaps;
		libusb_bos_dev_capability_descriptor*[0] dev_capability;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the USB 2.0 Extension descriptor
<br>
	 * This descriptor is documented in section 9.6.2.1 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields are represented in host-endian format.
	 */
	struct libusb_usb_2_0_extension_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint8_t bDevCapabilityType;
		uint32_t bmAttributes;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the SuperSpeed USB Device Capability descriptor
<br>
	 * This descriptor is documented in section 9.6.2.2 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields are represented in host-endian format.
	 */
	struct libusb_ss_usb_device_capability_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint8_t bDevCapabilityType;
		uint8_t bmAttributes;
		uint16_t wSpeedSupported;
		uint8_t bFunctionalitySupport;
		uint8_t bU1DevExitLat;
		uint16_t bU2DevExitLat;
	};
	/**
	 * \ingroup desc
<br>
	 * A structure representing the Container ID descriptor.
<br>
	 * This descriptor is documented in section 9.6.2.3 of the USB 3.0 specification.
<br>
	 * All multiple-byte fields, except UUIDs, are represented in host-endian format.
	 */
	struct libusb_container_id_descriptor {
		uint8_t bLength;
		uint8_t bDescriptorType;
		uint8_t bDevCapabilityType;
		uint8_t bReserved;
		uint8_t[16] ContainerID;
	};
	/**
	 * \ingroup asyncio
<br>
	 * Setup packet for control transfers.
	 */
	struct libusb_control_setup {
		uint8_t bmRequestType;
		uint8_t bRequest;
		uint16_t wValue;
		uint16_t wIndex;
		uint16_t wLength;
	};
	/** libusb */
	struct libusb_context;
	struct libusb_device;
	struct libusb_device_handle;
	struct libusb_hotplug_callback;
	/**
	 * \ingroup lib
<br>
	 * Structure providing the version of the libusb runtime
	 */
	struct libusb_version {
		const uint16_t major;
		const uint16_t minor;
		const uint16_t micro;
		const uint16_t nano;
		const char* rc;
		const char* describe;
	};
	/**
	 * \ingroup lib
<br>
	 * Structure representing a libusb session. The concept of individual libusb
<br>
	 * sessions allows for your program to use two libraries (or dynamically
<br>
	 * load two modules) which both independently use libusb. This will prevent
<br>
	 * interference between the individual libusb users - for example
<br>
	 * libusb_set_debug() will not affect the other user of the library, and
<br>
	 * libusb_exit() will not destroy resources that the other user is still
<br>
	 * using.
<br>
	 * <br>
	 * Sessions are created by libusb_init() and destroyed through libusb_exit().
<br>
	 * If your application is guaranteed to only ever include a single libusb
<br>
	 * user (i.e. you), you do not have to worry about contexts: pass NULL in
<br>
	 * every function call where a context is required. The default context
<br>
	 * will be used.
<br>
	 * <br>
	 * For more information, see \ref contexts.
	 */
	typedef libusb_context libusb_context;
	/**
	 * \ingroup dev
<br>
	 * Structure representing a USB device detected on the system. This is an
<br>
	 * opaque type for which you are only ever provided with a pointer, usually
<br>
	 * originating from libusb_get_device_list().
<br>
	 * <br>
	 * Certain operations can be performed on a device, but in order to do any
<br>
	 * I/O you will have to first obtain a device handle using libusb_open().
<br>
	 * <br>
	 * Devices are reference counted with libusb_ref_device() and
<br>
	 * libusb_unref_device(), and are freed when the reference count reaches 0.
<br>
	 * New devices presented by libusb_get_device_list() have a reference count of
<br>
	 * 1, and libusb_free_device_list() can optionally decrease the reference count
<br>
	 * on all devices in the list. libusb_open() adds another reference which is
<br>
	 * later destroyed by libusb_close().
	 */
	typedef libusb_device libusb_device;
	/**
	 * \ingroup dev
<br>
	 * Structure representing a handle on a USB device. This is an opaque type for
<br>
	 * which you are only ever provided with a pointer, usually originating from
<br>
	 * libusb_open().
<br>
	 * <br>
	 * A device handle is used to perform I/O and other operations. When finished
<br>
	 * with a device handle, you should call libusb_close().
	 */
	typedef libusb_device_handle libusb_device_handle;
	/**
	 * \ingroup dev
<br>
	 * Speed codes. Indicates the speed at which the device is operating.
	 */
	enum libusb_speed {
		LIBUSB_SPEED_UNKNOWN = 0,
		LIBUSB_SPEED_LOW = 1,
		LIBUSB_SPEED_FULL = 2,
		LIBUSB_SPEED_HIGH = 3,
		LIBUSB_SPEED_SUPER = 4
	};
	/**
	 * \ingroup dev
<br>
	 * Supported speeds (wSpeedSupported) bitfield. Indicates what
<br>
	 * speeds the device supports.
	 */
	enum libusb_supported_speed {
		LIBUSB_LOW_SPEED_OPERATION = 1,
		LIBUSB_FULL_SPEED_OPERATION = 2,
		LIBUSB_HIGH_SPEED_OPERATION = 4,
		LIBUSB_SUPER_SPEED_OPERATION = 8
	};
	/**
	 * \ingroup dev
<br>
	 * Masks for the bits of the
<br>
	 * \ref libusb_usb_2_0_extension_descriptor::bmAttributes "bmAttributes" field
<br>
	 * of the USB 2.0 Extension descriptor.
	 */
	enum libusb_usb_2_0_extension_attributes {
		LIBUSB_BM_LPM_SUPPORT = 2
	};
	/**
	 * \ingroup dev
<br>
	 * Masks for the bits of the
<br>
	 * \ref libusb_ss_usb_device_capability_descriptor::bmAttributes "bmAttributes" field
<br>
	 * field of the SuperSpeed USB Device Capability descriptor.
	 */
	enum libusb_ss_usb_device_capability_attributes {
		LIBUSB_BM_LTM_SUPPORT = 2
	};
	/**
	 * \ingroup dev
<br>
	 * USB capability types
	 */
	enum libusb_bos_type {
		LIBUSB_BT_WIRELESS_USB_DEVICE_CAPABILITY = 1,
		LIBUSB_BT_USB_2_0_EXTENSION = 2,
		LIBUSB_BT_SS_USB_DEVICE_CAPABILITY = 3,
		LIBUSB_BT_CONTAINER_ID = 4
	};
	/**
	 * \ingroup misc
<br>
	 * Error codes. Most libusb functions return 0 on success or one of these
<br>
	 * codes on failure.
<br>
	 * You can call libusb_error_name() to retrieve a string representation of an
<br>
	 * error code or libusb_strerror() to get an end-user suitable description of
<br>
	 * an error code.
	 */
	enum libusb_error {
		LIBUSB_SUCCESS = 0,
		LIBUSB_ERROR_IO = -1,
		LIBUSB_ERROR_INVALID_PARAM = -2,
		LIBUSB_ERROR_ACCESS = -3,
		LIBUSB_ERROR_NO_DEVICE = -4,
		LIBUSB_ERROR_NOT_FOUND = -5,
		LIBUSB_ERROR_BUSY = -6,
		LIBUSB_ERROR_TIMEOUT = -7,
		LIBUSB_ERROR_OVERFLOW = -8,
		LIBUSB_ERROR_PIPE = -9,
		LIBUSB_ERROR_INTERRUPTED = -10,
		LIBUSB_ERROR_NO_MEM = -11,
		LIBUSB_ERROR_NOT_SUPPORTED = -12,
		LIBUSB_ERROR_OTHER = -99
	};
	/**
	 * \ingroup asyncio
<br>
	 * Transfer status codes
	 */
	enum libusb_transfer_status {
		LIBUSB_TRANSFER_COMPLETED,
		LIBUSB_TRANSFER_ERROR,
		LIBUSB_TRANSFER_TIMED_OUT,
		LIBUSB_TRANSFER_CANCELLED,
		LIBUSB_TRANSFER_STALL,
		LIBUSB_TRANSFER_NO_DEVICE,
		LIBUSB_TRANSFER_OVERFLOW
	};
	/**
	 * \ingroup asyncio
<br>
	 * libusb_transfer.flags values
	 */
	enum libusb_transfer_flags {
		LIBUSB_TRANSFER_SHORT_NOT_OK = 1 << 0,
		LIBUSB_TRANSFER_FREE_BUFFER = 1 << 1,
		LIBUSB_TRANSFER_FREE_TRANSFER = 1 << 2,
		LIBUSB_TRANSFER_ADD_ZERO_PACKET = 1 << 3
	};
	/**
	 * \ingroup asyncio
<br>
	 * Isochronous packet descriptor.
	 */
	struct libusb_iso_packet_descriptor {
		unsigned int length;
		unsigned int actual_length;
		libusb_transfer_status status;
		enum libusb_transfer_status {
		};
	};
	struct libusb_transfer;
	/**
	 * \ingroup asyncio
<br>
	 * Asynchronous transfer callback function type. When submitting asynchronous
<br>
	 * transfers, you pass a pointer to a callback function of this type via the
<br>
	 * \ref libusb_transfer::callback "callback" member of the libusb_transfer
<br>
	 * structure. libusb will call this function later, when the transfer has
<br>
	 * completed or failed. See \ref asyncio for more information.
<br>
	 * \param transfer The libusb_transfer struct the callback function is being
<br>
	 * notified about.
	 */
	typedef void (__stdcall *libusb_transfer_cb_fn)(libusb_transfer* transfer) libusb_transfer_cb_fn;
	/**
	 * \ingroup asyncio
<br>
	 * The generic USB transfer structure. The user populates this structure and
<br>
	 * then submits it in order to request a transfer. After the transfer has
<br>
	 * completed, the library populates the transfer with the results and passes
<br>
	 * it back to the user.
	 */
	struct libusb_transfer {
		libusb_device_handle* dev_handle;
		uint8_t flags;
		unsigned char endpoint;
		unsigned char type;
		unsigned int timeout;
		libusb_transfer_status status;
		int length;
		int actual_length;
		libusb_transfer_cb_fn callback;
		void* user_data;
		unsigned char* buffer;
		int num_iso_packets;
		libusb_iso_packet_descriptor[0] iso_packet_desc;
		enum libusb_transfer_status {
		};
	};
	/**
	 * \ingroup misc
<br>
	 * Capabilities supported by an instance of libusb on the current running
<br>
	 * platform. Test if the loaded library supports a given capability by calling
<br>
	 * \ref libusb_has_capability().
	 */
	enum libusb_capability {
		LIBUSB_CAP_HAS_CAPABILITY = 0x0000,
		LIBUSB_CAP_HAS_HOTPLUG = 0x0001,
		LIBUSB_CAP_HAS_HID_ACCESS = 0x0100,
		LIBUSB_CAP_SUPPORTS_DETACH_KERNEL_DRIVER = 0x0101
	};
	/**
	 * \ingroup lib
<br>
	 *  Log message levels.
<br>
	 *  - LIBUSB_LOG_LEVEL_NONE (0)    : no messages ever printed by the library (default)
<br>
	 *  - LIBUSB_LOG_LEVEL_ERROR (1)   : error messages are printed to stderr
<br>
	 *  - LIBUSB_LOG_LEVEL_WARNING (2) : warning and error messages are printed to stderr
<br>
	 *  - LIBUSB_LOG_LEVEL_INFO (3)    : informational messages are printed to stdout, warning
<br>
	 *    and error messages are printed to stderr
<br>
	 *  - LIBUSB_LOG_LEVEL_DEBUG (4)   : debug and informational messages are printed to stdout,
<br>
	 *    warnings and errors to stderr
	 */
	enum libusb_log_level {
		LIBUSB_LOG_LEVEL_NONE = 0,
		LIBUSB_LOG_LEVEL_ERROR,
		LIBUSB_LOG_LEVEL_WARNING,
		LIBUSB_LOG_LEVEL_INFO,
		LIBUSB_LOG_LEVEL_DEBUG
	};
	/** Original signature : <code>int libusb_init(libusb_context**)</code> */
	__stdcall int libusb_init(libusb_context** ctx);
	/** Original signature : <code>void libusb_exit(libusb_context*)</code> */
	__stdcall void libusb_exit(libusb_context* ctx);
	/** Original signature : <code>void libusb_set_debug(libusb_context*, int)</code> */
	__stdcall void libusb_set_debug(libusb_context* ctx, int level);
	/** Original signature : <code>libusb_version* libusb_get_version()</code> */
	const __stdcall libusb_version* libusb_get_version();
	/** Original signature : <code>int libusb_has_capability(uint32_t)</code> */
	__stdcall int libusb_has_capability(uint32_t capability);
	/** Original signature : <code>char* libusb_error_name(int)</code> */
	const __stdcall char* libusb_error_name(int errcode);
	/** Original signature : <code>int libusb_setlocale(const char*)</code> */
	__stdcall int libusb_setlocale(const char* locale);
	/** Original signature : <code>char* libusb_strerror(libusb_error)</code> */
	const __stdcall char* libusb_strerror(libusb_error errcode);
	/** Original signature : <code>ssize_t libusb_get_device_list(libusb_context*, libusb_device***)</code> */
	__stdcall ssize_t libusb_get_device_list(libusb_context* ctx, libusb_device*** list);
	/** Original signature : <code>void libusb_free_device_list(libusb_device**, int)</code> */
	__stdcall void libusb_free_device_list(libusb_device** list, int unref_devices);
	/** Original signature : <code>libusb_device* libusb_ref_device(libusb_device*)</code> */
	__stdcall libusb_device* libusb_ref_device(libusb_device* dev);
	/** Original signature : <code>void libusb_unref_device(libusb_device*)</code> */
	__stdcall void libusb_unref_device(libusb_device* dev);
	/** Original signature : <code>int libusb_get_configuration(libusb_device_handle*, int*)</code> */
	__stdcall int libusb_get_configuration(libusb_device_handle* dev, int* config);
	/** Original signature : <code>int libusb_get_device_descriptor(libusb_device*, libusb_device_descriptor*)</code> */
	__stdcall int libusb_get_device_descriptor(libusb_device* dev, libusb_device_descriptor* desc);
	/** Original signature : <code>int libusb_get_active_config_descriptor(libusb_device*, libusb_config_descriptor**)</code> */
	__stdcall int libusb_get_active_config_descriptor(libusb_device* dev, libusb_config_descriptor** config);
	/** Original signature : <code>int libusb_get_config_descriptor(libusb_device*, uint8_t, libusb_config_descriptor**)</code> */
	__stdcall int libusb_get_config_descriptor(libusb_device* dev, uint8_t config_index, libusb_config_descriptor** config);
	/** Original signature : <code>int libusb_get_config_descriptor_by_value(libusb_device*, uint8_t, libusb_config_descriptor**)</code> */
	__stdcall int libusb_get_config_descriptor_by_value(libusb_device* dev, uint8_t bConfigurationValue, libusb_config_descriptor** config);
	/** Original signature : <code>void libusb_free_config_descriptor(libusb_config_descriptor*)</code> */
	__stdcall void libusb_free_config_descriptor(libusb_config_descriptor* config);
	/** Original signature : <code>int libusb_get_ss_endpoint_companion_descriptor(libusb_context*, libusb_endpoint_descriptor*, libusb_ss_endpoint_companion_descriptor**)</code> */
	__stdcall int libusb_get_ss_endpoint_companion_descriptor(libusb_context* ctx, libusb_endpoint_descriptor* endpoint, libusb_ss_endpoint_companion_descriptor** ep_comp);
	/** Original signature : <code>void libusb_free_ss_endpoint_companion_descriptor(libusb_ss_endpoint_companion_descriptor*)</code> */
	__stdcall void libusb_free_ss_endpoint_companion_descriptor(libusb_ss_endpoint_companion_descriptor* ep_comp);
	/** Original signature : <code>int libusb_get_bos_descriptor(libusb_device_handle*, libusb_bos_descriptor**)</code> */
	__stdcall int libusb_get_bos_descriptor(libusb_device_handle* handle, libusb_bos_descriptor** bos);
	/** Original signature : <code>void libusb_free_bos_descriptor(libusb_bos_descriptor*)</code> */
	__stdcall void libusb_free_bos_descriptor(libusb_bos_descriptor* bos);
	/** Original signature : <code>int libusb_get_usb_2_0_extension_descriptor(libusb_context*, libusb_bos_dev_capability_descriptor*, libusb_usb_2_0_extension_descriptor**)</code> */
	__stdcall int libusb_get_usb_2_0_extension_descriptor(libusb_context* ctx, libusb_bos_dev_capability_descriptor* dev_cap, libusb_usb_2_0_extension_descriptor** usb_2_0_extension);
	/** Original signature : <code>void libusb_free_usb_2_0_extension_descriptor(libusb_usb_2_0_extension_descriptor*)</code> */
	__stdcall void libusb_free_usb_2_0_extension_descriptor(libusb_usb_2_0_extension_descriptor* usb_2_0_extension);
	/** Original signature : <code>int libusb_get_ss_usb_device_capability_descriptor(libusb_context*, libusb_bos_dev_capability_descriptor*, libusb_ss_usb_device_capability_descriptor**)</code> */
	__stdcall int libusb_get_ss_usb_device_capability_descriptor(libusb_context* ctx, libusb_bos_dev_capability_descriptor* dev_cap, libusb_ss_usb_device_capability_descriptor** ss_usb_device_cap);
	/** Original signature : <code>void libusb_free_ss_usb_device_capability_descriptor(libusb_ss_usb_device_capability_descriptor*)</code> */
	__stdcall void libusb_free_ss_usb_device_capability_descriptor(libusb_ss_usb_device_capability_descriptor* ss_usb_device_cap);
	/** Original signature : <code>int libusb_get_container_id_descriptor(libusb_context*, libusb_bos_dev_capability_descriptor*, libusb_container_id_descriptor**)</code> */
	__stdcall int libusb_get_container_id_descriptor(libusb_context* ctx, libusb_bos_dev_capability_descriptor* dev_cap, libusb_container_id_descriptor** container_id);
	/** Original signature : <code>void libusb_free_container_id_descriptor(libusb_container_id_descriptor*)</code> */
	__stdcall void libusb_free_container_id_descriptor(libusb_container_id_descriptor* container_id);
	/** Original signature : <code>uint8_t libusb_get_bus_number(libusb_device*)</code> */
	__stdcall uint8_t libusb_get_bus_number(libusb_device* dev);
	/** Original signature : <code>uint8_t libusb_get_port_number(libusb_device*)</code> */
	__stdcall uint8_t libusb_get_port_number(libusb_device* dev);
	/** Original signature : <code>int libusb_get_port_numbers(libusb_device*, uint8_t*, int)</code> */
	__stdcall int libusb_get_port_numbers(libusb_device* dev, uint8_t* port_numbers, int port_numbers_len);
	/** Original signature : <code>int libusb_get_port_path(libusb_context*, libusb_device*, uint8_t*, uint8_t)</code> */
	__stdcall int libusb_get_port_path(libusb_context* ctx, libusb_device* dev, uint8_t* path, uint8_t path_length);
	/** Original signature : <code>libusb_device* libusb_get_parent(libusb_device*)</code> */
	__stdcall libusb_device* libusb_get_parent(libusb_device* dev);
	/** Original signature : <code>uint8_t libusb_get_device_address(libusb_device*)</code> */
	__stdcall uint8_t libusb_get_device_address(libusb_device* dev);
	/** Original signature : <code>int libusb_get_device_speed(libusb_device*)</code> */
	__stdcall int libusb_get_device_speed(libusb_device* dev);
	/** Original signature : <code>int libusb_get_max_packet_size(libusb_device*, unsigned char)</code> */
	__stdcall int libusb_get_max_packet_size(libusb_device* dev, unsigned char endpoint);
	/** Original signature : <code>int libusb_get_max_iso_packet_size(libusb_device*, unsigned char)</code> */
	__stdcall int libusb_get_max_iso_packet_size(libusb_device* dev, unsigned char endpoint);
	/** Original signature : <code>int libusb_open(libusb_device*, libusb_device_handle**)</code> */
	__stdcall int libusb_open(libusb_device* dev, libusb_device_handle** handle);
	/** Original signature : <code>void libusb_close(libusb_device_handle*)</code> */
	__stdcall void libusb_close(libusb_device_handle* dev_handle);
	/** Original signature : <code>libusb_device* libusb_get_device(libusb_device_handle*)</code> */
	__stdcall libusb_device* libusb_get_device(libusb_device_handle* dev_handle);
	/** Original signature : <code>int libusb_set_configuration(libusb_device_handle*, int)</code> */
	__stdcall int libusb_set_configuration(libusb_device_handle* dev, int configuration);
	/** Original signature : <code>int libusb_claim_interface(libusb_device_handle*, int)</code> */
	__stdcall int libusb_claim_interface(libusb_device_handle* dev, int interface_number);
	/** Original signature : <code>int libusb_release_interface(libusb_device_handle*, int)</code> */
	__stdcall int libusb_release_interface(libusb_device_handle* dev, int interface_number);
	/** Original signature : <code>libusb_device_handle* libusb_open_device_with_vid_pid(libusb_context*, uint16_t, uint16_t)</code> */
	__stdcall libusb_device_handle* libusb_open_device_with_vid_pid(libusb_context* ctx, uint16_t vendor_id, uint16_t product_id);
	/** Original signature : <code>int libusb_set_interface_alt_setting(libusb_device_handle*, int, int)</code> */
	__stdcall int libusb_set_interface_alt_setting(libusb_device_handle* dev, int interface_number, int alternate_setting);
	/** Original signature : <code>int libusb_clear_halt(libusb_device_handle*, unsigned char)</code> */
	__stdcall int libusb_clear_halt(libusb_device_handle* dev, unsigned char endpoint);
	/** Original signature : <code>int libusb_reset_device(libusb_device_handle*)</code> */
	__stdcall int libusb_reset_device(libusb_device_handle* dev);
	/** Original signature : <code>int libusb_alloc_streams(libusb_device_handle*, uint32_t, unsigned char*, int)</code> */
	__stdcall int libusb_alloc_streams(libusb_device_handle* dev, uint32_t num_streams, unsigned char* endpoints, int num_endpoints);
	/** Original signature : <code>int libusb_free_streams(libusb_device_handle*, unsigned char*, int)</code> */
	__stdcall int libusb_free_streams(libusb_device_handle* dev, unsigned char* endpoints, int num_endpoints);
	/** Original signature : <code>int libusb_kernel_driver_active(libusb_device_handle*, int)</code> */
	__stdcall int libusb_kernel_driver_active(libusb_device_handle* dev, int interface_number);
	/** Original signature : <code>int libusb_detach_kernel_driver(libusb_device_handle*, int)</code> */
	__stdcall int libusb_detach_kernel_driver(libusb_device_handle* dev, int interface_number);
	/** Original signature : <code>int libusb_attach_kernel_driver(libusb_device_handle*, int)</code> */
	__stdcall int libusb_attach_kernel_driver(libusb_device_handle* dev, int interface_number);
	/** Original signature : <code>int libusb_set_auto_detach_kernel_driver(libusb_device_handle*, int)</code> */
	__stdcall int libusb_set_auto_detach_kernel_driver(libusb_device_handle* dev, int enable);
	/**
	 * \ingroup asyncio
<br>
	 * Get the data section of a control transfer. This convenience function is here
<br>
	 * to remind you that the data does not start until 8 bytes into the actual
<br>
	 * buffer, as the setup packet comes first.
<br>
	 * <br>
	 * Calling this function only makes sense from a transfer callback function,
<br>
	 * or situations where you have already allocated a suitably sized buffer at
<br>
	 * transfer->buffer.
<br>
	 * <br>
	 * \param transfer a transfer
<br>
	 * \returns pointer to the first byte of the data section<br>
	 * Original signature : <code>char* libusb_control_transfer_get_data(libusb_transfer*)</code>
	 */
	static inline unsigned char* libusb_control_transfer_get_data(libusb_transfer* transfer) {
		return transfer->buffer + (sizeof(libusb_control_setup));
	}
	/**
	 * \ingroup asyncio
<br>
	 * Get the control setup packet of a control transfer. This convenience
<br>
	 * function is here to remind you that the control setup occupies the first
<br>
	 * 8 bytes of the transfer data buffer.
<br>
	 * <br>
	 * Calling this function only makes sense from a transfer callback function,
<br>
	 * or situations where you have already allocated a suitably sized buffer at
<br>
	 * transfer->buffer.
<br>
	 * <br>
	 * \param transfer a transfer
<br>
	 * \returns a casted pointer to the start of the transfer data buffer<br>
	 * Original signature : <code>libusb_control_setup* libusb_control_transfer_get_setup(libusb_transfer*)</code>
	 */
	static inline libusb_control_setup* libusb_control_transfer_get_setup(libusb_transfer* transfer) {
		return (libusb_control_setup*)(void*)transfer->buffer;
	}
	/**
	 * \ingroup asyncio
<br>
	 * Helper function to populate the setup packet (first 8 bytes of the data
<br>
	 * buffer) for a control transfer. The wIndex, wValue and wLength values should
<br>
	 * be given in host-endian byte order.
<br>
	 * <br>
	 * \param buffer buffer to output the setup packet into
<br>
	 * This pointer must be aligned to at least 2 bytes boundary.
<br>
	 * \param bmRequestType see the
<br>
	 * \ref libusb_control_setup::bmRequestType "bmRequestType" field of
<br>
	 * \ref libusb_control_setup
<br>
	 * \param bRequest see the
<br>
	 * \ref libusb_control_setup::bRequest "bRequest" field of
<br>
	 * \ref libusb_control_setup
<br>
	 * \param wValue see the
<br>
	 * \ref libusb_control_setup::wValue "wValue" field of
<br>
	 * \ref libusb_control_setup
<br>
	 * \param wIndex see the
<br>
	 * \ref libusb_control_setup::wIndex "wIndex" field of
<br>
	 * \ref libusb_control_setup
<br>
	 * \param wLength see the
<br>
	 * \ref libusb_control_setup::wLength "wLength" field of
<br>
	 * \ref libusb_control_setup<br>
	 * Original signature : <code>void libusb_fill_control_setup(unsigned char*, uint8_t, uint8_t, uint16_t, uint16_t, uint16_t)</code>
	 */
	static inline void libusb_fill_control_setup(unsigned char* buffer, uint8_t bmRequestType, uint8_t bRequest, uint16_t wValue, uint16_t wIndex, uint16_t wLength) {
		libusb_control_setup* setup = (libusb_control_setup*)(void*)buffer;
		setup->bmRequestType = bmRequestType;
		setup->bRequest = bRequest;
		setup->wValue = libusb_cpu_to_le16(wValue);
		setup->wIndex = libusb_cpu_to_le16(wIndex);
		setup->wLength = libusb_cpu_to_le16(wLength);
	}
	/** Original signature : <code>libusb_transfer* libusb_alloc_transfer(int)</code> */
	__stdcall libusb_transfer* libusb_alloc_transfer(int iso_packets);
	/** Original signature : <code>int libusb_submit_transfer(libusb_transfer*)</code> */
	__stdcall int libusb_submit_transfer(libusb_transfer* transfer);
	/** Original signature : <code>int libusb_cancel_transfer(libusb_transfer*)</code> */
	__stdcall int libusb_cancel_transfer(libusb_transfer* transfer);
	/** Original signature : <code>void libusb_free_transfer(libusb_transfer*)</code> */
	__stdcall void libusb_free_transfer(libusb_transfer* transfer);
	/** Original signature : <code>void libusb_transfer_set_stream_id(libusb_transfer*, uint32_t)</code> */
	__stdcall void libusb_transfer_set_stream_id(libusb_transfer* transfer, uint32_t stream_id);
	/** Original signature : <code>uint32_t libusb_transfer_get_stream_id(libusb_transfer*)</code> */
	__stdcall uint32_t libusb_transfer_get_stream_id(libusb_transfer* transfer);
	/**
	 * \ingroup asyncio
<br>
	 * Helper function to populate the required \ref libusb_transfer fields
<br>
	 * for a control transfer.
<br>
	 * <br>
	 * If you pass a transfer buffer to this function, the first 8 bytes will
<br>
	 * be interpreted as a control setup packet, and the wLength field will be
<br>
	 * used to automatically populate the \ref libusb_transfer::length "length"
<br>
	 * field of the transfer. Therefore the recommended approach is:
<br>
	 * -# Allocate a suitably sized data buffer (including space for control setup)
<br>
	 * -# Call libusb_fill_control_setup()
<br>
	 * -# If this is a host-to-device transfer with a data stage, put the data
<br>
	 *    in place after the setup packet
<br>
	 * -# Call this function
<br>
	 * -# Call libusb_submit_transfer()
<br>
	 * <br>
	 * It is also legal to pass a NULL buffer to this function, in which case this
<br>
	 * function will not attempt to populate the length field. Remember that you
<br>
	 * must then populate the buffer and length fields later.
<br>
	 * <br>
	 * \param transfer the transfer to populate
<br>
	 * \param dev_handle handle of the device that will handle the transfer
<br>
	 * \param buffer data buffer. If provided, this function will interpret the
<br>
	 * first 8 bytes as a setup packet and infer the transfer length from that.
<br>
	 * This pointer must be aligned to at least 2 bytes boundary.
<br>
	 * \param callback callback function to be invoked on transfer completion
<br>
	 * \param user_data user data to pass to callback function
<br>
	 * \param timeout timeout for the transfer in milliseconds<br>
	 * Original signature : <code>void libusb_fill_control_transfer(libusb_transfer*, libusb_device_handle*, unsigned char*, libusb_transfer_cb_fn, void*, unsigned int)</code>
	 */
	static inline void libusb_fill_control_transfer(libusb_transfer* transfer, libusb_device_handle* dev_handle, unsigned char* buffer, libusb_transfer_cb_fn callback, void* user_data, unsigned int timeout) {
		libusb_control_setup* setup = (libusb_control_setup*)(void*)buffer;
		transfer->dev_handle = dev_handle;
		transfer->endpoint = 0;
		transfer->type = LIBUSB_TRANSFER_TYPE_CONTROL;
		transfer->timeout = timeout;
		transfer->buffer = buffer;
		if (setup) 
			transfer->length = (int)((sizeof(libusb_control_setup)) + libusb_cpu_to_le16(setup->wLength));
		transfer->user_data = user_data;
		transfer->callback = callback;
	}
	/**
	 * \ingroup asyncio
<br>
	 * Helper function to populate the required \ref libusb_transfer fields
<br>
	 * for a bulk transfer.
<br>
	 * <br>
	 * \param transfer the transfer to populate
<br>
	 * \param dev_handle handle of the device that will handle the transfer
<br>
	 * \param endpoint address of the endpoint where this transfer will be sent
<br>
	 * \param buffer data buffer
<br>
	 * \param length length of data buffer
<br>
	 * \param callback callback function to be invoked on transfer completion
<br>
	 * \param user_data user data to pass to callback function
<br>
	 * \param timeout timeout for the transfer in milliseconds<br>
	 * Original signature : <code>void libusb_fill_bulk_transfer(libusb_transfer*, libusb_device_handle*, unsigned char, unsigned char*, int, libusb_transfer_cb_fn, void*, unsigned int)</code>
	 */
	static inline void libusb_fill_bulk_transfer(libusb_transfer* transfer, libusb_device_handle* dev_handle, unsigned char endpoint, unsigned char* buffer, int length, libusb_transfer_cb_fn callback, void* user_data, unsigned int timeout) {
		transfer->dev_handle = dev_handle;
		transfer->endpoint = endpoint;
		transfer->type = LIBUSB_TRANSFER_TYPE_BULK;
		transfer->timeout = timeout;
		transfer->buffer = buffer;
		transfer->length = length;
		transfer->user_data = user_data;
		transfer->callback = callback;
	}
	/**
	 * \ingroup asyncio
<br>
	 * Helper function to populate the required \ref libusb_transfer fields
<br>
	 * for a bulk transfer using bulk streams.
<br>
	 * <br>
	 * Since version 1.0.19, \ref LIBUSB_API_VERSION >= 0x01000103
<br>
	 * <br>
	 * \param transfer the transfer to populate
<br>
	 * \param dev_handle handle of the device that will handle the transfer
<br>
	 * \param endpoint address of the endpoint where this transfer will be sent
<br>
	 * \param stream_id bulk stream id for this transfer
<br>
	 * \param buffer data buffer
<br>
	 * \param length length of data buffer
<br>
	 * \param callback callback function to be invoked on transfer completion
<br>
	 * \param user_data user data to pass to callback function
<br>
	 * \param timeout timeout for the transfer in milliseconds<br>
	 * Original signature : <code>void libusb_fill_bulk_stream_transfer(libusb_transfer*, libusb_device_handle*, unsigned char, uint32_t, unsigned char*, int, libusb_transfer_cb_fn, void*, unsigned int)</code>
	 */
	static inline void libusb_fill_bulk_stream_transfer(libusb_transfer* transfer, libusb_device_handle* dev_handle, unsigned char endpoint, uint32_t stream_id, unsigned char* buffer, int length, libusb_transfer_cb_fn callback, void* user_data, unsigned int timeout) {
		libusb_fill_bulk_transfer(transfer, dev_handle, endpoint, buffer, length, callback, user_data, timeout);
		transfer->type = LIBUSB_TRANSFER_TYPE_BULK_STREAM;
		libusb_transfer_set_stream_id(transfer, stream_id);
	}
	/**
	 * \ingroup asyncio
<br>
	 * Helper function to populate the required \ref libusb_transfer fields
<br>
	 * for an interrupt transfer.
<br>
	 * <br>
	 * \param transfer the transfer to populate
<br>
	 * \param dev_handle handle of the device that will handle the transfer
<br>
	 * \param endpoint address of the endpoint where this transfer will be sent
<br>
	 * \param buffer data buffer
<br>
	 * \param length length of data buffer
<br>
	 * \param callback callback function to be invoked on transfer completion
<br>
	 * \param user_data user data to pass to callback function
<br>
	 * \param timeout timeout for the transfer in milliseconds<br>
	 * Original signature : <code>void libusb_fill_interrupt_transfer(libusb_transfer*, libusb_device_handle*, unsigned char, unsigned char*, int, libusb_transfer_cb_fn, void*, unsigned int)</code>
	 */
	static inline void libusb_fill_interrupt_transfer(libusb_transfer* transfer, libusb_device_handle* dev_handle, unsigned char endpoint, unsigned char* buffer, int length, libusb_transfer_cb_fn callback, void* user_data, unsigned int timeout) {
		transfer->dev_handle = dev_handle;
		transfer->endpoint = endpoint;
		transfer->type = LIBUSB_TRANSFER_TYPE_INTERRUPT;
		transfer->timeout = timeout;
		transfer->buffer = buffer;
		transfer->length = length;
		transfer->user_data = user_data;
		transfer->callback = callback;
	}
	/**
	 * \ingroup asyncio
<br>
	 * Helper function to populate the required \ref libusb_transfer fields
<br>
	 * for an isochronous transfer.
<br>
	 * <br>
	 * \param transfer the transfer to populate
<br>
	 * \param dev_handle handle of the device that will handle the transfer
<br>
	 * \param endpoint address of the endpoint where this transfer will be sent
<br>
	 * \param buffer data buffer
<br>
	 * \param length length of data buffer
<br>
	 * \param num_iso_packets the number of isochronous packets
<br>
	 * \param callback callback function to be invoked on transfer completion
<br>
	 * \param user_data user data to pass to callback function
<br>
	 * \param timeout timeout for the transfer in milliseconds<br>
	 * Original signature : <code>void libusb_fill_iso_transfer(libusb_transfer*, libusb_device_handle*, unsigned char, unsigned char*, int, int, libusb_transfer_cb_fn, void*, unsigned int)</code>
	 */
	static inline void libusb_fill_iso_transfer(libusb_transfer* transfer, libusb_device_handle* dev_handle, unsigned char endpoint, unsigned char* buffer, int length, int num_iso_packets, libusb_transfer_cb_fn callback, void* user_data, unsigned int timeout) {
		transfer->dev_handle = dev_handle;
		transfer->endpoint = endpoint;
		transfer->type = LIBUSB_TRANSFER_TYPE_ISOCHRONOUS;
		transfer->timeout = timeout;
		transfer->buffer = buffer;
		transfer->length = length;
		transfer->num_iso_packets = num_iso_packets;
		transfer->user_data = user_data;
		transfer->callback = callback;
	}
	/**
	 * \ingroup asyncio
<br>
	 * Convenience function to set the length of all packets in an isochronous
<br>
	 * transfer, based on the num_iso_packets field in the transfer structure.
<br>
	 * <br>
	 * \param transfer a transfer
<br>
	 * \param length the length to set in each isochronous packet descriptor
<br>
	 * \see libusb_get_max_packet_size()<br>
	 * Original signature : <code>void libusb_set_iso_packet_lengths(libusb_transfer*, unsigned int)</code>
	 */
	static inline void libusb_set_iso_packet_lengths(libusb_transfer* transfer, unsigned int length) {
		int i;
	}
	/**
	 * \ingroup asyncio
<br>
	 * Convenience function to locate the position of an isochronous packet
<br>
	 * within the buffer of an isochronous transfer.
<br>
	 * <br>
	 * This is a thorough function which loops through all preceding packets,
<br>
	 * accumulating their lengths to find the position of the specified packet.
<br>
	 * Typically you will assign equal lengths to each packet in the transfer,
<br>
	 * and hence the above method is sub-optimal. You may wish to use
<br>
	 * libusb_get_iso_packet_buffer_simple() instead.
<br>
	 * <br>
	 * \param transfer a transfer
<br>
	 * \param packet the packet to return the address of
<br>
	 * \returns the base address of the packet buffer inside the transfer buffer,
<br>
	 * or NULL if the packet does not exist.
<br>
	 * \see libusb_get_iso_packet_buffer_simple()<br>
	 * Original signature : <code>char* libusb_get_iso_packet_buffer(libusb_transfer*, unsigned int)</code>
	 */
	static inline unsigned char* libusb_get_iso_packet_buffer(libusb_transfer* transfer, unsigned int packet) {
		int i;
		size_t offset = 0;
		int _packet;
		if (packet > INT_MAX) 
			return NULL;
		 _packet = (int)packet;
		if (_packet >= transfer->num_iso_packets) 
			return NULL;
		return transfer->buffer + offset;
	}
	/**
	 * \ingroup asyncio
<br>
	 * Convenience function to locate the position of an isochronous packet
<br>
	 * within the buffer of an isochronous transfer, for transfers where each
<br>
	 * packet is of identical size.
<br>
	 * <br>
	 * This function relies on the assumption that every packet within the transfer
<br>
	 * is of identical size to the first packet. Calculating the location of
<br>
	 * the packet buffer is then just a simple calculation:
<br>
	 * <tt>buffer + (packet_size * packet)</tt>
<br>
	 * <br>
	 * Do not use this function on transfers other than those that have identical
<br>
	 * packet lengths for each packet.
<br>
	 * <br>
	 * \param transfer a transfer
<br>
	 * \param packet the packet to return the address of
<br>
	 * \returns the base address of the packet buffer inside the transfer buffer,
<br>
	 * or NULL if the packet does not exist.
<br>
	 * \see libusb_get_iso_packet_buffer()<br>
	 * Original signature : <code>char* libusb_get_iso_packet_buffer_simple(libusb_transfer*, unsigned int)</code>
	 */
	static inline unsigned char* libusb_get_iso_packet_buffer_simple(libusb_transfer* transfer, unsigned int packet) {
		int _packet;
		if (packet > INT_MAX) 
			return NULL;
		 _packet = (int)packet;
		if (_packet >= transfer->num_iso_packets) 
			return NULL;
		return transfer->buffer + ((int)transfer->iso_packet_desc[0].length * _packet);
	}
	/**
	 * sync I/O<br>
	 * Original signature : <code>int libusb_control_transfer(libusb_device_handle*, uint8_t, uint8_t, uint16_t, uint16_t, unsigned char*, uint16_t, unsigned int)</code>
	 */
	__stdcall int libusb_control_transfer(libusb_device_handle* dev_handle, uint8_t request_type, uint8_t bRequest, uint16_t wValue, uint16_t wIndex, unsigned char* data, uint16_t wLength, unsigned int timeout);
	/** Original signature : <code>int libusb_bulk_transfer(libusb_device_handle*, unsigned char, unsigned char*, int, int*, unsigned int)</code> */
	__stdcall int libusb_bulk_transfer(libusb_device_handle* dev_handle, unsigned char endpoint, unsigned char* data, int length, int* actual_length, unsigned int timeout);
	/** Original signature : <code>int libusb_interrupt_transfer(libusb_device_handle*, unsigned char, unsigned char*, int, int*, unsigned int)</code> */
	__stdcall int libusb_interrupt_transfer(libusb_device_handle* dev_handle, unsigned char endpoint, unsigned char* data, int length, int* actual_length, unsigned int timeout);
	/**
	 * \ingroup desc
<br>
	 * Retrieve a descriptor from the default control pipe.
<br>
	 * This is a convenience function which formulates the appropriate control
<br>
	 * message to retrieve the descriptor.
<br>
	 * <br>
	 * \param dev a device handle
<br>
	 * \param desc_type the descriptor type, see \ref libusb_descriptor_type
<br>
	 * \param desc_index the index of the descriptor to retrieve
<br>
	 * \param data output buffer for descriptor
<br>
	 * \param length size of data buffer
<br>
	 * \returns number of bytes returned in data, or LIBUSB_ERROR code on failure<br>
	 * Original signature : <code>int libusb_get_descriptor(libusb_device_handle*, uint8_t, uint8_t, unsigned char*, int)</code>
	 */
	static inline int libusb_get_descriptor(libusb_device_handle* dev, uint8_t desc_type, uint8_t desc_index, unsigned char* data, int length) {
		return libusb_control_transfer(dev, LIBUSB_ENDPOINT_IN, LIBUSB_REQUEST_GET_DESCRIPTOR, (uint16_t)((desc_type << 8) | desc_index), 0, data, (uint16_t)length, 1000);
	}
	/**
	 * \ingroup desc
<br>
	 * Retrieve a descriptor from a device.
<br>
	 * This is a convenience function which formulates the appropriate control
<br>
	 * message to retrieve the descriptor. The string returned is Unicode, as
<br>
	 * detailed in the USB specifications.
<br>
	 * <br>
	 * \param dev a device handle
<br>
	 * \param desc_index the index of the descriptor to retrieve
<br>
	 * \param langid the language ID for the string descriptor
<br>
	 * \param data output buffer for descriptor
<br>
	 * \param length size of data buffer
<br>
	 * \returns number of bytes returned in data, or LIBUSB_ERROR code on failure
<br>
	 * \see libusb_get_string_descriptor_ascii()<br>
	 * Original signature : <code>int libusb_get_string_descriptor(libusb_device_handle*, uint8_t, uint16_t, unsigned char*, int)</code>
	 */
	static inline int libusb_get_string_descriptor(libusb_device_handle* dev, uint8_t desc_index, uint16_t langid, unsigned char* data, int length) {
		return libusb_control_transfer(dev, LIBUSB_ENDPOINT_IN, LIBUSB_REQUEST_GET_DESCRIPTOR, (uint16_t)((LIBUSB_DT_STRING << 8) | desc_index), langid, data, (uint16_t)length, 1000);
	}
	/** Original signature : <code>int libusb_get_string_descriptor_ascii(libusb_device_handle*, uint8_t, unsigned char*, int)</code> */
	__stdcall int libusb_get_string_descriptor_ascii(libusb_device_handle* dev, uint8_t desc_index, unsigned char* data, int length);
	/**
	 * polling and timeouts<br>
	 * Original signature : <code>int libusb_try_lock_events(libusb_context*)</code>
	 */
	__stdcall int libusb_try_lock_events(libusb_context* ctx);
	/** Original signature : <code>void libusb_lock_events(libusb_context*)</code> */
	__stdcall void libusb_lock_events(libusb_context* ctx);
	/** Original signature : <code>void libusb_unlock_events(libusb_context*)</code> */
	__stdcall void libusb_unlock_events(libusb_context* ctx);
	/** Original signature : <code>int libusb_event_handling_ok(libusb_context*)</code> */
	__stdcall int libusb_event_handling_ok(libusb_context* ctx);
	/** Original signature : <code>int libusb_event_handler_active(libusb_context*)</code> */
	__stdcall int libusb_event_handler_active(libusb_context* ctx);
	/** Original signature : <code>void libusb_lock_event_waiters(libusb_context*)</code> */
	__stdcall void libusb_lock_event_waiters(libusb_context* ctx);
	/** Original signature : <code>void libusb_unlock_event_waiters(libusb_context*)</code> */
	__stdcall void libusb_unlock_event_waiters(libusb_context* ctx);
	/** Original signature : <code>int libusb_wait_for_event(libusb_context*, timeval*)</code> */
	__stdcall int libusb_wait_for_event(libusb_context* ctx, timeval* tv);
	/** Original signature : <code>int libusb_handle_events_timeout(libusb_context*, timeval*)</code> */
	__stdcall int libusb_handle_events_timeout(libusb_context* ctx, timeval* tv);
	/** Original signature : <code>int libusb_handle_events_timeout_completed(libusb_context*, timeval*, int*)</code> */
	__stdcall int libusb_handle_events_timeout_completed(libusb_context* ctx, timeval* tv, int* completed);
	/** Original signature : <code>int libusb_handle_events(libusb_context*)</code> */
	__stdcall int libusb_handle_events(libusb_context* ctx);
	/** Original signature : <code>int libusb_handle_events_completed(libusb_context*, int*)</code> */
	__stdcall int libusb_handle_events_completed(libusb_context* ctx, int* completed);
	/** Original signature : <code>int libusb_handle_events_locked(libusb_context*, timeval*)</code> */
	__stdcall int libusb_handle_events_locked(libusb_context* ctx, timeval* tv);
	/** Original signature : <code>int libusb_pollfds_handle_timeouts(libusb_context*)</code> */
	__stdcall int libusb_pollfds_handle_timeouts(libusb_context* ctx);
	/** Original signature : <code>int libusb_get_next_timeout(libusb_context*, timeval*)</code> */
	__stdcall int libusb_get_next_timeout(libusb_context* ctx, timeval* tv);
	/**
	 * \ingroup poll
<br>
	 * File descriptor for polling
	 */
	struct libusb_pollfd {
		int fd;
		short events;
	};
	/**
	 * \ingroup poll
<br>
	 * Callback function, invoked when a new file descriptor should be added
<br>
	 * to the set of file descriptors monitored for events.
<br>
	 * \param fd the new file descriptor
<br>
	 * \param events events to monitor for, see \ref libusb_pollfd for a
<br>
	 * description
<br>
	 * \param user_data User data pointer specified in
<br>
	 * libusb_set_pollfd_notifiers() call
<br>
	 * \see libusb_set_pollfd_notifiers()
	 */
	typedef void (__stdcall *libusb_pollfd_added_cb)(int fd, short events, void* user_data) libusb_pollfd_added_cb;
	/**
	 * \ingroup poll
<br>
	 * Callback function, invoked when a file descriptor should be removed from
<br>
	 * the set of file descriptors being monitored for events. After returning
<br>
	 * from this callback, do not use that file descriptor again.
<br>
	 * \param fd the file descriptor to stop monitoring
<br>
	 * \param user_data User data pointer specified in
<br>
	 * libusb_set_pollfd_notifiers() call
<br>
	 * \see libusb_set_pollfd_notifiers()
	 */
	typedef void (__stdcall *libusb_pollfd_removed_cb)(int fd, void* user_data) libusb_pollfd_removed_cb;
	/** Original signature : <code>libusb_pollfd** libusb_get_pollfds(libusb_context*)</code> */
	const __stdcall libusb_pollfd** libusb_get_pollfds(libusb_context* ctx);
	/** Original signature : <code>void libusb_set_pollfd_notifiers(libusb_context*, libusb_pollfd_added_cb, libusb_pollfd_removed_cb, void*)</code> */
	__stdcall void libusb_set_pollfd_notifiers(libusb_context* ctx, libusb_pollfd_added_cb added_cb, libusb_pollfd_removed_cb removed_cb, void* user_data);
	/**
	 * \ingroup hotplug
<br>
	 * Callback handle.
<br>
	 * <br>
	 * Callbacks handles are generated by libusb_hotplug_register_callback()
<br>
	 * and can be used to deregister callbacks. Callback handles are unique
<br>
	 * per libusb_context and it is safe to call libusb_hotplug_deregister_callback()
<br>
	 * on an already deregisted callback.
<br>
	 * <br>
	 * Since version 1.0.16, \ref LIBUSB_API_VERSION >= 0x01000102
<br>
	 * <br>
	 * For more information, see \ref hotplug.
	 */
	typedef int libusb_hotplug_callback_handle;
	/**
	 * \ingroup hotplug
<br>
	 * <br>
	 * Since version 1.0.16, \ref LIBUSB_API_VERSION >= 0x01000102
<br>
	 * <br>
	 * Flags for hotplug events
	 */
	typedef enum libusb_hotplug_flag {
		LIBUSB_HOTPLUG_ENUMERATE = 1
	} libusb_hotplug_flag;
	/**
	 * \ingroup hotplug
<br>
	 * <br>
	 * Since version 1.0.16, \ref LIBUSB_API_VERSION >= 0x01000102
<br>
	 * <br>
	 * Hotplug events
	 */
	typedef enum libusb_hotplug_event {
		LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED = 0x01,
		LIBUSB_HOTPLUG_EVENT_DEVICE_LEFT = 0x02
	} libusb_hotplug_event;
	/**
	 * \ingroup hotplug
<br>
	 * Hotplug callback function type. When requesting hotplug event notifications,
<br>
	 * you pass a pointer to a callback function of this type.
<br>
	 * <br>
	 * This callback may be called by an internal event thread and as such it is
<br>
	 * recommended the callback do minimal processing before returning.
<br>
	 * <br>
	 * libusb will call this function later, when a matching event had happened on
<br>
	 * a matching device. See \ref hotplug for more information.
<br>
	 * <br>
	 * It is safe to call either libusb_hotplug_register_callback() or
<br>
	 * libusb_hotplug_deregister_callback() from within a callback function.
<br>
	 * <br>
	 * Since version 1.0.16, \ref LIBUSB_API_VERSION >= 0x01000102
<br>
	 * <br>
	 * \param ctx            context of this notification
<br>
	 * \param device         libusb_device this event occurred on
<br>
	 * \param event          event that occurred
<br>
	 * \param user_data      user data provided when this callback was registered
<br>
	 * \returns bool whether this callback is finished processing events.
<br>
	 *                       returning 1 will cause this callback to be deregistered
	 */
	typedef int (__stdcall *libusb_hotplug_callback_fn)(libusb_context* ctx, libusb_device* device, libusb_hotplug_event event, void* user_data) libusb_hotplug_callback_fn;
	/**
	 * \ingroup hotplug
<br>
	 * Register a hotplug callback function
<br>
	 * <br>
	 * Register a callback with the libusb_context. The callback will fire
<br>
	 * when a matching event occurs on a matching device. The callback is
<br>
	 * armed until either it is deregistered with libusb_hotplug_deregister_callback()
<br>
	 * or the supplied callback returns 1 to indicate it is finished processing events.
<br>
	 * <br>
	 * If the \ref LIBUSB_HOTPLUG_ENUMERATE is passed the callback will be
<br>
	 * called with a \ref LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED for all devices
<br>
	 * already plugged into the machine. Note that libusb modifies its internal
<br>
	 * device list from a separate thread, while calling hotplug callbacks from
<br>
	 * libusb_handle_events(), so it is possible for a device to already be present
<br>
	 * on, or removed from, its internal device list, while the hotplug callbacks
<br>
	 * still need to be dispatched. This means that when using \ref
<br>
	 * LIBUSB_HOTPLUG_ENUMERATE, your callback may be called twice for the arrival
<br>
	 * of the same device, once from libusb_hotplug_register_callback() and once
<br>
	 * from libusb_handle_events(); and/or your callback may be called for the
<br>
	 * removal of a device for which an arrived call was never made.
<br>
	 * <br>
	 * Since version 1.0.16, \ref LIBUSB_API_VERSION >= 0x01000102
<br>
	 * <br>
	 * \param[in] ctx context to register this callback with
<br>
	 * \param[in] events bitwise or of events that will trigger this callback. See \ref
<br>
	 *            libusb_hotplug_event
<br>
	 * \param[in] flags hotplug callback flags. See \ref libusb_hotplug_flag
<br>
	 * \param[in] vendor_id the vendor id to match or \ref LIBUSB_HOTPLUG_MATCH_ANY
<br>
	 * \param[in] product_id the product id to match or \ref LIBUSB_HOTPLUG_MATCH_ANY
<br>
	 * \param[in] dev_class the device class to match or \ref LIBUSB_HOTPLUG_MATCH_ANY
<br>
	 * \param[in] cb_fn the function to be invoked on a matching event/device
<br>
	 * \param[in] user_data user data to pass to the callback function
<br>
	 * \param[out] handle pointer to store the handle of the allocated callback (can be NULL)
<br>
	 * \returns LIBUSB_SUCCESS on success LIBUSB_ERROR code on failure<br>
	 * Original signature : <code>int libusb_hotplug_register_callback(libusb_context*, libusb_hotplug_event, libusb_hotplug_flag, int, int, int, libusb_hotplug_callback_fn, void*, libusb_hotplug_callback_handle*)</code>
	 */
	__stdcall int libusb_hotplug_register_callback(libusb_context* ctx, libusb_hotplug_event events, libusb_hotplug_flag flags, int vendor_id, int product_id, int dev_class, libusb_hotplug_callback_fn cb_fn, void* user_data, libusb_hotplug_callback_handle* handle);
	/**
	 * \ingroup hotplug
<br>
	 * Deregisters a hotplug callback.
<br>
	 * <br>
	 * Deregister a callback from a libusb_context. This function is safe to call from within
<br>
	 * a hotplug callback.
<br>
	 * <br>
	 * Since version 1.0.16, \ref LIBUSB_API_VERSION >= 0x01000102
<br>
	 * <br>
	 * \param[in] ctx context this callback is registered with
<br>
	 * \param[in] handle the handle of the callback to deregister<br>
	 * Original signature : <code>void libusb_hotplug_deregister_callback(libusb_context*, libusb_hotplug_callback_handle)</code>
	 */
	__stdcall void libusb_hotplug_deregister_callback(libusb_context* ctx, libusb_hotplug_callback_handle handle);
	union  libusb_cpu_to_le16__tmp_union {
		uint8_t[2] b8;
		uint16_t b16;
	};
	enum libusb_error {
	};
}
