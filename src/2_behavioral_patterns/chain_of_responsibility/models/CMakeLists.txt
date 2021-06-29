
set(chain_of_responsibility_src
Handler.h
Handler.cpp
HelpHandler.h
HelpHandler.cpp
ExtendedHandler.h
ExtendedHandler.cpp
Widget.h
Widget.cpp
Button.h
Button.cpp
Dialog.h
Dialog.cpp
Application.h
Application.cpp
Request.h
PrintRequest.h
)

add_library(chain_of_responsibility_lib SHARED ${chain_of_responsibility_src})
