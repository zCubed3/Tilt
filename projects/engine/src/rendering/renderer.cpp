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
    ri->imgui_Setup(window);
}

//
// Rendering
//
void Renderer::BeginRender() {
    ri->draw_Clear();
}

void Renderer::EndRender() {

}

//
// ImGui rendering
//
void Renderer::BeginImGui() {
    ri->imgui_Begin();
}

void Renderer::EndImGui() {
    ri->imgui_End();
}

void Renderer::Present() {
    ri->draw_Present(window);
}