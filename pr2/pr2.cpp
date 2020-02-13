#include<glut.h>
void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(0.5,0.5);
	glEnd();
	glFlush();
}
int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutCreateWindow("SIMPLE");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}