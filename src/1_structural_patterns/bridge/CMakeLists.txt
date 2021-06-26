add_library("bridge-library" "header.hpp" "source.cpp")
target_include_directories("bridge-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("bridge-demo" "main.cpp")
target_link_libraries("bridge-demo" LINK_PUBLIC "bridge-library")
