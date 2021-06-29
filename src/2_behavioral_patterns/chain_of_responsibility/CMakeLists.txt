add_subdirectory(./models)
include_directories(./models)

add_executable(chain_of_responsibility main.cpp)

target_link_libraries(chain_of_responsibility chain_of_responsibility_lib)
