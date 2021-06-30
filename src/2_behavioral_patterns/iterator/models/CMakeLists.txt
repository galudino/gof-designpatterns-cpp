set(iterator_src
    abstract_list.h
    employee.h
    employee.cpp
    filtering_list_traverser.h
    iterator.h
    iterator_ptr.h
    list.h
    list_traverser.h
    print_n_employees.h
    reverse_list_iterator.h
    skip_list.h
    skip_list_iterator.h
)

add_library(iterator_lib SHARED ${iterator_src})
