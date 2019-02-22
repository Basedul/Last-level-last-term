    #include <graphics.h>
    #include <conio.h>

    main()
    {
       int gd = DETECT, gm;

       initgraph(&gd, &gm, "C:\\TC\\BGI");

       setcolor(RED);
       circle(100,100,50);
       floodfill(101,101,GREEN);

       getch();
       closegraph();
       return 0;
    }
