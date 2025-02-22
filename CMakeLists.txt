cmake_minimum_required(VERSION 3.0)
project(SHengine)

# SHengine lib & executable
set(SH_ENGINE_LIB SHengine)
set(SH_ENGINE_MAIN SHengine_main)

# Executables at ./output/exe
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/output/exe)

# Libraries at ./output/lib
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/output/lib)

# CXX minimum standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GCC flags
set(CMAKE_CXX_FLAGS 
    "-Wall -Werror -Wextra -Wshadow -Wnon-virtual-dtor -Wunused -pedantic"
)

# Include directories
include_directories(
    PUBLIC ${CMAKE_SOURCE_DIR}/src/include
)

# Link directories
link_directories(
    PUBLIC ${CMAKE_SOURCE_DIR}/output/lib
)

# Source files
add_subdirectory(src)