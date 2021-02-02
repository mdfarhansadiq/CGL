#include<windows.h>
#include <GL/glut.h>

void display()
{
  
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700); ///ConsoleSize
    glutInitWindowPosition(100,70); ///FunctionParameter(leftside, topside)
    glutCreateWindow("Computer Graphics Lab!");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
