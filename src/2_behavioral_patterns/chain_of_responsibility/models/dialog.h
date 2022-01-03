#ifndef DIALOG_H
#define DIALOG_H

#include "help_handler.h"
#include "widget.h"

class dialog : public widget {
public:
    dialog(help_handler *h, topic t = topic::NO_HELP_TOPIC);
    virtual void handle_help();

    // widget operations that dialog overrides...
    // ...
};

#endif /* DIALOG_H */
