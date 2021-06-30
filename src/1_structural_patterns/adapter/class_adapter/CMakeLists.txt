add_library(class_adapter_lib SHARED text_shape.h text_shape.cpp)
target_link_libraries(class_adapter_lib LINK_PUBLIC adapter_lib foundation_classes_lib)
include_directories("../../../3_foundation_classes" "../models")

add_executable(class_adapter main.cpp)
target_link_libraries(class_adapter LINK_PUBLIC class_adapter_lib)
