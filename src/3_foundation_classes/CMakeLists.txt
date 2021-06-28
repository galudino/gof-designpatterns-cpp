add_library("foundation-library" "gof_foundation.hpp" "gof_foundation.cpp")
target_include_directories("foundation-library" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("foundation-demo" "main.cpp")
target_link_libraries("foundation-demo" LINK_PUBLIC "foundation-library")
