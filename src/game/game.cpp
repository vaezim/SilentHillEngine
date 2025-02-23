#include "SHengine/game.h"
#include "SHengine/callbacks.h"


namespace SHengine {

ErrorCode Game::CreateWindow()
{
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW." << std::endl;
        return GLFW_INITIALIZE_FAIL;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    m_window = glfwCreateWindow(800, 600, "Silent Hill Engine", NULL, NULL);
    if (!m_window) {
        std::cerr << "Failed to create GLFW window." << std::endl;
        glfwTerminate();
        return GLFW_WINDOW_CREATE_FAIL;
    }

    glfwMakeContextCurrent(m_window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        return GLAD_INITIALIZE_FAIL;
    }

    glEnable(GL_DEPTH_TEST);

    return SUCCESS;
}

void Game::SetupCallbackFunctions()
{
    glfwSetKeyCallback(m_window, CallBacks::KeyCallBack);
    glfwSetFramebufferSizeCallback(m_window, CallBacks::FramebufferSizeCallback);
}

void Game::Run()
{
    while (!glfwWindowShouldClose(m_window)) {

        // Set background to black
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glfwSwapBuffers(m_window);
        glfwPollEvents();
    }
    glfwTerminate();
}

} // namespace SHengine