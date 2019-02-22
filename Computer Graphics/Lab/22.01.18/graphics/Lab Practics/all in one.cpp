    #include<graphics.h>
    #include<conio.h>

    main()
    {
       int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

       initgraph(&gd, &gm, "C:\\TC\\BGI");
       setbkcolor (GREEN);

       rectangle(left, top, right, bottom);
       delay(500);

       circle(x, y, radius);
       delay(500);

       bar(left + 300, top, right + 300, bottom);
       delay(500);

       line(left - 10, top + 150, left + 410, top + 150);
       delay(500);

       ellipse(x, y + 200, 0, 360, 100, 50);
       delay(500);

       outtextxy(left + 100, top + 325, "My first C graphics program");

       getch();
       closegraph();
       return 0;
    }
