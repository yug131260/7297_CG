#include <graphics.h>
#include <conio.h>

int main()
{
	int gd=DETECT,gm;

	// Initialize graphics mode
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	// Draw a point
	setcolor(LIGHTBLUE);
	line(100,100,400,100);
	line(400,100,400,400);
	getch();
	closegraph();
	return 0;
}