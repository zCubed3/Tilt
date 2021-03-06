#ifndef TILT_OPENGL_INTERFACE_HPP
#define TILT_OPENGL_INTERFACE_HPP

#include "../render_interface.hpp"

class RI_OpenGL4 : public RI_Impl {
public:
    //
    // Metadata
    //
    const char * get_ApiName() override;
    const char * get_Signature() override;

    //
    // Setup
    //
    void setup_Initial() override;
    void setup_BeforeWindowCreate() override;
    void setup_AfterWindowCreate(GLFWwindow* window) override;

    // Drawing
    void draw_Clear() override;
    void draw_Present(GLFWwindow *window) override;

    //
    // ImGui
    //
    void imgui_Setup(GLFWwindow *window) override;
    void imgui_Begin() override;
    void imgui_End() override;

    //
    // Features
    //
    void feature_SetCullMode(CullMode mode) override;
    void feature_SetDepthMode(DepthMode mode) override;
};

#endif
