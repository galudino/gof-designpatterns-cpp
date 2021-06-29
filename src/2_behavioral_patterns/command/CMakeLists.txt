add_subdirectory(./models)
include_directories(./models)

target_link_libraries(command_lib iterator_lib)

add_executable("command" main.cpp)
target_link_libraries("command" "command_lib")
