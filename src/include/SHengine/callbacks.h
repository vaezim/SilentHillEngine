#pragma once
#ifndef CALLBACKS_H
#define CALLBACKS_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>


namespace SHengine {

namespace CallBacks {

// Window resize callback
void FramebufferSizeCallback(GLFWwindow*, int width, int height);

// Key action callback
void KeyCallBack(GLFWwindow *window, int key, int, int action, int);

} // namespace CallBacks

} // namespace SHengine

#endif // CALLBACKS_H