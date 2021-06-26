add_library("flyweight-library" "header.hpp" "source.cpp")
target_include_directories("flyweight-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("flyweight-demo" "main.cpp")
target_link_libraries("flyweight-demo" LINK_PUBLIC "flyweight-library")
