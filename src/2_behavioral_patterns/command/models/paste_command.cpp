#include "paste_command.h"

#include "document.h"

void paste_command::execute() {
    m_document->paste();
}
