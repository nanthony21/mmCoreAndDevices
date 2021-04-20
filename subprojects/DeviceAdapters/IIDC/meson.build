SDK_dep = dependency('libdc1394', fallback: '3rdPartyPrivate')
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep,
		dependency('boost', modules: ['thread', 'chrono'], static: true)
		]
		
	sources = [  # Must explicitly list all source files.
		'IIDCCamera.cpp',
		'IIDCCapture.cpp',
		'IIDCFeature.cpp',
		'IIDCInterface.cpp',
		'IIDCUtils.cpp',
		'IIDCVendorAVT.cpp',
		'IIDCVideoMode.cpp',
		'MMIIDCCamera.cpp'
	]


	library('IIDC', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping IIDC. No SDK found.')
endif
