add_library("foundation-point-library" "header.hpp" "source.cpp")
target_include_directories("foundation-point-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("foundation-point-demo" "main.cpp")
target_link_libraries("foundation-point-demo" LINK_PUBLIC "foundation-point-library")
