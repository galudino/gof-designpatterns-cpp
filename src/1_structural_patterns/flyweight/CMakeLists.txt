add_subdirectory("./models")
include_directories("./models")

add_executable(flyweight main.cpp)
target_link_libraries(flyweight flyweight_lib)
