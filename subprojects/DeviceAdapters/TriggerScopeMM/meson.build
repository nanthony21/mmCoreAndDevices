

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep
	]
	
sources = [  # Must explicitly list all source files.
	'TriggerScopeMM.cpp',
	'TriggerScopeMMDAC.cpp',
	'TriggerScopeMMTTL.cpp'
]


library('TriggerScopeMM', sources, include_directories: includes, dependencies : deps, install: true)

