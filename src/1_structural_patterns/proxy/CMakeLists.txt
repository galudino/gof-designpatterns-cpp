add_library("proxy-library" "header.hpp" "source.cpp")
target_include_directories("proxy-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("proxy-demo" "main.cpp")
target_link_libraries("proxy-demo" LINK_PUBLIC "proxy-library")
