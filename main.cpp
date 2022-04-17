#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(50.0);
    glColor3b(0,0,255)
    glBegin(GL_LINE);
    glVertex2i(70,40);
glVertex2i(375,40);

glVertex2i(375,40);
glVertex2i(375,270);

glVertex2i(375,270);
glVertex2i(70,270);

glVertex2i(70,270);
glVertex2i(70,40);
glEnd();

    glFlush ();
}

void myInit (void)
{
    glClearColor(0, 0, 0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (650,300);
    glutCreateWindow ("[20-42451-1] CD Lab Task - 1");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
