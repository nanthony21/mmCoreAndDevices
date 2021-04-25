SDK_dep = dependency('uEye-4.30.00', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'IDS_uEye.cpp'
	]

	library('IDS_uEye', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping uEye. No SDK found.')
endif

