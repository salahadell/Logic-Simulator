cmake_minimum_required(VERSION 3.10)

# Set the project name
project(LogicSimulator)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectory
add_subdirectory(src)

# set install path variable with my required path
set(CMAKE_INSTALL_PREFIX" ${CMAKE_SOURCE_DIR}/build")
