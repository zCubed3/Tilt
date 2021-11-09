#include <engine/engine.hpp>

#include <rendering/renderer.hpp>
#include <rendering/opengl/ri_opengl4.hpp>

#include <tilt.hpp>

#include <iostream>

int main(int argc, char** argv) {
    //
    // Debug + build info
    //
    std::cout << "BUILD INFO: " <<
              "\n\tCompiler: " << COMPILER_ID <<
              "\n\tCompiler Version: " << COMPILER_VERSION_MAJOR << "." << COMPILER_VERSION_MINOR <<
              "\n\tOS: " << OS_ID << "\n";

    //
    // Init
    //
    Engine::Create();

    Engine::instance->renderer = new Renderer(new RI_OpenGL4());

    Engine::instance->Start();
}