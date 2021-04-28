
SDK_dep = meson.get_compiler('cpp').find_library('MicroDrive64', dirs: meson.current_source_dir(), required: false)
if SDK_dep.found()
	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep,
		SDK_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'HandleListType.cpp',
		'handle_list_if.cpp',
		'MCL_MicroDrive.cpp',
		'mdutils.cpp',
		'MicroDriveXYStage.cpp',
		'MicroDriveZStage.cpp'
	]

	library('MCL_MicroDrive', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping MCL_MicroDrive. No SDK library recognized.')
endif