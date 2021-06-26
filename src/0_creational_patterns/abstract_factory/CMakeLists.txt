add_library("abstract_factory-library" "header.hpp" "source.cpp")
target_include_directories("abstract_factory-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("abstract_factory-demo" "main.cpp")
target_link_libraries("abstract_factory-demo" LINK_PUBLIC "abstract_factory-library")
