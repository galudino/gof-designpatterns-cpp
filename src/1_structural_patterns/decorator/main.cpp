#include "border_decorator.h"
#include "scroll_decorator.h"
#include "text_view.h"
#include "window.h"

int main() {
    window *w = new window;
    text_view *tv = new text_view;

    w->set_contents(new border_decorator(new scroll_decorator(tv), 1));
}
