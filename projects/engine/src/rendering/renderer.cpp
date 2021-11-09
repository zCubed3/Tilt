#include <rendering/renderer.hpp>

#include <stdexcept>

Renderer::Renderer(RI_Impl *ri) {
    if (ri == nullptr)
        throw std::runtime_error("RI_Impl was null!");

    this->ri = ri;
}

//
// Start
//
#include <GLFW/glfw3.h>

void Renderer::Start() {
    ri->setup_Initial();
    ri->setup_BeforeWindowCreate();

    // TODO: Allow user to change window parameters in config
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

    window = glfwCreateWindow(800, 600, "Tilt", nullptr, nullptr);

    ri->setup_AfterWindowCreate(window);
}

void Renderer::Present() {
    ri->draw_Clear();
    ri->draw_Present(window);
}