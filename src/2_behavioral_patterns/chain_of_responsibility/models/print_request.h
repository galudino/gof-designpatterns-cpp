#ifndef PRINT_REQUEST_H
#define PRINT_REQUEST_H

#include "request.h"

class print_request : public request {
public:
    request_type kind() { return PRINT; };
};

#endif /* REQUEST_H */
