#include "open_command.h"

#include "application.h"
#include "document.h"

open_command::open_command(application *a) { m_application = a; }

void open_command::execute() {
    const char *name = AskUser();

    if (name != 0) {
        document *d = new document(name);
        m_application->add(d);
        d->open();
    }
}

const char *open_command::AskUser() { return "SomeFileName"; }
