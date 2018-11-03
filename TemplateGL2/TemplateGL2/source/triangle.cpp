#include <iostream>
#include <cstdlib>

#include <GL/glew.h>
#include <GL/freeglut.h>

void display(){
    glClearColor(1.0, 0.0, 0.0, 0.1);
    glClear(GL_COLOR_BUFFER_BIT);

    glutSwapBuffers();
}

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitContextVersion(2,0);
    glutInitDisplayMode(GLUT_RGBA | GLUT_ALPHA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(512, 512);
    glutCreateWindow("OpenGL");

    GLenum glew_status = glewInit();
    if(glew_status != GLEW_OK){
        std::cout << "Error GLEW" << std::endl;
        exit(EXIT_FAILURE);
    }

    if(!GLEW_VERSION_2_0){
        std::cout << "No hay version 2.0" << std::endl;
        exit(EXIT_FAILURE);
    }

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}

