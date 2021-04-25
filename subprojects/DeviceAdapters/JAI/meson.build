

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep,
	dependency('JAI_eBUS_SDK', fallback: '3rdPartyPrivate')
	]
	
sources = [  # Must explicitly list all source files.
	'JAI.cpp',
	'PropertyHandlers.cpp'
]


library('JAI', sources, include_directories: includes, dependencies : deps, install: true)

