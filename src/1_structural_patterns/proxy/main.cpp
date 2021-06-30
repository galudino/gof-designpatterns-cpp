#include "text_document.h"
#include "image_proxy.h"

int main() {
    text_document *text = new text_document();
    // ...
    text->insert(new image_proxy("anImageFileName"));
}
