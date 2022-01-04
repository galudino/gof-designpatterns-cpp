#include "text_document.h"
#include "image_proxy.h"

int main() {
    auto text = text_document();
    auto proxy = image_proxy("an_image_file_name");
    
    text.insert(&proxy);
    
    return 0;
}
