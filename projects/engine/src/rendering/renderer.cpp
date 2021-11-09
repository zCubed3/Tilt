#include <rendering/renderer.hpp>

#include <stdexcept>

Renderer::Renderer(RI_Impl *ri) {
    if (ri == nullptr)
        throw std::runtime_error("RI_Impl was null!");

    this->ri = ri;
}