
SDK_dep = 	dependency('CanonEDSDK', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'CanonEDSDK.cpp'
	]


	library('CanonEDSDK', sources, include_directories: includes, dependencies : deps, install: true)
endif