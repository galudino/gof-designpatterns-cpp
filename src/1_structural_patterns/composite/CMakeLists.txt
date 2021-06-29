include_directories(../../2_behavioral_patterns/iterator)
include_directories(../../3_foundation_classes)

set(composite_src
    Bus.h
    Bus.cpp
    Cabinet.h
    Cabinet.cpp
    Card.h
    Card.cpp
    Chassis.h
    Chassis.cpp
    CompositeEquipment.h
    CompositeEquipment.cpp
    Equipment.h
    Equipment.cpp
    FloppyDisk.h
    FloppyDisk.cpp)

add_library(composite_lib SHARED ${composite_src})

add_executable(composite main.cpp)

target_link_libraries(composite composite_lib)
