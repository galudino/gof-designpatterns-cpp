add_library("factory_method-library" "header.hpp" "source.cpp")
target_include_directories("factory_method-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("factory_method-demo" "main.cpp")
target_link_libraries("factory_method-demo" LINK_PUBLIC "factory_method-library")
