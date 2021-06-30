#include "employee.h"
#include "list.h"
#include "print_n_employees.h"

int main() {
    list<employee *> *employees;

    employees = new list<employee *>;
    employees->append(new employee);
    employees->append(new employee);
    employees->append(new employee);

    print_n_employees pa(employees, 10);
    pa.traverse();
}
