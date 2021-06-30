include_directories(../../../3_foundation_classes)

set(strategy_src
    array_compositor.h
    array_compositor.cpp
    composition.h
    composition.cpp
    compositor.h
    simple_compositor.h
    simple_compositor.cpp
    tex_compositor.h
    tex_compositor.cpp
)

add_library(strategy_lib SHARED ${strategy_src})
