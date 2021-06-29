add_subdirectory(./models)

include_directories(../../3_foundation_classes)

add_executable(bridge main.cpp)
target_link_libraries(bridge LINK_PUBLIC bridge_lib)
