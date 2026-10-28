#include<graphics.h>
#include<conio.h>
int main()
{

	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	rectangle(200,180,370,280);
	rectangle(120,180,200,280);
	line(120,180,160,100);
	line(160,100,200,180);
	line(160,100,330,100);
	line(330,100,370,180);
	rectangle(180,220,140,280);
	setfillstyle(1,9);
	floodfill(125,182,WHITE);
	setfillstyle(1,8);
	floodfill(160,127,WHITE);
	setfillstyle(1,7);
	floodfill(200,130,WHITE);
	setfillstyle(1,6);
	floodfill(250,200,WHITE);
	setfillstyle(1,5);
	floodfill(150,240,WHITE);
	getch();

	closegraph();

}

