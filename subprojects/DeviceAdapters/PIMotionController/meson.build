

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep
	]
	
sources = [  # Must explicitly list all source files.
	'PiMotionControl.cpp'
]


library('PIMotionController', sources, include_directories: includes, dependencies : deps, install: true)

