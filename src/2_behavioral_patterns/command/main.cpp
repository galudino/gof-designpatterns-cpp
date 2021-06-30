#include "command.h"
#include "simple_command.h"
#include "my_class.h"

int main() {
    my_class *receiver = new my_class;

    // ...

    command *c = new simple_command<my_class>(receiver, &my_class::action);

    // ...

    c->execute();
}
