

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep
	]
	
sources = [  # Must explicitly list all source files.
	'Mightex_USBCamera.cpp'
]


library('Mightex_C_Cam', sources, include_directories: includes, dependencies : deps, install: true)

