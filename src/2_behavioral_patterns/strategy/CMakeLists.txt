add_library("strategy-library" "header.hpp" "source.cpp")
target_include_directories("strategy-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("strategy-demo" "main.cpp")
target_link_libraries("strategy-demo" LINK_PUBLIC "strategy-library")
