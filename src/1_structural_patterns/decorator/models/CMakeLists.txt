set(decorator_src
    border_decorator.h
    border_decorator.cpp
    decorator.h
    decorator.cpp
    scroll_decorator.h
    scroll_decorator.cpp
    drop_shadow_decorator.h
    drop_shadow_decorator.cpp
    text_view.h
    visual_component.h
    visual_component.cpp
    window.h
    window.cpp)

add_library(decorator_lib SHARED ${decorator_src})
