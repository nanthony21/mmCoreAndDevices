SDK_dep = dependency('MCC_DAQ', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'MCCDAQ.cpp'
	]

	library('MCCDAQ', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping MCC_DAQ. No SDK found')
endif
