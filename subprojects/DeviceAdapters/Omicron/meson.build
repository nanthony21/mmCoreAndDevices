

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep
	]
	
sources = [  # Must explicitly list all source files.
	'CoherentOBISDirect.cpp',
	'Omicron.cpp',
	'OmicronDeviceDriver.cpp',
	'OmicronxX.cpp'
]


library('Omicron', sources, include_directories: includes, dependencies : deps, install: true)

