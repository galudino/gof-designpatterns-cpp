#ifndef HELP_HANDLER_H
#define HELP_HANDLER_H

enum class topic {
    NO_HELP_TOPIC,
    PRINT_TOPIC,
    PAPER_ORIENTATION_TOPIC,
    APPLICATION_TOPIC
};

class help_handler {
public:
    help_handler(help_handler *handler = nullptr, topic t = topic::NO_HELP_TOPIC) : m_successor(handler), m_topic(t) { }
    
    virtual bool has_help() const { return m_topic != topic::NO_HELP_TOPIC; }
    virtual void set_handler(help_handler *handler, topic t);
    
    virtual void handle_help() {
        if (m_successor) { m_successor->handle_help(); }
    }

private:
    help_handler *m_successor = nullptr;
    topic m_topic;
};

#endif /* HELP_HANDLER_H */
