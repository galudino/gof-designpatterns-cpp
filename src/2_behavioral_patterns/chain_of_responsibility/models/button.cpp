#include "button.h"
#include "help_handler.h"

#include <iostream>

class widget;

button::button(widget *h, topic t) : widget(h, t) {}

void button::handle_help() {
    if (has_help()) {
        // offer help on the button
        std::cout << "Offering help on the button." << std::endl;
    } else {
        help_handler::handle_help();
    }
}
