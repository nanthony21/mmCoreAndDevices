SDK_dep = dependency('NIDAQmx', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		dependency('boost'),
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'NI100X.cpp'
	]

	library('NI100X', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping  NI100x. No SDK found.')
endif

