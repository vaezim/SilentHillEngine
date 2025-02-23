#include "SHengine/callbacks.h"


namespace SHengine {

namespace CallBacks {

void FramebufferSizeCallback(GLFWwindow*, int width, int height)
{
    glViewport(0, 0, width, height);
}

void KeyCallBack(GLFWwindow *window, int key, int, int action, int)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}

} // namespace CallBacks

} // namespace SHengine