#ifndef APPLICATION_H
#define APPLICATION_H

#include "help_handler.h"

class application : public help_handler {
public:
    application(topic t) : help_handler(0, t) {}

    virtual void handle_help();
    // application-specific operations...
};

#endif /* APPLICATION_H */
