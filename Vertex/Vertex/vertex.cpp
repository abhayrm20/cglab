#include <glut.h>
void display(void){

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);

	glVertex2f(0,0);
	glVertex2f(-0.1,0.2);

	glVertex2f(0,0.4);

	glVertex2f(0.4,0.4);

	glVertex2f(0.5,0.2);

	glVertex2f(0.4,0);

	glVertex2f(0,0);

	glEnd();
	glFlush();
}
int main (int argc, char **argv){
	glutInit(&argc,argv);
	glutCreateWindow("Simple");
	glutDisplayFunc(display);
	glutMainLoop();
}