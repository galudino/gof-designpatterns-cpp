#ifndef PRINT_N_EMPLOYEES_H
#define PRINT_N_EMPLOYEES_H

#include "list_traverser.h"

class print_n_employees : public list_traverser<employee *> {
public:
    print_n_employees(list<employee *> *l, int n)
    : list_traverser<employee *>(l),
    m_total(n),
    m_count(0) {}

protected:
    bool process_item(employee *const &e) {
        ++m_count;
        e->print();
        return m_count < m_total;
    }
private:
    int m_total;
    int m_count;
};


#endif /* PRINT_N_EMPLOYEES_H */
