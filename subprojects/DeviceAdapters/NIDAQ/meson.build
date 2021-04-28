SDK_dep = dependency('NIDAQmxBase', fallback: '3rdPartyPrivate', required: false)
SDK_dep = disabler()
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'NIDAQ.cpp'
	]

	library('NIDAQ', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping NIDAQ. No SDK found')
endif
