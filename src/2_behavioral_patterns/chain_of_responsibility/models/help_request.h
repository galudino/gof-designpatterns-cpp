#ifndef HELP_REQUEST_H
#define HELP_REQUEST_H

#include "request.h"

class help_request : public request {
public:
    request_type kind() { return Help; };
};

#endif /* REQUEST_H */
