#include<glut.h>
void mydisplay0() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2f(0.5,0.5);
	glVertex2f(0.0,0.5);
	glVertex2f(0.0,0.5);
	glVertex2f(0.5,0.0);
	glVertex2f(0.5,0.0);
	glVertex2f(0.5,0.5);
	glVertex2f(0.0,0.0);
	glVertex2f(0.5,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,0.5);
	glVertex2f(0.5,0.5);
	glVertex2f(0.0,0.0);
	glEnd();
	glFlush();
}
void mydisplay1() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2f(0.5,0.5);
	glVertex2f(0.0,0.5);
	glVertex2f(0.0,0.5);
	glVertex2f(0.5,0.0);
	glVertex2f(0.5,0.0);
	glVertex2f(0.5,0.5);
	glVertex2f(0.0,0.0);
	glVertex2f(0.5,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,0.5);
	glVertex2f(0.5,0.5);
	glVertex2f(0.0,0.0);
	glEnd();
	glFlush();
}
void mydisplay2() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	
	glVertex2f(0,0);
	glVertex2f(0,1);
	glVertex2f(1,0);
	glVertex2f(1,1);
	glVertex2f(0,0);
	glVertex2f(1,0);
	glVertex2f(1,0);
	glVertex2f(1,1);
	
	glVertex2f(1,0.1);
	glVertex2f(0,0.1);
	glVertex2f(1,0.2);
	glVertex2f(0,0.2);
	glVertex2f(1,0.3);
	glVertex2f(0,0.3);
	glVertex2f(1,0.4);
	glVertex2f(0,0.4);
	glVertex2f(1,0.5);
	glVertex2f(0,0.5);
	glVertex2f(1,0.6);
	glVertex2f(0,0.6);
	glVertex2f(1,0.7);
	glVertex2f(0,0.7);
	glVertex2f(1,0.8);
	glVertex2f(0,0.8);
	glVertex2f(1,0.9);
	glVertex2f(0,0.9);

	glVertex2f(0.1,0);
	glVertex2f(0.1,1);
	glVertex2f(0.2,0);
	glVertex2f(0.2,1);
	glVertex2f(0.3,0);
	glVertex2f(0.3,1);
	glVertex2f(0.4,0);
	glVertex2f(0.4,1);
	glVertex2f(0.5,0);
	glVertex2f(0.5,1);
	glVertex2f(0.6,0);
	glVertex2f(0.6,1);
	glVertex2f(0.7,0);
	glVertex2f(0.7,1);
	glVertex2f(0.8,0);
	glVertex2f(0.8,1);
	glVertex2f(0.9,0);
	glVertex2f(0.9,1);
	glEnd();
	glFlush();
}

void mydisplay3() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2f(0.5,0.5);
	glVertex2f(0.75,0.25);
	glVertex2f(0.75,0.25);
	glVertex2f(0.5,0.0);
	glVertex2f(0.5,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(-0.25,0.25);
	glVertex2f(-0.25,0.25);
	glVertex2f(0.0,0.5);
	glVertex2f(0.0,0.5);
	glVertex2f(0.5,0.5);
	glEnd();
	glFlush();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("SIMPLE");
	glutDisplayFunc(mydisplay2);
	glutMainLoop();
}