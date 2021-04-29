SDK_dep = dependency('modbus', fallback: '3rdPartyPublic', required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'ModbusModule.cpp'
	]

	library('Modbus', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping Modbus. No SDK found.')
endif
