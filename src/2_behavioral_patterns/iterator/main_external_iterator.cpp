#include "employee.h"
#include "list.h"
#include "print_n_employees.h"

int main() {
    auto employees = list<employee *>();

    employees.append(new employee);
    employees.append(new employee);
    employees.append(new employee);

    auto i = list_iterator<employee *>(&employees);
    auto count = 0;

    for (i.first(); !i.done(); i.next()) {
        ++count;
        i.current_item()->print();

        if (count >= 10) {
            break;
        }
    }
    
    return 0;
}
