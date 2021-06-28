add_library("foundation-library" INTERFACE "gof_foundation.hpp")
target_include_directories("foundation-library" INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_executable("foundation-demo" "main.cpp")
target_link_libraries("foundation-demo" INTERFACE "foundation-library")

## To add this header-only library to a target,
## add the following directives to a target's CMakeLists.txt file:
## ## After add_library()
## include_directories("../../3_foundation_classes")
## ## After add_executable()
## target_link_libraries("subjectmatter-demo" INTERFACE "gof_foundation-library")
