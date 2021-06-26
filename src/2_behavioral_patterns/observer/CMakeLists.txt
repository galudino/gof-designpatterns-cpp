add_library("observer-library" "header.hpp" "source.cpp")
target_include_directories("observer-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("observer-demo" "main.cpp")
target_link_libraries("observer-demo" LINK_PUBLIC "observer-library")
