#include "help_handler.h"

void help_handler::set_handler(help_handler *handler, topic t) {
    m_successor = handler;
    m_topic = t;
}
