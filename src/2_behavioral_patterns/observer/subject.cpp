#include "subject.h"
#include "observer.h"

void subject::notify() {
    auto i = list_iterator<observer *>(m_observers);

    for (i.first(); !i.done(); i.next()) {
        i.current_item()->update(this);
    }
}
