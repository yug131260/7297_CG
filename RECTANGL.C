#include<graphics.h>
#include<conio.h>
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	setcolor(YELLOW);
	rectangle(100,200,400,390);
	rectangle(120,220,380,370);
	getch();
	closegraph();
	return 0;
}