//
// Created by cjshore12 on 12/6/17.
//

#ifndef SIMULATION_SPRITE_H
#define SIMULATION_SPRITE_H

#include <glm/glm.hpp>
#include <GL/glew.h>

class Sprite
{
public:
    Sprite();
    ~Sprite();

    void init(int x, int y, int width, int height);

    void draw();

private:
    glm::vec4 _destRect;


    GLuint _vboID = 0;
};


#endif //SIMULATION_SPRITE_H
