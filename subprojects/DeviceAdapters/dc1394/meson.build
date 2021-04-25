
libdc_dep = dependency('libdc1394', fallback: '3rdPartyPublic', required: false)
if libdc_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		dependency('boost'),
		libdc_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'dc1394.cpp'
	]


	library('dc1394', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping DC1396. libdc1394 not found.')
endif
