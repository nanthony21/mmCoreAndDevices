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
		'StandaStage.cpp'
	]

	library('StandaStage', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping StandaStage. No SDK found.')
endif
