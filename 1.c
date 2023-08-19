
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()

{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    line(100, 100, 200, 200);
    printf("Prakash Koirala");
    printf("\n");
    printf("Roll no. 117");
    getch();
}
