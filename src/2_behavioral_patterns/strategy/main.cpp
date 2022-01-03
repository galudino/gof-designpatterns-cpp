#include "composition.h"
#include "simple_compositor.h"
#include "tex_compositor.h"
#include "array_compositor.h"

int main() {
    // TODO use smart pointers.
    auto quick = new composition(new simple_compositor);
    auto slick = new composition(new tex_compositor);
    auto iconic = new composition(new array_compositor(100));
    
    quick->repair();
    slick->repair();
    iconic->repair();
}
