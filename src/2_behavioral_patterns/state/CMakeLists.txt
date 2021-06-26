add_library("state-library" "header.hpp" "source.cpp")
target_include_directories("state-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("state-demo" "main.cpp")
target_link_libraries("state-demo" LINK_PUBLIC "state-library")
