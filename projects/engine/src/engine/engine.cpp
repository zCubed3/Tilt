#include <engine/engine.hpp>

#include <stdexcept>

//
// Statics
//
Engine *Engine::instance = nullptr;

//
// Engine create
//
void Engine::Create() {
    if (Engine::instance)
        throw std::runtime_error("An engine instance already exists!");

    Engine::instance = new Engine();
}

//
// Engine start
//
#include <rendering/renderer.hpp>
#include <GLFW/glfw3.h>

void Engine::Start() {
    if (!renderer)
        throw std::runtime_error("No valid renderer was given to the engine!");

    renderer->Start();

    while (true) {
        glfwPollEvents();

        renderer->Present();
    }
}

//
// TODO: Actually give this constructor purpose?
//
Engine::Engine() = default;