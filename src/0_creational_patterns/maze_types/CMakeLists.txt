add_library("maze_types-library" "maze_types.hpp" "maze_types.cpp")
target_include_directories("maze_types-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("maze_types-demo" "main.cpp")
target_link_libraries("maze_types-demo" LINK_PUBLIC "maze_types-library")
