#include <rendering/opengl/ri_opengl4.hpp>

#include <stdexcept>

//
// Metadata
//
const char *RI_OpenGL4::get_ApiName() {
    return "OpenGL 4";
}

const char *RI_OpenGL4::get_Signature() {
    return "gl4";
}

//
// Setup
//
#include <GL/glew.h>
#include <GLFW/glfw3.h>

void RI_OpenGL4::setup_Initial() {
    glewExperimental = true;
    if (!glfwInit())
        throw std::runtime_error("glfwInit() failed!");
}

void RI_OpenGL4::setup_BeforeWindowCreate() {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);

    // We ignore the compat profile because it screws with RenderDoc
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);
}

void RI_OpenGL4::setup_AfterWindowCreate(GLFWwindow *window) {
    glfwMakeContextCurrent(window);
}

//
// Drawing
//
void RI_OpenGL4::draw_Clear() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void RI_OpenGL4::draw_Present(GLFWwindow *window) {
    glfwSwapBuffers(window);
}

//
// Features
//
void RI_OpenGL4::feature_SetCullMode(CullMode mode) {
    switch (mode) {
        case CullMode::None:
            glDisable(GL_CULL_FACE);
            break;

        case CullMode::Front:
            glEnable(GL_CULL_FACE);
            glCullFace(GL_FRONT);
            break;

        case CullMode::Back:
            glEnable(GL_CULL_FACE);
            glCullFace(GL_BACK);
            break;
    }
}

void RI_OpenGL4::feature_SetDepthMode(DepthMode mode) {
    switch (mode) {
        case DepthMode::None:
            glDisable(GL_DEPTH_TEST);
            break;

        case DepthMode::Greater:
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(GL_GREATER);
            break;

        case DepthMode::Less:
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(GL_LESS);
            break;
    }
}