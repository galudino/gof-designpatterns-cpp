set(adapter_src
    manipulator.h
    shape.h
    text_manipulator.h
    text_manipulator.cpp
    text_view.h
    text_view.cpp)

add_library(adapter_lib SHARED ${adapter_src})

include_directories(../../../3_foundation_classes)
