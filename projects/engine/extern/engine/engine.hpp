#ifndef TILT_ENGINE_HPP
#define TILT_ENGINE_HPP

// Only one engine instance can exist btw!
class Engine {
public:
    static Engine *instance;
    static void Initialize();

private:
    Engine(); // We don't want to let people manually create multiple engines
};

#endif
