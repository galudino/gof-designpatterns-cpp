include_directories(../../3_foundation_classes)

set(proxy_src
    graphic.h
    graphic.cpp
    text_document.h
    text_document.cpp
    image.h
    image.cpp
    image_proxy.h
    image_proxy.cpp)

add_library(proxy_lib SHARED ${proxy_src})
target_link_libraries(proxy_lib foundation_classes_lib)

add_executable(proxy main.cpp)
target_link_libraries(proxy proxy_lib)
