#include "composition.h"
#include "simple_compositor.h"
#include "tex_compositor.h"
#include "array_compositor.h"

int main() {
    composition *quick = new composition(new simple_compositor);
    composition *slick = new composition(new tex_compositor);
    composition *iconic = new composition(new array_compositor(100));

    quick->repair();
    slick->repair();
    iconic->repair();
}
