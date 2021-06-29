include_directories(../../3_foundation_classes)

set(proxy_src
    Graphic.h
    Graphic.cpp
    TextDocument.h
    TextDocument.cpp
    Image.h
    Image.cpp
    ImageProxy.h
    ImageProxy.cpp)

add_library(proxy_lib SHARED ${proxy_src})
target_link_libraries(proxy_lib foundation_classes_lib)

add_executable(proxy main.cpp)
target_link_libraries(proxy proxy_lib)
