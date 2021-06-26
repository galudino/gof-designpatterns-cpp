add_library("decorator-library" "header.hpp" "source.cpp")
target_include_directories("decorator-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("decorator-demo" "main.cpp")
target_link_libraries("decorator-demo" LINK_PUBLIC "decorator-library")
