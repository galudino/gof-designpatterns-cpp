add_library(object_adapter_lib
            SHARED
            text_shape.h
            text_shape.cpp
)

target_link_libraries(object_adapter_lib LINK_PUBLIC adapter_lib foundation_classes_lib)

include_directories("../../../3_foundation_classes" "../models")
add_executable(object_adapter main.cpp)
target_link_libraries(object_adapter LINK_PUBLIC object_adapter_lib)
