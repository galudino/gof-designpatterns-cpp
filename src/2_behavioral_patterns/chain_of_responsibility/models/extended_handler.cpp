#include "extended_handler.h"
#include "handler.h"
#include "request.h"

void extended_handler::handle_request(request *theRequest) {
    switch (theRequest->kind()) {
    case PREVIEW:
        // handle the Preview request
        break;

    default:
        // let Handler handle other requests
        handler::handle_request(theRequest);
    }
}
