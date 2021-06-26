add_library("iterator-library" "header.hpp" "source.cpp")
target_include_directories("iterator-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("iterator-demo" "main.cpp")
target_link_libraries("iterator-demo" LINK_PUBLIC "iterator-library")
