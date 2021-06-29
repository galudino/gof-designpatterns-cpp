set(iterator_src
    Employee.h
    Employee.cpp
    FilteringListTraverser.h
    Iterator.h
    IteratorPtr.h
    List.h
    ListIterator.h
    ListTraverser.h
    PrintNEmployees.h
    ReverseListIterator.h
    SkipList.h
    SkipListIterator.h
)

add_library(iterator_lib SHARED ${iterator_src})
