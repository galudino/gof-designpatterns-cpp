add_library("example-library" "header.hpp" "source.cpp")
target_include_directories("example-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("example-demo" "main.cpp")
target_link_libraries("example-demo" LINK_PUBLIC "example-library")
