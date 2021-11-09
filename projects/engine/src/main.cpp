#include <rendering/opengl/ri_opengl4.hpp>
#include <rendering/renderer.hpp>

#include <tilt.hpp>

#include <iostream>

int main(int argc, char** argv) {
    std::cout << "BUILD INFO: " <<
        "\n\tCompiler: " << COMPILER_ID <<
        "\n\tCompiler Version: " << COMPILER_VERSION_MAJOR << "." << COMPILER_VERSION_MINOR <<
        "\n\tPlatform: " << PLATFORM_ID << "\n";
}