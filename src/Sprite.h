//
// Created by cjshore12 on 12/6/17.
//

#ifndef SIMULATION_SPRITE_H
#define SIMULATION_SPRITE_H

#include <glm/glm.hpp>
#include <GL/glew.h>

#include "Vertex.h"

class Sprite
{
public:
    Sprite();
    ~Sprite();

    void init(int x, int y, int width, int height, Color& color);

    void draw();

private:
    Vertex bottomLeft, bottomRight, topLeft, topRight;
    GLuint _vboID;
};


#endif //SIMULATION_SPRITE_H
