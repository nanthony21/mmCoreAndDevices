SDK_dep = dependency('MicroSMC', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'Standa.cpp'
	]

	library('Standa', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping Standa. No SDK found.')
endif
