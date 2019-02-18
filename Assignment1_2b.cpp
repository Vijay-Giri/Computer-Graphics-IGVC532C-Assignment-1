#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<bits/stdc++.h>
void init2D(float r, float g, float b)
{
    glClearColor(r, g, b, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void rectangle()
{
    glClear(GL_COLOR_BUFFER_BIT);  //clearing color buffer
    glColor3f(0.0,255.0,255.0); //choosing color
    glLineWidth(30); //specifying line width

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);  //selection of mode and the face to which that mode needs to be applied to

    glBegin(GL_TRIANGLE_FAN);  //specifying vertices after GL_TRIANGLE_FAN 
        glVertex2i(150,150);
        glVertex2i(300,150);
        glVertex2i(200,250);
        glVertex2i(20,100);
        glVertex2i(220,50);
        glVertex2i(300,150);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Assignment 1 Question 2");
    init2D(0.0f, 0.0f, 0.0f);
    glutDisplayFunc(rectangle); // calling rectangle to display output
    glutMainLoop();
}
