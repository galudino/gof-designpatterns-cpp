#ifndef BUTTON_H
#define BUTTON_H

#include "widget.h"

class button : public widget {
public:
    button(widget *d, topic t = topic::NO_HELP_TOPIC);

    virtual void handle_help();
    // Widget operations that Button overrides...
};

#endif /* BUTTON_H */
