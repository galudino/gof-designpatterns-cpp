add_library("interpreter-library" "header.hpp" "source.cpp")
target_include_directories("interpreter-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("interpreter-demo" "main.cpp")
target_link_libraries("interpreter-demo" LINK_PUBLIC "interpreter-library")
