cv_dep = dependency('opencv4', required: false)
if cv_dep.found()

	includes = [
		include_directories('.') # include the main directory
		]

	deps = [
		MMDevice_dep
		]
		
	sources = [  # Must explicitly list all source files.
		'error_code.cpp',
		'FakeCamera.cpp',
		'module.cpp'
	]

	library('FakeCamera', sources, include_directories: includes, dependencies : deps, install: true)
else
	message('Skipping FakeCamera. OpenCV4 not found')
endif
