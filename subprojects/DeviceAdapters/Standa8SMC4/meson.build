SDK_dep = dependency('XIMC', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'Standa8SMC4.cpp'
	]

	library('Standa8SMC4', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping Standa8sMC4. No SDK found.')
endif