include_directories(../models)

set(prototype_src
    maze_prototype_factory.h
    maze_prototype_factory.cpp)

add_library(prototype_lib SHARED ${prototype_src})
target_link_libraries(prototype_lib LINK_PUBLIC creational_patterns_lib)
add_executable(prototype main.cpp)

target_link_libraries(prototype prototype_lib creational_patterns_lib)
