deps = [
    dependency('MMDevice', fallback: 'MMDevice'),
    dependency('boost')
]

#### ArduinoNeoPixelShutter ###
dir = 'ArduinoNeoPixelShutter'
library(dir, dir / 'ArduinoNeoPixelShutter.cpp', install: true, dependencies: deps, include_directories: dir)


#### RAMPS Stage ####
dir = 'RAMPSStage'
sources = [
    dir / 'RAMPS.cpp',
    dir / 'XYStage.cpp',
    dir / 'ZStage.cpp'
]
library('RAMPS', sources, include_directories: dir, dependencies: deps, install: true)
