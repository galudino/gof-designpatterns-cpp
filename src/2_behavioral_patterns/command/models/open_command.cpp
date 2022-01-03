#include "open_command.h"

#include "application.h"
#include "document.h"

#include <stdexcept>

void open_command::execute() {
    auto name = std::string();
    try {
        name = ask_user();
    } catch (std::exception e) {
        
    }
    
    auto d = new document(name);
    m_application->add(d);
    d->open();
}

std::string open_command::ask_user() {
    if (false) {
        throw std::exception();
    }
    return "some_file_name.extension";
}
