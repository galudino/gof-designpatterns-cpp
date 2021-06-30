#include "window_system_factory.h"

window_system_factory *window_system_factory::m_instance = 0;

window_system_factory *window_system_factory::instance() {
    if (m_instance == 0) {
        m_instance = new window_system_factory;
    }
    return m_instance;
}
