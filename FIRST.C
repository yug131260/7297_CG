#include <graphics.h>
#include <conio.h>

int main()
{
	int gd=DETECT,gm;

	// Initialize graphics mode
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	// Draw a point
	putpixel(300,250,LIGHTBLUE);
	getch();
	closegraph();
	return 0;
}