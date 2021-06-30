#include "employee.h"
#include "list.h"
#include "print_n_employees.h"

int main() {
    list<employee *> *employees;

    employees = new list<employee *>;
    
    employees->append(new employee);
    employees->append(new employee);
    employees->append(new employee);

    list_iterator<employee *> i(employees);
    int count = 0;

    for (i.first(); !i.done(); i.next()) {
        count++;
        i.current_item()->print();

        if (count >= 10) {
            break;
        }
    }
}
