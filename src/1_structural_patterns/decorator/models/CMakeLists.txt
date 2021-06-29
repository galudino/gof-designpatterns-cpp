set(decorator_src
    BorderDecorator.h
    BorderDecorator.cpp
    Decorator.h
    Decorator.cpp
    ScrollDecorator.h
    ScrollDecorator.cpp
    DropShadowDecorator.h
    DropShadowDecorator.cpp
    TextView.h
    VisualComponent.h
    VisualComponent.cpp
    Window.h
    Window.cpp)

add_library(decorator_lib SHARED ${decorator_src})
