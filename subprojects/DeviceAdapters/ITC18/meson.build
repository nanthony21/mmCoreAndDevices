SDK_dep = 	dependency('ITC18', fallback: '3rdPartyPrivate', required: false)

if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'MMITC18.cpp'
	]


	library('ITC18', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping ITC18. No SDK found')
endif

