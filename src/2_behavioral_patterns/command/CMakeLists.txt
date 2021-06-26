add_library("command-library" "header.hpp" "source.cpp")
target_include_directories("command-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("command-demo" "main.cpp")
target_link_libraries("command-demo" LINK_PUBLIC "command-library")
