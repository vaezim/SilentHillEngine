#! /usr/bin/sh


####################
# Variables
####################
PROJECT_ROOT_DIR=$(pwd)     # Project root directory
BUILD_TYPE=Release          # Build type (Release | Debug)


####################
# Help message
####################
usage() {
    echo "Usage: $0 [OPTIONS]"
    echo "Options:"
    echo " -h, --help       Display this help message"
    echo " -d, --debug      Change build type to Debug"
}


####################
# Handle flags
####################
handle_flags() {
    while [ $# -gt 0 ]; do
        case $1 in
        -h | --help)
            usage
            exit 0
            ;;
        -d | --debug)
            BUILD_TYPE=Debug
            ;;
        *)
            echo "Invalid option: $1" >&2
            usage
            exit 1
            ;;
        esac
        shift
    done
}
handle_flags "$@"


####################
# CMake
####################
cmake                                       \
    -DCMAKE_BUILD_TYPE=${BUILD_TYPE}        \
    -S $PROJECT_ROOT_DIR                    \
    -B ${PROJECT_ROOT_DIR}/output/build


####################
# Make
####################
make --no-print-directory -C ${PROJECT_ROOT_DIR}/output/build -j4
