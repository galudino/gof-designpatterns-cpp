#include "employee.h"
#include "list.h"
#include "print_n_employees.h"

int main() {
    auto employees = list<employee *>();
    
    auto e1 = employee();
    employees.append(&e1);
    
    auto e2 = employee();
    employees.append(&e2);
    
    auto e3 = employee();
    employees.append(&e3);

    auto pa = print_n_employees(&employees, 10);
    pa.traverse();
    
    return 0;
}
