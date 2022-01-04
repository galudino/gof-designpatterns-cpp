#ifndef EXTENDED_HANDLER_H
#define EXTENDED_HANDLER_H

#include "handler.h"

// TODO: Create preview_handler.h
#include "request.h"

class preview_request : public request {
public:
    request_type kind() override { return request_type::PREVIEW; }
};
// end TODO

class preview_request;

class extended_handler : public handler {
public:
    void handle_request(request *r) override;
    // ...
private:
    void handle_preview(preview_request *r);
};

#endif /* EXTENDED_HANDLER_H */
