include_directories(../models)

set(builder_src
    counting_maze_builder.h
    counting_maze_builder.cpp
    maze_builder.h
    maze_builder.cpp
    
    standard_maze_builder.h
    standard_maze_builder.cpp
)

add_library(builder_lib SHARED ${builder_src})
target_link_libraries(builder_lib LINK_PUBLIC creational_patterns_lib)

add_executable(builder1 main_builder1.cpp)
add_executable(builder2 main_builder2.cpp)

target_link_libraries(builder1 builder_lib creational_patterns_lib)
target_link_libraries(builder2 builder_lib creational_patterns_lib)
