add_library("builder-library" "header.hpp" "source.cpp")
target_include_directories("builder-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("builder-demo" "main.cpp")
target_link_libraries("builder-demo" LINK_PUBLIC "builder-library")
