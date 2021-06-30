include_directories(./../../3_foundation_classes)
include_directories(../iterator/models)

set(observer_src
    analog_clock.h
    clock_timer.h
    clock_timer.cpp
    digital_clock.h
    digital_clock.cpp
    observer.h
    subject.h
    subject.cpp
    widget.h
)

add_library(observer_lib SHARED ${observer_src})
target_link_libraries(observer_lib foundation_classes_lib)

add_executable(observer main.cpp)
target_link_libraries(observer LINK_PUBLIC observer_lib)
