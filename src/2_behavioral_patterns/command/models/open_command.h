#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "command.h"

class application;

class open_command : public command {
public:
    open_command(application *);

    virtual void execute();
    char *response() const { return m_response; }
protected:
    virtual const char *AskUser();

private:
    application *m_application;
    char *m_response;
};

#endif // OPEN_COMMAND_H
