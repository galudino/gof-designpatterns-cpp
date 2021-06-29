include_directories(./../../3_foundation_classes)
include_directories(../iterator)

set(observer_src
    AnalogClock.h
    ClockTimer.h
    ClockTimer.cpp
    DigitalClock.h
    DigitalClock.cpp
    Observer.h
    Subject.h
    Subject.cpp
    Widget.h
)

add_library(observer_lib SHARED ${observer_src})
target_link_libraries(observer_lib foundation_classes_lib)

add_executable(observer main.cpp)
target_link_libraries(observer LINK_PUBLIC observer_lib)
