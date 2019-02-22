
#include<stdio.h>
#include "graphics.h"



int main(void)

{

   int midx, midy, i;



   /* initialize the window size */

   initwindow(500, 500);



   midx = getmaxx() / 2;

   midy = getmaxy() / 2;



   /* loop through the fill patterns with 4 second delays */

   for (i=SOLID_FILL; i<USER_FILL; i++) {

      /* set the fill style */

      setfillstyle(i, getmaxcolor());



      /* draw the bar */

      bar(midx-50, midy-50, midx+50, midy+50);

      delay(4000);

   }
}

