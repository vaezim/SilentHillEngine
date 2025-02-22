# Add source files
file(
    GLOB SH_ENGINE_SRC
    "./glad/*.c"
    "./glad/*.cpp"
)

# SHengine static library (../output/lib/libSHengine.a)
add_library(${SH_ENGINE_LIB} ${SH_ENGINE_SRC})

# Main executable (../output/exe/SHengine_main)
add_executable(${SH_ENGINE_MAIN} main.cpp)

# Link with libSHengine and third-party libraries
target_link_libraries(
    ${SH_ENGINE_MAIN}
    ${SH_ENGINE_LIB}
    dl
    GL
    Xi
    X11
    glfw
    Xrandr
    pthread
)