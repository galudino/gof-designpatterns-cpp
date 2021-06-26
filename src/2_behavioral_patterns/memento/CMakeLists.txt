add_library("memento-library" "header.hpp" "source.cpp")
target_include_directories("memento-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("memento-demo" "main.cpp")
target_link_libraries("memento-demo" LINK_PUBLIC "memento-library")
