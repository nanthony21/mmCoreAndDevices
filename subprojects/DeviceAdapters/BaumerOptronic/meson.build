

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep,
	dependency('Leica_Camera_SDK_1.7', fallback: '3rdPartyPrivate'),
	dependency('boost')
	]
	
sources = [  # Must explicitly list all source files.
	'BaumerOptronic.cpp'
]


library('BaumerOptronic', sources, include_directories: includes, dependencies : deps, install: true)

