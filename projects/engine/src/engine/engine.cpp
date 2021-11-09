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

#include <imgui/imgui.h>

void Engine::Start() {
    if (!renderer)
        throw std::runtime_error("No valid renderer was given to the engine!");


    ImGui::CreateContext();
    renderer->Start();

    ImGuiStyle &style = ImGui::GetStyle();
    ImGui::StyleColorsDark(&style);

    ImGuiIO &imguiIO = ImGui::GetIO();
    imguiIO.ConfigFlags |= ImGuiConfigFlags_DockingEnable;

    while (!glfwWindowShouldClose(renderer->window)) {
        glfwPollEvents();

        renderer->BeginRender();

        renderer->EndRender();

        renderer->BeginImGui();

        ImGui::Begin("Test");

        ImGui::End();

        renderer->EndImGui();

        renderer->Present();
    }
}

//
// TODO: Actually give this constructor purpose?
//
Engine::Engine() = default;