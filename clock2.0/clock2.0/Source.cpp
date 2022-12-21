#include<GL/glut.h>
#include<iostream>
#include <cmath>
#include<ctime>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	for (int i = 0; i < 12; ++i)
	{
		float x = sin(2 * M_PI / 12 * i);
		float y = cos(2 * M_PI / 12 * i);
			gl Vertex2f( 400 * x,  400 * y);
			gl Vertex2f(380 * x, 380 * y);

	}
	time_t t = time(0);
	tm* lt = localtime(&t);
	int h = lt->tm_hour;
	int m = lt->tm_min;
	int s = lt->tm_sec;
	 x = sin(2 * M_PI * m / 60);
	 y = cos(2 * M_PI * m / 60);
	gl Vertex2f(0, 0);
	gl Vertex2f(350 * x, 350 * y);
	glEnd();

	glutSwapBuffers();
}
void timer(int = 0)
{
	display();
	glutTimerFunc(10, timer, 0);

}
int main(int argc, char** argv)
{

 }

