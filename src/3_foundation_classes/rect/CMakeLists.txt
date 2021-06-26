add_library("foundation-rect-library" "header.hpp" "source.cpp")
target_include_directories("foundation-rect-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("foundation-rect-demo" "main.cpp")
target_link_libraries("foundation-rect-demo" LINK_PUBLIC "foundation-rect-library")
