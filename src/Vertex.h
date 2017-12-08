#ifndef SIMULATION_VERTEX_H
#define SIMULATION_VERTEX_H

#include <GL/glew.h>
#include <glm/glm.hpp>

struct Position
{
    float x, y;
};

struct Color
{
    GLuint r, g, b, a;

    Color()
    {
        r = g = b = a = 255;
    }

    Color(GLuint red, GLuint green, GLuint blue, GLuint alpha)
    {
        r = red;
        g = green;
        b = blue;
        a = alpha;
    }
};

struct Vertex
{
    Position position;
    Color color;

    void setPosition(float x, float y)
    {
        position.x = x;
        position.y = y;
    }

    void setColor(float r, float g, float b, float a)
    {
        color.r = r;
        color.g = g;
        color.b = b;
        color.a = a;
    }
};

#endif //SIMULATION_VERTEX_H