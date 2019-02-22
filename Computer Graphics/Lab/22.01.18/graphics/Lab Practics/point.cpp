#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main(){
    int gd=DETECT,gm;
    int x,y;
    int points[] = { 320, 150, 420, 300, 250, 300, 320, 150};
    printf("Enter adress of point  x,y    :");
    scanf("%d%d",&x,&y);

    initgraph(&gd,&gm,"../bgi");
    putpixel(x,y,4);

    drawpoly(4, points);

    getch();
    closegraph();
}
