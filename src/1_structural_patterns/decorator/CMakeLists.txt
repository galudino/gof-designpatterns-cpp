add_subdirectory("./models")
include_directories("./models")

add_executable(decorator main.cpp)

target_link_libraries(decorator decorator_lib)
