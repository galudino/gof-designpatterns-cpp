#include "handler.h"

#include "request.h"
#include "help_handler.h"
#include "print_request.h"

void handler::handle_request(request *theRequest) {
    switch (theRequest->kind()) {
    case HELP:
        // cast argument to appropriate type
        handle_help((help_request *)theRequest);
        break;

    case PRINT:
        handle_print((print_request *)theRequest);
        // ...
        break;

    default:
        // ...
        break;
    }
}

void handler::handle_help(help_request *theRequest) {}

void handler::handle_print(print_request *theRequest) {}
