#ifndef HELP_HANDLER_H
#define HELP_HANDLER_H

typedef int topic;
const topic NO_HELP_TOPIC = -1;

class help_handler {
public:
    help_handler(help_handler * = 0, topic = NO_HELP_TOPIC);
    virtual bool has_help();
    virtual void set_handler(help_handler *, topic);
    virtual void handle_help();

private:
    help_handler *m_successor;
    topic m_topic;
};

#endif /* HELP_HANDLER_H */
