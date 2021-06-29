set(adapter_src
    Manipulator.h
    Shape.h
    TextManipulator.h
    TextManipulator.cpp
    TextView.h
    TextView.cpp)

add_library(adapter_lib SHARED ${adapter_src})

include_directories(../../../3_foundation_classes)
