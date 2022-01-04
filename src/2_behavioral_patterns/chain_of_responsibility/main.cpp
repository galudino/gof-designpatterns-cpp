#include "application.h"
#include "button.h"
#include "dialog.h"
#include "request.h"

int main() {
    auto app = application(topic::APPLICATION_TOPIC);
    auto d = dialog(&app, topic::PRINT_TOPIC);
    auto b = button(&d, topic::PAPER_ORIENTATION_TOPIC);
    
    b.handle_help();
    
    return 0;
}
