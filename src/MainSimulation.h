//
// Created by cjshore12 on 12/1/17.
//

#ifndef SIMULATION_MAINSIMULATION_H
#define SIMULATION_MAINSIMULATION_H

#include <SDL.h>
#include <GL/glew.h>

#include "Sprite.h"
#include "GLSLProgram.h"


class MainSimulation {
public:
    MainSimulation();
    ~MainSimulation();

    void run();

private:
    bool _isRunning = false;
    int _screenWidth, _screenHeight;

    SDL_Window* _window;

    Sprite _sprite;
    GLSLProgram _staticProgram;

    void init();
    void initShaders();
    void input();
    void update();
    void render();
    void simulationLoop();
    void cleanUp();
};


#endif //SIMULATION_MAINSIMULATION_H
