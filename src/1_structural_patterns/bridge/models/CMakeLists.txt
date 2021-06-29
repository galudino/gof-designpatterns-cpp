include_directories(../../../3_foundation_classes)

set(bridge_src
    ApplicationWindow.h
    ApplicationWindow.cpp
    IconWindow.h
    IconWindow.cpp
    PMWindowImp.h
    PMWindowImp.cpp
    View.h
    View.cpp
    Window.h
    Window.cpp
    WindowImp.h
    WindowSystemFactory.h
    WindowSystemFactory.cpp
    XWindowImp.h
    XWindowImp.cpp)

add_library(bridge_lib SHARED ${bridge_src})
target_link_libraries(bridge_lib LINK_PUBLIC foundation_classes_lib)
