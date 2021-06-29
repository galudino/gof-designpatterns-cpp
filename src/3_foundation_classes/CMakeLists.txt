include_directories(../2_behavioral_patterns/iterator)

set(foundation_classes_src
    Coord.h
    Coord.cpp
    Point.h
    Point.cpp
    Rect.h
    Rect.cpp)

add_library(foundation_classes_lib SHARED ${foundation_classes_src})
target_link_libraries(foundation_classes_lib LINK_PUBLIC iterator_lib)
