

includes = [
    include_directories('.') # include the main directory
    ]

deps = [
	MMDevice_dep
	]
	
sources = [  # Must explicitly list all source files.
	'iPadSLM.cpp',
	'Monitors.cpp',
	'OffscreenBuffer.cpp',
	'RefreshWaiter.cpp',
	'SleepBlocker.cpp',
	'SLMWindow.cpp',
	'SLMWindowClass.cpp',
	'SLMWindowThread.cpp'
]


library('iPadSLM', sources, include_directories: includes, dependencies : deps, install: true)

