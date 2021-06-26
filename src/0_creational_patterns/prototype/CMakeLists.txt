add_library("prototype-library" "header.hpp" "source.cpp")
target_include_directories("prototype-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("prototype-demo" "main.cpp")
target_link_libraries("prototype-demo" LINK_PUBLIC "prototype-library")
