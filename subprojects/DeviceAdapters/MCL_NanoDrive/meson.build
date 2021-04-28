SDK_dep = meson.get_compiler('cpp').find_library('MadLib64', dirs: meson.current_source_dir(), required: false)
SDK_dep = disabler()
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
		'MCL_NanoDrive.cpp',
		'MCL_NanoDrive_XYStage.cpp',
		'MCL_NanoDrive_ZStage.cpp'
	]

	library('MCL_NanoDrive', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping MCL_NanoDrive. No SDK library recognized.')
endif