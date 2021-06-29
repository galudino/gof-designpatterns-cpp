include_directories(../models)

add_executable(factory_method main.cpp)

target_link_libraries(factory_method creational_patterns_lib)
