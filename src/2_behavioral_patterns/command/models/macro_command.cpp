#include "macro_command.h"

void macro_command::execute() {
    list_iterator<command *> i(m_commands);

    for (i.first(); !i.done(); i.next()) {
        command *c = i.current_item();
        c->execute();
    }
}

