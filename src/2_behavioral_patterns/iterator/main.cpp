#include "employee.h"
#include "iterator.h"
#include "list.h"
#include "reverse_list_iterator.h"
#include "skip_list.h"
#include "skip_list_iterator.h"

void PrintEmployees(iterator<employee *> &i) {
    for (i.first(); !i.done(); i.next()) {
        i.current_item()->print();
    }
}

int main() {
    // EXAMPLE 1: List

    list<employee *> *employees;

    employees = new list<employee *>;
    employees->append(new employee);
    employees->append(new employee);
    employees->append(new employee);

    list_iterator<employee *> forward(employees);
    reverse_list_iterator<employee *> backward(employees);

    PrintEmployees(forward);
    PrintEmployees(backward);

    // EXAMPLE 2: SkipList

    skip_list<employee *> *employees2;

    employees2 = new skip_list<employee *>;
    employees2->append(new employee);
    employees2->append(new employee);
    employees2->append(new employee);

    skip_list_iterator<employee *> iterator(employees2);
    PrintEmployees(iterator);
}
