add_library("foundation-list-library" "header.hpp" "source.cpp")
target_include_directories("foundation-list-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("foundation-list-demo" "main.cpp")
target_link_libraries("foundation-list-demo" LINK_PUBLIC "foundation-list-library")
