if true
	message('Skipping for now. Not working')
else
	if host_machine.system() != 'windows'
		message('Skipping ZeissAxioZoom. Non-Windows OS not supported.')
	else
		sys_lib = meson.get_compiler('cpp').find_library('Ws2_32', required: false)

		includes = [
			include_directories('.') # include the main directory
			]

		deps = [
			MMDevice_dep,
			sys_lib
			]
			
		sources = [  # Must explicitly list all source files.
			'DevicesX.cpp',
			'ZeissAxioZoom.cpp',
			'ZeissHub.cpp',
			'ZeissModelX.cpp',
			'ZeissMonitor.cpp'
		]

		library('ZeissAxioZoom', sources, include_directories: includes, dependencies : deps, install: true)
	endif
endif
