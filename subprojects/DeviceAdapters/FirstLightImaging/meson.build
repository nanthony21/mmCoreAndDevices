SDK_dep = dependency('FirstLightSDK', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'FirstLightImagingCameras.cpp'
	]

	library('FirstLightImaging', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping FirstLightImaging. No SDK found.')
endif

