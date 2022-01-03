#ifndef HELP_REQUEST_H
#define HELP_REQUEST_H

#include "request.h"

class help_request : public request {
public:
    request_type kind() override { return request_type::HELP; };
};

#endif /* REQUEST_H */
