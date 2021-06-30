include_directories(../../2_behavioral_patterns/iterator/models)
include_directories(../../3_foundation_classes)

set(composite_src
    bus.h
    bus.cpp
    cabinet.h
    cabinet.cpp
    card.h
    card.cpp
    chassis.h
    chassis.cpp
    composite_equipment.h
    composite_equipment.cpp
    equipment.h
    equipment.cpp
    floppy_disk.h
    floppy_disk.cpp)

add_library(composite_lib SHARED ${composite_src})

add_executable(composite main.cpp)

target_link_libraries(composite composite_lib)
