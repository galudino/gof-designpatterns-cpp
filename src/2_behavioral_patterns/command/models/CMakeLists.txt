include_directories(../../iterator)

set(command_src
    Application.h
    Application.cpp
    "Command.h"
    "Command.cpp"
    Document.h
    Document.cpp
    OpenCommand.h
    OpenCommand.cpp
    PasteCommand.h
    PasteCommand.cpp
    MacroCommand.h
    MacroCommand.cpp)

add_library(command_lib SHARED ${command_src})
