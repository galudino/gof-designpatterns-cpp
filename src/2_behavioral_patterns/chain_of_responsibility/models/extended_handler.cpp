#include "extended_handler.h"
#include "handler.h"
#include "request.h"

void extended_handler::handle_request(request *r) {
    switch (r->kind()) {
    case request_type::PREVIEW:
        // handle the Preview request
        break;

    default:
        // let Handler handle other requests
        handler::handle_request(r);
    }
}
