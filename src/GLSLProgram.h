//
// Created by cjshore12 on 12/7/17.
//

#ifndef SIMULATION_GLSLPROGRAM_H
#define SIMULATION_GLSLPROGRAM_H

#include <string>
#include <GL/glew.h>

class GLSLProgram
{
public:
    GLSLProgram();
    ~GLSLProgram();

    void compileShaders(const std::string& vertexShader, const std::string& fragShader);
    void linkShaders();
    void bindAttribute(const std::string& attribName);

    void start();
    void stop();

private:
    void compileShader(const std::string& filePath, GLuint& shaderID);

    GLuint _programID;
    GLuint _vertexShaderID, _fragmentShaderID;
    int _attribCount;
};


#endif //SIMULATION_GLSLPROGRAM_H
