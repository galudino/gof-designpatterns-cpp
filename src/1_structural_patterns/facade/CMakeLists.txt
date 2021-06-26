add_library("facade-library" "header.hpp" "source.cpp")
target_include_directories("facade-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("facade-demo" "main.cpp")
target_link_libraries("facade-demo" LINK_PUBLIC "facade-library")
