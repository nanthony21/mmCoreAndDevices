SDK_dep = dependency('LightEngineAPI', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep,
		dependency('boost')
		]
		
	sources = [  # Must explicitly list all source files.
		'Lumencor.cpp'
	]

	library('Lumencor', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping Lumencor. No SDK found.')
endif