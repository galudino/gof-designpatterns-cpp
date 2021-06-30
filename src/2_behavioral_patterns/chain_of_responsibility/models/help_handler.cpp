#include "help_handler.h"

help_handler::help_handler(help_handler *h, topic t) : m_successor(h), m_topic(t) {}

bool help_handler::has_help() { return m_topic != NO_HELP_TOPIC; }

void help_handler::set_handler(help_handler *theHandler, topic theTopic) {
    m_successor = theHandler;
    m_topic = theTopic;
}

void help_handler::handle_help() {
    if (m_successor != 0) {
        m_successor->handle_help();
    }
}
