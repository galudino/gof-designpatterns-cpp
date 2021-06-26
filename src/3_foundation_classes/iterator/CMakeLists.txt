add_library("foundation-iterator-library" "header.hpp" "source.cpp")
target_include_directories("foundation-iterator-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("foundation-iterator-demo" "main.cpp")
target_link_libraries("foundation-iterator-demo" LINK_PUBLIC "foundation-iterator-library")
