SDK_dep = dependency('mvImpact', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'mvIMPACT_Acquire_Device.cpp'
	]

	library('MatrixVision', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping MatrixVision. No SDK found.')
endif
