include_directories(../2_behavioral_patterns/iterator)

set(foundation_classes_src
    coord.h
    coord.cpp
    point.h
    point.cpp
    rect.h
    rect.cpp
)

add_library(foundation_classes_lib SHARED ${foundation_classes_src})
target_link_libraries(foundation_classes_lib LINK_PUBLIC iterator_lib)
