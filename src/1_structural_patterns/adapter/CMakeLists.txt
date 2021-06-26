add_library("adapter-library" "header.hpp" "source.cpp")
target_include_directories("adapter-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("adapter-demo" "main.cpp")
target_link_libraries("adapter-demo" LINK_PUBLIC "adapter-library")
