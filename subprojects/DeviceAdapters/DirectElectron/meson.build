current = meson.current_source_dir()
bldDir = meson.current_build_dir()
#### DEMessaging ####
dir = 'src' / 'DEMessaging'

# Generate protobuf files
# protoc = subproject('protobuf').get_variable('protoc_native')
# protoc = find_program('protoc', required : false)
dep = disabler()#dependency('protobuf', fallback: ['protobuf', 'protobuf_dep'], required : false)

if not dep.found()
  message('DECamera: protoc tool and/or protobuf dependency not found')
else

    gen = generator(protoc, \
    output    : ['@BASENAME@.pb.cc', '@BASENAME@.pb.h'],
    arguments : ['--proto_path=@0@'.format(current / dir), '--cpp_out=@0@'.format(bldDir / dir), '@INPUT@'])

    generated = gen.process(dir / 'DEServer.proto')


    deps = [
        MMDevice_dep,
        dependency('boost')
    ]

    sources = [
        dir / 'PacketCreator.cpp',
        dir / 'PacketParser.cpp',
        dir / 'PacketUtility.cpp',
        dir / 'VariableBuffer.cpp',
        generated
    ]

    messaging_lib = static_library('DEMessaging', sources, include_directories: dir, dependencies : deps)

    #### DEClientLib ####
    dir = 'src' / 'DEClientLib'

    deps = [
        MMDevice_dep,
        dependency('boost')
    ]

    sources = [
        dir / 'DECamProxy.cpp',
        dir / 'DENetwork.cpp',
        dir / 'DEProperty.cpp',
        dir / 'DEProtoProxy.cpp',
        dir / 'PropertyCallback.cpp',
        dir / 'PropertyHelper.cpp'
    ]

    client_lib = static_library('DEClientLib', sources, include_directories: dir, dependencies : deps, link_with: messaging_lib)

    #### DECamera ####
    dir = 'src' / 'DECamera'

    deps = [
        MMDevice_dep
    ]

    sources = [
        dir / 'DECamera.cpp'
    ]

    library('DECamera', sources, include_directories: dir, dependencies : deps, link_with: client_lib, install: true)
endif