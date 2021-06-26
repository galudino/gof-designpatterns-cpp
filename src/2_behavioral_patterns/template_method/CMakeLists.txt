add_library("template_method-library" "header.hpp" "source.cpp")
target_include_directories("template_method-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("template_method-demo" "main.cpp")
target_link_libraries("template_method-demo" LINK_PUBLIC "template_method-library")
