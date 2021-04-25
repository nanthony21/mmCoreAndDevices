dep = dependency('hidapi', fallback: '3rdPartyPublic')
if dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		dep
		]
		
	sources = [  # Must explicitly list all source files.
		'HIDManager.cpp'
	]


	library('HIDManager', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping HIDManager. hidapi not found.')
endif
