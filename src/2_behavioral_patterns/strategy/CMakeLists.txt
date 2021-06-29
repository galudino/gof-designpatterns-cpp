add_subdirectory(./models)
include_directories(./models)

target_link_libraries(strategy_lib foundation_classes_lib)

add_executable(strategy main.cpp)
target_link_libraries(strategy strategy_lib)
