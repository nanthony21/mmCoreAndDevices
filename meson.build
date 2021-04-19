project('mmCoreAndDevices', 'cpp', version : '0.0.1',
	default_options: [
		'prefix=@0@'.format(meson.project_source_root() / 'stage')
	]
)

subproject('MMDevice')
subproject('MMCore')
subproject('3rdPartyPrivate', required: false)

if get_option('MMCOREJ')
	subproject('MMCoreJ_wrap')
endif

if get_option('DEVICE_ADAPTERS')
	subproject('DeviceAdapters')
endif

if get_option('MMCOREPY')
	subproject('MMCorePy_wrap')
endif