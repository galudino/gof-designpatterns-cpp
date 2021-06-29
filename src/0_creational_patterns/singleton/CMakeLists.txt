include_directories(../models)

add_executable(singleton main.cpp)
target_link_libraries(singleton LINK_PUBLIC creational_patterns_lib)
