

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep
	]
	
sources = [  # Must explicitly list all source files.
	'CARVII.cpp',
	'CARVIIHub.cpp'
]


library('CARVII', sources, include_directories: includes, dependencies : deps, install: true)

