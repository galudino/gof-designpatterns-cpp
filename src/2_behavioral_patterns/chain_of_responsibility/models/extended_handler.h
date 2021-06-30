#ifndef EXTENDED_HANDLER_H
#define EXTENDED_HANDLER_H

#include "handler.h"

class request;

class extended_handler : public handler {
public:
    virtual void handle_request(request *r);
    // ...
};

#endif /* EXTENDED_HANDLER_H */
