//
// Created by cjshore12 on 12/6/17.
//

#include "Sprite.h"

Sprite::Sprite()
{

}

Sprite::~Sprite()
{
    if(_vboID != 0)
        glDeleteBuffers(1, &_vboID);
}

void Sprite::init(int x, int y, int width, int height)
{
    _destRect = glm::vec4(x, y, width, height);


    if(_vboID == 0)
        glGenBuffers(1, &_vboID);

    float vertexData[12];

    //First triangle
    vertexData[0] = x + width;
    vertexData[1] = y + height;

    vertexData[2] = x;
    vertexData[3] = y + height;

    vertexData[4] = x;
    vertexData[5] = y;

    //Second triangle
    vertexData[6] = x;
    vertexData[7] = y;

    vertexData[8] = x + width;
    vertexData[9] = y;

    vertexData[10] = x + width;
    vertexData[11] = y + height;

    glBindBuffer(GL_ARRAY_BUFFER, _vboID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertexData), vertexData, GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Sprite::draw()
{
    glBindBuffer(GL_ARRAY_BUFFER, _vboID);

    glEnableVertexAttribArray(0);

    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, (void*) 0);
    glDrawArrays(GL_TRIANGLES, 0, 12);

    glDisableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
}