
set(chain_of_responsibility_src
    handler.h
    handler.cpp
    help_handler.h
    help_handler.cpp
    help_request.h
    extended_handler.h
    extended_handler.cpp
    widget.h
    widget.cpp
    button.h
    button.cpp
    dialog.h
    dialog.cpp
    application.h
    application.cpp
    request.h
    print_request.h
)

add_library(chain_of_responsibility_lib SHARED ${chain_of_responsibility_src})
