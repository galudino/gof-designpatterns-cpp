#ifndef PASTE_COMMAND_H
#define PASTE_COMMAND_H

#include "command.h"

class document;

class paste_command : public command {
public:
    paste_command(document *d) : m_document(d) { }

    void execute() override;
private:
    document *m_document = nullptr;
};

#endif // PASTE_COMMAND_H
