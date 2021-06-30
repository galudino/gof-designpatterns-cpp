#ifndef WINDOW_SYSTEM_FACTORY_H
#define WINDOW_SYSTEM_FACTORY_H

class window_imp;

class window_system_factory {
public:
    static window_system_factory *instance();
    window_imp *make_window_imp() { return nullptr; }

protected:
    window_system_factory() = default;

private:
    static window_system_factory *m_instance;
};

#endif /* WINDOW_SYSTEM_FACTORY_H */
