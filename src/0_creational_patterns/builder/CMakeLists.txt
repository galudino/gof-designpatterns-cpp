add_library("builder-library" "builder.hpp" "builder.cpp")
target_include_directories("builder-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories("../maze_types")
add_executable("builder-demo" "main.cpp")
target_link_libraries("builder-demo" INTERFACE "maze_types-library")
target_link_libraries("builder-demo" LINK_PUBLIC "builder-library")
