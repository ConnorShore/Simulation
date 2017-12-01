//
// Created by cjshore12 on 12/1/17.
//

#include "MainSimulation.h"
#include <GL/glew.h>

SDL_GLContext mainContext;

void MainSimulation::init()
{
    isRunning = true;

    _window = SDL_CreateWindow("Simple Simulation", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                               _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);

    mainContext = SDL_GL_CreateContext(_window);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    SDL_GL_SetSwapInterval(1);

    glewExperimental = GL_TRUE;
    glewInit();

    glClearColor(0.2f, 0.5f, 0.85f, 1.0f);
    glViewport(0.0f, 0.0f, 1.0f, 1.0f);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void MainSimulation::input()
{
    SDL_Event event;
    while(SDL_PollEvent(&event)) {
        if(event.type == SDL_QUIT)
            isRunning = false;
        if(event.type == SDL_KEYDOWN) {
            switch(event.key.keysym.sym) {
                case SDLK_ESCAPE:
                    isRunning = false;
                    break;
            }
        }
    }
}

void MainSimulation::update()
{

}

void MainSimulation::render()
{
    glClear(GL_COLOR_BUFFER_BIT);


    SDL_GL_SwapWindow(_window);
}

void MainSimulation::mainLoop()
{
    while(isRunning) {
        input();
        update();
        render();
    }
}


void MainSimulation::cleanUp()
{
    SDL_GL_DeleteContext(mainContext);
    SDL_DestroyWindow(_window);
    SDL_Quit();
}

void MainSimulation::run()
{
    init();
    mainLoop();
    cleanUp();
}