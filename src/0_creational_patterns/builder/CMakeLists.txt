include_directories(../models)

set(builder_src
    CountingMazeBuilder.h
    CountingMazeBuilder.cpp
    MazeBuilder.h
    MazeBuilder.cpp
    StandardMazeBuilder.h
    StandardMazeBuilder.cpp)

add_library(builder_lib SHARED ${builder_src})
target_link_libraries(builder_lib LINK_PUBLIC creational_patterns_lib)

add_executable(builder1 main_builder1.cpp)
add_executable(builder2 main_builder2.cpp)

target_link_libraries(builder1 builder_lib creational_patterns_lib)
target_link_libraries(builder2 builder_lib creational_patterns_lib)
