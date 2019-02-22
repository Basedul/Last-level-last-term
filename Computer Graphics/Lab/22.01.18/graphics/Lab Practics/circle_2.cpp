#include<stdio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
	int gd=DETECT, gm; int i;
	initgraph (&gd,&gm,"c:\tc\\bgi");

	for(i=0;i<200;i+=5)
	{
		setcolor(i);
		//coordinates of center from x axis, y axis, radius
		circle(100,100,30+i);
		delay(300);
		//cleardevice(); //try with and without cleardevice();
	}

	getch();

	closegraph();
}
