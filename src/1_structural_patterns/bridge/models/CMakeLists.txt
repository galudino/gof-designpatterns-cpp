include_directories(../../../3_foundation_classes)

set(bridge_src
    application_window.h
    application_window.cpp
    icon_window.h
    icon_window.cpp
    pm_window_imp.h
    pm_window_imp.cpp
    view.h
    view.cpp
    window.h
    window.cpp
    window_imp.h
    window_system_factory.h
    window_system_factory.cpp
    x_window_imp.h
    x_window_imp.cpp)

add_library(bridge_lib SHARED ${bridge_src})
target_link_libraries(bridge_lib LINK_PUBLIC foundation_classes_lib)
