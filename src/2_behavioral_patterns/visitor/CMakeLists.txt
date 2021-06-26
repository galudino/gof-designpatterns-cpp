add_library("visitor-library" "header.hpp" "source.cpp")
target_include_directories("visitor-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("visitor-demo" "main.cpp")
target_link_libraries("visitor-demo" LINK_PUBLIC "visitor-library")
