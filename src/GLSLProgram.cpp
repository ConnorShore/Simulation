//
// Created by cjshore12 on 12/7/17.
//

#include "GLSLProgram.h"
#include <iostream>
#include <fstream>
#include <vector>

GLSLProgram::GLSLProgram() : _programID(0), _vertexShaderID(0), _fragmentShaderID(0), _attribCount(0)
{

}

GLSLProgram::~GLSLProgram()
{

}

void GLSLProgram::compileShaders(const std::string &vertexShader, const std::string &fragShader)
{
    _vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
    if(_vertexShaderID == 0) {
        printf("FAILED TO CREATE VERTEX SHADER\n");
    }

    _fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    if(_vertexShaderID == 0) {
        printf("FAILED TO CREATE FRAGMENT SHADER\n");
    }

    compileShader(vertexShader, _vertexShaderID);
    compileShader(fragShader, _fragmentShaderID);
}

void GLSLProgram::linkShaders()
{
    _programID = glCreateProgram();

//Attach our shaders to our _programID
    glAttachShader(_programID, _vertexShaderID);
    glAttachShader(_programID, _fragmentShaderID);

//Link our _programID
    glLinkProgram(_programID);

//Note the different functions here: glGetProgram* instead of glGetShader*.
    GLint isLinked = 0;
    glGetProgramiv(_programID, GL_LINK_STATUS, (int *)&isLinked);
    if(isLinked == GL_FALSE)
    {
        GLint maxLength = 0;
        glGetProgramiv(_programID, GL_INFO_LOG_LENGTH, &maxLength);

        //The maxLength includes the NULL character
        std::vector<GLchar> infoLog(maxLength);
        glGetProgramInfoLog(_programID, maxLength, &maxLength, &infoLog[0]);

        std::printf("%s\n", &(infoLog[0]));
        std::cerr << "SHADERS FAILED TO LINK" << std::endl;

        //We don't need the _programID anymore.
        glDeleteProgram(_programID);
        //Don't leak shaders either.
        glDeleteShader(_vertexShaderID);
        glDeleteShader(_fragmentShaderID);

        //Use the infoLog as you see fit.

        //In this simple _programID, we'll just leave
        return;
    }

//Always detach shaders after a successful link.
    glDetachShader(_programID, _vertexShaderID);
    glDetachShader(_programID, _fragmentShaderID);
}

void GLSLProgram::compileShader(const std::string &filePath, GLuint& shaderID)
{
    std::ifstream shaderFile(filePath);
    if(shaderFile.fail()) {
        perror(filePath.c_str());
        std::cerr << "Failed to open: " << filePath << std::endl;
    }

    std::string fileContents = "";
    std::string line;
    while(std::getline(shaderFile, line)) {
        fileContents += line + "\n";
    }

    shaderFile.close();

    const char* contentsPtr = fileContents.c_str();
    glShaderSource(shaderID, 1, &contentsPtr, nullptr);
    glCompileShader(shaderID);

    GLint success = 0;
    glGetShaderiv(shaderID, GL_COMPILE_STATUS, &success);
    if(success == GL_FALSE) {
        GLint maxLength = 0;
        glGetShaderiv(shaderID, GL_INFO_LOG_LENGTH, &maxLength);

        // The maxLength includes the NULL character
        std::vector<GLchar> errorLog(maxLength);
        glGetShaderInfoLog(shaderID, maxLength, &maxLength, &errorLog[0]);

        // Provide the infolog in whatever manor you deem best.
        // Exit with failure.
        glDeleteShader(shaderID); // Don't leak the shader.

        std::printf("%s\n", &(errorLog[0]));
        std::cerr << "SHADER " << filePath << " FAILED TO COMPILE" << std::endl;

        return;
    }
}

void GLSLProgram::bindAttribute(const std::string& attribName)
{
    glBindAttribLocation(_programID, _attribCount++, attribName.c_str());

}

void GLSLProgram::start()
{
    glUseProgram(_programID);
    for(int i = 0; i < _attribCount; i++) {
        glEnableVertexAttribArray(i);
    }
}

void GLSLProgram::stop()
{
    glUseProgram(0);

    for(int i = 0; i < _attribCount; i++) {
        glDisableVertexAttribArray(i);
    }
}
