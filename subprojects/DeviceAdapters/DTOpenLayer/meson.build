SDK_dep = dependency('DataTranslationSDK', fallback: '3rdPartyPrivate', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'DTOpenLayer.cpp'
	]

	library('DTOpenLayer', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping DTOpenLayer. No SDK found')
endif
