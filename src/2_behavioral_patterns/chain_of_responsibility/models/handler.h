#ifndef HANDLER_H
#define HANDLER_H

class request;
class help_request;
class print_request;

class handler {
public:
    void handle_request(request *r);

private:
    void handle_help(help_request *r);
    void handle_print(print_request *r);
};

#endif /* HANDLER_H */
