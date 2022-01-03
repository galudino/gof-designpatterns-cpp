#include "handler.h"

#include "request.h"
#include "help_handler.h"
#include "help_request.h"
#include "print_request.h"

void handler::handle_request(request *r) {
    switch (r->kind()) {
    case request_type::HELP:
        // cast argument to appropriate type
        handle_help(dynamic_cast<help_request *>(r));
        break;

    case request_type::PRINT:
        handle_print(dynamic_cast<print_request *>(r));
        // ...
        break;

    default:
        // ...
        break;
    }
}

void handler::handle_help(help_request *r) {}

void handler::handle_print(print_request *r) {}
