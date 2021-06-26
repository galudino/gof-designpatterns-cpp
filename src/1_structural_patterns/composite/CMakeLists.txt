add_library("composite-library" "header.hpp" "source.cpp")
target_include_directories("composite-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("composite-demo" "main.cpp")
target_link_libraries("composite-demo" LINK_PUBLIC "composite-library")
