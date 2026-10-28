#include<graphics.h>
#include<conio.h>
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

	line(250,250,300,200);
	line(300,200,350,250);
	line(250,250,300,350);
	line(300,350,350,250);
	line(270,375,300,350);
	line(300,350,330,375);
	line(300,200,300,350);
	line(270,375,330,375);
	line(300,200,300,350);
	arc(300,350,64,116,113);
	setfillstyle(1,11);
	floodfill(260,250,WHITE);
	setfillstyle(1,2);
	floodfill(290,215,WHITE);
	setfillstyle(1,3);
	floodfill(310,315,WHITE);
	setfillstyle(1,4);
	floodfill(310,310,WHITE);
	setfillstyle(1,5);
	floodfill(310,370,WHITE);

	getch();

	closegraph();

}