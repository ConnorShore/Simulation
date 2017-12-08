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

void Sprite::init(int x, int y, int width, int height, Color& color)
{
    if(_vboID == 0)
        glGenBuffers(1, &_vboID);

    bottomLeft.setPosition(x, y);
    bottomLeft.setColor(color.r, color.g, color.b, color.a);

    bottomRight.setPosition(x + width, y);
    bottomRight.setColor(color.r, color.g, color.b, color.a);

    topLeft.setPosition(x, y + height);
    topLeft.setColor(color.r, color.g, color.b, color.a);

    topRight.setPosition(x + width, y + height);
    topRight.setColor(color.r, color.g, color.b, color.a);

    float vertexData[36];

    //First triangle
    vertexData[0] = x + width;
    vertexData[1] = y + height;
    vertexData[2] = color.r / 255.0f;
    vertexData[3] = color.g / 255.0f;
    vertexData[4] = color.b / 255.0f;
    vertexData[5] = color.a / 255.0f;

    vertexData[6] = x;
    vertexData[7] = y + height;
    vertexData[8] = color.r / 255.0f;
    vertexData[9] = color.g / 255.0f;
    vertexData[10] = color.b / 255.0f;
    vertexData[11] = color.a / 255.0f;

    vertexData[12] = x;
    vertexData[13] = y;
    vertexData[14] = color.r / 255.0f;
    vertexData[15] = color.g / 255.0f;
    vertexData[16] = color.b / 255.0f;
    vertexData[17] = color.a / 255.0f;

    //Second triangle
    vertexData[18] = x;
    vertexData[19] = y;
    vertexData[20] = color.r / 255.0f;
    vertexData[21] = color.g / 255.0f;
    vertexData[22] = color.b / 255.0f;
    vertexData[23] = color.a / 255.0f;

    vertexData[24] = x + width;
    vertexData[25] = y;
    vertexData[26] = color.r / 255.0f;
    vertexData[27] = color.g / 255.0f;
    vertexData[28] = color.b / 255.0f;
    vertexData[29] = color.a / 255.0f;

    vertexData[30] = x + width;
    vertexData[31] = y + height;
    vertexData[32] = color.r / 255.0f;
    vertexData[33] = color.g / 255.0f;
    vertexData[34] = color.b / 255.0f;
    vertexData[35] = color.a / 255.0f;

    glBindBuffer(GL_ARRAY_BUFFER, _vboID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertexData), vertexData, GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Sprite::draw()
{
    glBindBuffer(GL_ARRAY_BUFFER, _vboID);

    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*) 0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*) (2 * sizeof(float)));
    glEnableVertexAttribArray(1);

    glDrawArrays(GL_TRIANGLES, 0, 12);

    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
}