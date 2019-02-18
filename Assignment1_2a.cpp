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
    glClear(GL_COLOR_BUFFER_BIT); //clearing color buffer
    glColor3f(0.0,255.0,255.0);  //choosing a color
    glLineWidth(30);  //specifying line width
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//glPolygonMode controls the interpretation of polygons for rasterization. Face describes which polygon mode applies to. 

    glBegin(GL_TRIANGLE_STRIP);  // creating triangles after enabling GL_TRIANGLE_STRIP
        //glVertex2i(50,250);
        glVertex2i(50,150);
        glVertex2i(250,150);
        glVertex2i(150,250);
        glVertex2i(300,200);
        glVertex2i(350,50);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Assignment 1 Question 2");
    init2D(0.0f, 0.0f, 0.0f);
    glutDisplayFunc(rectangle);
    glutMainLoop();
}

