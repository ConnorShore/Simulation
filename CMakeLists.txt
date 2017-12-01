cmake_minimum_required(VERSION 3.9)
project(Simulation)

set(CMAKE_CXX_STANDARD 11)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${OpenGL_INCLUDE_DIRS})
include_directories(${GLEW_INCLUDE_DIRS})

add_executable(Simulation src/main.cpp src/MainSimulation.cpp src/MainSimulation.h)

target_link_libraries(Simulation ${SDL2_LIBRARIES} ${GLEW_LIBRARIES} ${OPENGL_LIBRARIES})