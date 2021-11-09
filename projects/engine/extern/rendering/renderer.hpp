#ifndef TILT_RENDERER_HPP
#define TILT_RENDERER_HPP

#include "render_interface.hpp"

class Renderer {
public:
    Renderer(RI_Impl* ri);

    void Start(); // Initializes the API, creates a window, etc...

    void Present(); // Draws the final image

    //
    // Members
    //
    RI_Impl* ri;     // Interface we use to talk to the graphics API
    GLFWwindow* window;
};

#endif
