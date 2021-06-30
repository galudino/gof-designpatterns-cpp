#include "application.h"
#include "button.h"
#include "dialog.h"

int main() {
    constexpr topic PRINT_TOPIC = 1;
    constexpr topic PAPER_ORIENTATION_TOPIC = 2;
    constexpr topic APPLICATION_TOPIC = 3;

    application *app = new application(APPLICATION_TOPIC);
    dialog *d = new dialog(app, PRINT_TOPIC);
    button *b = new button(d, PAPER_ORIENTATION_TOPIC);

    b->handle_help();
}
