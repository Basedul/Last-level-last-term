#include <stdio.h>
#include <iostream>

#include <graphics.h>

using namespace std;

int main( )
{
initwindow( 640 , 480 , "Flag" );

  setcolor(MAGENTA);
  rectangle(5,5,10,300);
  setfillstyle(4,WHITE);
  floodfill(6,6,MAGENTA);



  setcolor(GREEN);
  rectangle(10,5,310,190);
  setfillstyle(1,GREEN);
  floodfill(50,50,GREEN);


  setcolor(RED);
  circle(180,100,70);
  setfillstyle(1,RED);
  floodfill(180,100,RED);



  system("pause");

}
