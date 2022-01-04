#include "dialog.h"
#include "help_handler.h"

#include <iostream>

dialog::dialog(help_handler *h, topic t) : widget(nullptr) { set_handler(h, t); }

void dialog::handle_help() {
    if (has_help()) {
        // offer help on the dialog
        std::cout << "Offering help on the dialog." << std::endl;
    } else {
        help_handler::handle_help();
    }
}
