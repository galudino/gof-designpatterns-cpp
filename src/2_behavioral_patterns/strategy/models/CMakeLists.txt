include_directories(../../../3_foundation_classes)

set(strategy_src
    ArrayCompositor.h
    ArrayCompositor.cpp
    Composition.h
    Composition.cpp
    Compositor.h
    SimpleCompositor.h
    SimpleCompositor.cpp
    TeXCompositor.h
    TeXCompositor.cpp
)

add_library(strategy_lib SHARED ${strategy_src})
