#ifndef WINDOW_SYSTEM_FACTORY_H
#define WINDOW_SYSTEM_FACTORY_H

class WindowImp;

class WindowSystemFactory {
public:
    static WindowSystemFactory *Instance();
    WindowImp *MakeWindowImp() { return nullptr; }

protected:
    WindowSystemFactory() = default;

private:
    static WindowSystemFactory *_instance;
};

#endif /* WINDOW_SYSTEM_FACTORY_H */
