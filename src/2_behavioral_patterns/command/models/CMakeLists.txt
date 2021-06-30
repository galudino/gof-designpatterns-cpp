include_directories(../../iterator/models)

set(command_src
    application.h
    application.cpp
    "command.h"
    "command.cpp"
    document.h
    document.cpp
    my_class.h
    my_class.cpp
    open_command.h
    open_command.cpp
    paste_command.h
    paste_command.cpp
    macro_command.h
    macro_command.cpp
    simple_command.h
)

add_library(command_lib SHARED ${command_src})
