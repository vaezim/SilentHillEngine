#pragma once
#ifndef DEFS_H
#define DEFS_H


namespace SHengine {

enum ErrorCode : int {
    SUCCESS = 0,
    GLFW_INITIALIZE_FAIL,
    GLAD_INITIALIZE_FAIL,
    GLFW_WINDOW_CREATE_FAIL,
};

} // namespace SHengine

#endif // DEFS_H