#include <engine/engine.hpp>

#include <stdexcept>

//
// Statics
//
Engine *Engine::instance = nullptr;

//
// Engine initializer, this is the entire backbone of the engine setup
//
void Engine::Initialize() {
    if (Engine::instance)
        throw std::runtime_error("An engine instance already exists!");

    Engine::instance = new Engine();
}

//
// TODO: Actually give this constructor purpose
//
Engine::Engine() = default;