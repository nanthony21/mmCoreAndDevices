SDK_dep = dependency('WinDDK', fallback: '3rdPartyPrivate', required: false)
SDK_dep = disabler()  # Just a temporary thing to disable this adapter.
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'DeviceOperate.cpp',
		'HID.cpp',
		'hiddll.cpp',
		'Mightex.cpp',
		'Mightex_LEDDriver_SDK.cpp'
	]

	library('Mightex', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping Mightex. Couldn\'t find WindowsDDK')
endif