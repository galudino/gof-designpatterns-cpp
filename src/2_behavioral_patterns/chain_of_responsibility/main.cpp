#include "application.h"
#include "button.h"
#include "dialog.h"
#include "request.h"

int main() {
    // TODO: use smart pointers
    auto app = new application(topic::APPLICATION_TOPIC);
    auto d = new dialog(app, topic::PRINT_TOPIC);
    auto b = new button(d, topic::PAPER_ORIENTATION_TOPIC);
    
    b->handle_help();
    
    return 0;
}
