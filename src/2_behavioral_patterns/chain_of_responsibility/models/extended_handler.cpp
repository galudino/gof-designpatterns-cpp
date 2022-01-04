#include "extended_handler.h"
#include "handler.h"
#include "request.h"

void extended_handler::handle_request(request *r) {
    switch (r->kind()) {
    case request_type::PREVIEW:
        // handle the Preview request
        extended_handler::handle_preview(dynamic_cast<preview_request *>(r));
        break;

    default:
        // let Handler handle other requests
        handler::handle_request(r);
    }
}

void extended_handler::handle_preview(preview_request *r) { }
