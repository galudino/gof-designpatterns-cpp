add_library("foundation-list_iterator-library" "header.hpp" "source.cpp")
target_include_directories("foundation-list_iterator-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("foundation-list_iterator-demo" "main.cpp")
target_link_libraries("foundation-list_iterator-demo" LINK_PUBLIC "foundation-list_iterator-library")
