#include "border_decorator.h"
#include "scroll_decorator.h"
#include "text_view.h"
#include "window.h"

int main() {
    auto w = window();
    auto tv = text_view();
    auto sd = scroll_decorator(&tv);
    auto bd = border_decorator(&sd, 1);
    
    w.set_contents(&bd);
}
