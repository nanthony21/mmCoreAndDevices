SDK_dep = dependency('JenoptikSDK', fallback: '3rdPartyPrivate', required: false)
SDK_dep = disabler()  # This is just here to skip this device adapter which is not compiling properly.

if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'ExpCtrl.cpp',
		'FocusCallback.cpp',
		'ImgFinalProc.cpp',
		'mmgrProgRes.cpp',
		'TriggerWaitProc.cpp'
	]


	library('Jenoptik', sources, include_directories: includes, 
		cpp_args: ['-D USBCAMERAS'], dependencies : deps, install: true)
else 
	message('Skipping Jenoptik. No SDK found')
endif
