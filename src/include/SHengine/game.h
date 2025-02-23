#pragma once
#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "SHengine/defs.h"


namespace SHengine {

class Game {
public:
    Game() = default;
    ~Game() = default;

    void Run();
    ErrorCode CreateWindow();
    void SetupCallbackFunctions();

private:
    GLFWwindow *m_window{ NULL };
};

} // namespace SHengine

#endif // GAME_H