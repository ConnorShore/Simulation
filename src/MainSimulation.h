//
// Created by cjshore12 on 12/1/17.
//

#ifndef SIMULATION_MAINSIMULATION_H
#define SIMULATION_MAINSIMULATION_H

#include <SDL.h>

class MainSimulation {
public:
    MainSimulation(int screenWidth, int screenHeight) : _screenWidth(screenWidth), _screenHeight(screenHeight) {}

    void run();

private:
    SDL_Window* _window;
    int _screenWidth, _screenHeight;
    bool isRunning;

    void init();
    void input();
    void update();
    void render();
    void mainLoop();
    void cleanUp();
};


#endif //SIMULATION_MAINSIMULATION_H
