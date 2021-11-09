#ifndef TILT_RENDER_INTERFACE_HPP
#define TILT_RENDER_INTERFACE_HPP

// A set of common functions that a renderer needs to expose and implement
// It's defined as a class and is required to be set up before a renderer can function
// We use this method instead of having a bunch of renderers

//
// Forward defs
//
class GLFWwindow;

// RenderInterface, aka RI
// The base version is called RI_Impl
class RI_Impl {
public:
    //
    // Meta stuff, mainly for debugging and displaying info
    //
    virtual const char* get_ApiName() = 0; // Name we use for displaying info
    virtual const char* get_Signature() = 0; // Name we use for identification (for configs!)

    //
    // Setup phase
    //
    virtual void setup_Initial() = 0; // Used for glewInit and other things
    virtual void setup_BeforeWindowCreate() = 0; // Used for setting up glfw window flags
    virtual void setup_AfterWindowCreate(GLFWwindow* window) = 0; // Used for setting up OpenGL contexts

    //
    // Features
    //

    // Face culling
    enum class CullMode {
        None, Back, Front
    };

    virtual void feature_SetCullMode(CullMode mode) = 0;

    // Depth testing
    enum class DepthMode {
        None, Less, Greater
    };

    virtual void feature_SetDepthMode(DepthMode mode) = 0;
};

#endif
