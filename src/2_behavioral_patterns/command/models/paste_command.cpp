#include "paste_command.h"

#include "document.h"

paste_command::paste_command(document *doc) { m_document = doc; }

void paste_command::execute() { m_document->paste(); }
