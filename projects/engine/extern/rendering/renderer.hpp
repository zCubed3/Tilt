#ifndef TILT_RENDERER_HPP
#define TILT_RENDERER_HPP

#include "render_interface.hpp"

class Renderer {
public:
    Renderer(RI_Impl* ri);

    void Start(); // Initializes the API, creates a window, etc...

    //
    // Rendering
    //

    // Clears the image buffer and sets up the scene to be rendered
    void BeginRender();

    // Finalizes the render and cleans up garbage
    void EndRender();

    // Begins a new ImGui frame
    void BeginImGui();

    // Ends the ImGui frame
    void EndImGui();

    void Present(); // Draws the final image

    //
    // Members
    //
    RI_Impl* ri;     // Interface we use to talk to the graphics API
    GLFWwindow* window;
};

#endif
