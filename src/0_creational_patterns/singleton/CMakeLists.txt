add_library("singleton-library" "header.hpp" "source.cpp")
target_include_directories("singleton-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("singleton-demo" "main.cpp")
target_link_libraries("singleton-demo" LINK_PUBLIC "singleton-library")
