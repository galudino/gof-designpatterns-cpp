add_library("singleton-library" "singleton.hpp" "singleton.cpp")
target_include_directories("singleton-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories("../maze_types")
add_executable("singleton-demo" "main.cpp")
target_link_libraries("singleton-demo" INTERFACE "maze_types-library")
target_link_libraries("singleton-demo" LINK_PUBLIC "singleton-library")
