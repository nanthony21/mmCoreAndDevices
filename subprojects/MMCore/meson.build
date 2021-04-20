project('MMCore', 'cpp', version : '0.0.1',
	default_options: [
		'cpp_std=c++03'
	]
)

add_project_arguments('-D_LIB', language: ['cpp'])

if host_machine.system() == 'windows'
	add_project_arguments('-DWIN32', '-D_WINDOWS', language: ['cpp'])
endif

if get_option('buildtype').startswith('release')
    add_project_arguments('-DNDEBUG', language : ['cpp'])
else
    add_project_arguments('-DDEBUG', language : ['cpp'])
endif

deps = [
	dependency('MMDevice', fallback: 'MMDevice'),
	dependency('boost', modules: ['chrono', 'date_time', 'regex', 'system', 'thread'], static: true)
	]
	
sources = [  # Must explicitly list all source files.
	'CircularBuffer.cpp',
	'Configuration.cpp',
	'CoreCallback.cpp',
	'CoreProperty.cpp',
	'DeviceManager.cpp',
	'Error.cpp',
	'FrameBuffer.cpp',
	'Host.cpp',
	'LogManager.cpp',
	'MMCore.cpp',
	'PluginManager.cpp',
	'Semaphore.cpp',
	'Task.cpp',
	'TaskSet.cpp',
	'TaskSet_CopyMemory.cpp',
	'ThreadPool.cpp',
	'Devices/AutoFocusInstance.cpp',
	'Devices/CameraInstance.cpp',
	'Devices/DeviceInstance.cpp',
	'Devices/GalvoInstance.cpp',
	'Devices/HubInstance.cpp',
	'Devices/ImageProcessorInstance.cpp',
	'Devices/MagnifierInstance.cpp',
	'Devices/SerialInstance.cpp',
	'Devices/ShutterInstance.cpp',
	'Devices/SignalIOInstance.cpp',
	'Devices/SLMInstance.cpp',
	'Devices/StageInstance.cpp',
	'Devices/StateInstance.cpp',
	'Devices/XYStageInstance.cpp',
	'LibraryInfo/LibraryPathsUnix.cpp',
	'LibraryInfo/LibraryPathsWindows.cpp',
	'LoadableModules/LoadedDeviceAdapter.cpp',
	'LoadableModules/LoadedModule.cpp',
	'LoadableModules/LoadedModuleImpl.cpp',	
	'Logging/Metadata.cpp'
]

if host_machine.system() == 'windows'
	sources += ['LoadableModules/LoadedModuleImplWindows.cpp']
else
	sources += ['LoadableModules/LoadedModuleImplUnix.cpp']	
endif

cxx = meson.get_compiler('cpp')
if host_machine.system() == 'windows'
	iphlpapi_dep = cxx.find_library('iphlpapi')
	deps += [iphlpapi_dep]
elif host_machine.system() == 'linux'
	libdl_dep = cxx.find_library('dl')
	deps += [libdl_dep]
endif

MMCore_lib = static_library('MMCore', sources, dependencies: deps)
MMCore_dep = declare_dependency(include_directories: include_directories('.'), link_with: MMCore_lib, dependencies: deps)
meson.override_dependency('MMCore', MMCore_dep)