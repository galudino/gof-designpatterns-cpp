add_library("abstract_factory-library" "abstract_factory.hpp" "abstract_factory.cpp")
target_include_directories("abstract_factory-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories("../maze_types")
add_executable("abstract_factory-demo" "main.cpp")
target_link_libraries("abstract_factory-demo" INTERFACE "maze_content-library")
target_link_libraries("abstract_factory-demo" LINK_PUBLIC "abstract_factory-library")
