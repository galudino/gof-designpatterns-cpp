#include "employee.h"
#include "iterator.h"
#include "list.h"
#include "reverse_list_iterator.h"
#include "skip_list.h"
#include "skip_list_iterator.h"

void list_example();
void skip_list_example();

void print_employees(iterator<employee *> &i);

int main() {
    // EXAMPLE 1: list
    list_example();
    
    // EXAMPLE 2: skip_list
    skip_list_example();
    
    return 0;
}

void list_example() {
    auto employees = list<employee *>();

    auto e1 = employee();
    employees.append(&e1);
    
    auto e2 = employee();
    employees.append(&e2);
    
    auto e3 = employee();
    employees.append(&e3);

    auto forward = list_iterator<employee *>(&employees);
    auto backward = reverse_list_iterator<employee *>(&employees);
        
    print_employees(forward);
    print_employees(backward);
}

void skip_list_example() {
    auto employees = skip_list<employee *>();
    
    auto e1 = employee();
    employees.append(&e1);
    
    auto e2 = employee();
    employees.append(&e2);
    
    auto e3 = employee();
    employees.append(&e3);
    
    auto iterator = skip_list_iterator<employee *>(&employees);
    print_employees(iterator);
}

void print_employees(iterator<employee *> &i) {
    for (i.first(); !i.done(); i.next()) {
        i.current_item()->print();
    }
}
