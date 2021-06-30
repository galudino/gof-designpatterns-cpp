#include "subject.h"
#include "observer.h"

void subject::attach(observer *o) { m_observers->append(o); }

void subject::detach(observer *o) { m_observers->remove(o); }

void subject::notify() {
    list_iterator<observer *> i(m_observers);

    for (i.first(); !i.done(); i.next()) {
        i.current_item()->update(this);
    }
}
