#ifndef REQUEST_H
#define REQUEST_H

enum class request_type { HELP, PRINT, PREVIEW };

class request {
public:
    virtual request_type kind() = 0;
};

#endif /* REQUEST_H */
