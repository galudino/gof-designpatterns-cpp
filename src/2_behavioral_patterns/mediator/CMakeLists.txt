add_library("mediator-library" "header.hpp" "source.cpp")
target_include_directories("mediator-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("mediator-demo" "main.cpp")
target_link_libraries("mediator-demo" LINK_PUBLIC "mediator-library")
