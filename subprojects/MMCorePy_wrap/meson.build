project('MMCorePy_wrap', 'cpp', version : '0.0.1')

add_project_arguments('-DMMCOREPY_WRAP_EXPORTS', language: 'cpp')

if host_machine.system() == 'windows'
	add_project_arguments('-DWIN32', '-D_WINDOWS', '__WIN32__', language: ['cpp'])
endif

if get_option('buildtype').startswith('release')
    add_project_arguments('-DNDEBUG', language : ['cpp'])
else
    add_project_arguments('-D_DEBUG', language : ['cpp'])
endif

# Generate c++ and python source, python file will be installed under `MMCorePySource`	
swig = find_program('swig')
cpp_source = custom_target(
    'MMCorePy_generate_source',
    input: ['MMCorePy.i'],
    output: ['@BASENAME@.cxx', '@BASENAME@.h', '@BASENAME@.py'],
    install: true,
    install_dir: [false, false, 'MMCorePySource'],
    command: [swig, '-c++', '-python', '-outdir', '@OUTDIR@', 
        '-o', '@OUTPUT0@', '@INPUT@']
)

# Get the numpy include path
pymod = import('python')
python = pymod.find_installation('python2', modules: ['numpy'])
cmd = run_command(python, '-c',  'import numpy; print(numpy.get_include())')
numpy_include = include_directories(cmd.stdout().strip())

deps = [
    python.dependency(),
	dependency('MMCore', fallback: 'MMCore')
    ]

shared_library('MMCorePy_wrap', cpp_source, include_directories: numpy_include, dependencies: deps, install: true)