//
// Created by cjshore12 on 12/1/17.
//


#include <fstream>
#include "MainSimulation.h"
#include <iostream>

MainSimulation::MainSimulation() : _screenWidth(1280), _screenHeight(720)
{

}

MainSimulation::~MainSimulation()
{

}

void MainSimulation::init()
{
    _isRunning = true;

    _window = SDL_CreateWindow("Simulation", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                               _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);

    SDL_GLContext glContext = SDL_GL_CreateContext(_window);

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    if(glewInit() != GLEW_OK) {
        std::cerr << "GLEW FAILED TO INITIALIZE" << std::endl;
    }

    glClearColor(0.2f, 0.3f, 0.75f, 1.0f);
    glViewport(0, 0, _screenWidth, _screenHeight);

    initShaders();

    Color red(255, 0, 0, 255);
    _sprite.init(-1.0f, -1.0f, 1.0f, 1.0f, red);
}



void MainSimulation::initShaders()
{
    _staticProgram.compileShaders("Shaders/staticShader.vert", "Shaders/staticShader.frag");
    _staticProgram.bindAttribute("vertexPosition");
    _staticProgram.bindAttribute("vertexColor");
    _staticProgram.linkShaders();
}

void MainSimulation::input()
{
    SDL_Event event;
    while(SDL_PollEvent(&event)) {
        if(event.type == SDL_QUIT) {
            _isRunning = false;
        }
    }
}

void MainSimulation::update()
{

}
void MainSimulation::render()
{
    glClear(GL_COLOR_BUFFER_BIT);

    _staticProgram.start();

    _sprite.draw();

    _staticProgram.stop();

    SDL_GL_SwapWindow(_window);
}

void MainSimulation::simulationLoop()
{
    while(_isRunning) {
        input();
        update();
        render();
    }
}

void MainSimulation::cleanUp()
{

}

void MainSimulation::run()
{
    init();
    simulationLoop();
    cleanUp();
}