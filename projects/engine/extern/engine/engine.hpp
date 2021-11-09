#ifndef TILT_ENGINE_HPP
#define TILT_ENGINE_HPP

class Renderer;

// Only one engine instance can exist btw!
class Engine {
public:
    static Engine *instance;
    static void Create();

    //
    // The instance doesn't populate things like the renderer automatically, we have to do that ourselves!
    //

    Renderer* renderer;

    //
    // Gets the ball rolling, verifies everything is setup, calls Start on components, then begins the engine loop
    //
    void Start();

private:
    Engine(); // We don't want to let people manually create multiple engines
};

#endif
