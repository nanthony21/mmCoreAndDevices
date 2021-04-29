
# Note FLI is short for Finger Lakes Instrumentation, not to be confused with First Light Imaging
SDK_dep = dependency('FLI_SDK', fallback: '3rdPartyPrivate', required: false)
ws2_lib = meson.get_compiler('cpp').find_library('Ws2_32', required: false)
setup_lib = meson.get_compiler('cpp').find_library('setupapi', required: false)
if SDK_dep.found() and ws2_lib.found() and setup_lib.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep,
		ws2_lib,
		setup_lib,
		meson.get_compiler('cpp').find_library('legacy_stdio_definitions')  # This library is allowing us to link to the SDK even though it was compiler for VS2010
	]
		
	sources = [  # Must explicitly list all source files.
		'FLICamera.cpp'
	]

	library('FLICamera', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping FLICamera. No SDK found')
endif
