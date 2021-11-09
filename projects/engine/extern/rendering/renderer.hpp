#ifndef TILT_RENDERER_HPP
#define TILT_RENDERER_HPP

#include "render_interface.hpp"

class Renderer {
public:
    Renderer(RI_Impl* ri);

    // RenderInterface
    RI_Impl* ri;
};

#endif
