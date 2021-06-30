#ifndef PASTE_COMMAND_H
#define PASTE_COMMAND_H

#include "command.h"

class document;

class paste_command : public command {
public:
    paste_command(document *);

    virtual void execute();

private:
    document *m_document;
};

#endif // PASTE_COMMAND_H
