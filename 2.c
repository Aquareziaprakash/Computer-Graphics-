#include <stdio.h>
#include <graphics.h>
#include <math.h>

float round(float a);

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, steps, k;
    float xincr, yincr, x, y, dx, dy;

    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Prakash Koirala");
    printf("\n\n");
    printf("Roll no. 117");
    printf("\n\n");

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    xincr = dx / (float)steps;
    yincr = dy / (float)steps;

    x = x1;
    y = y1;

    for (k = 1; k <= steps; k++)
    {

        delay(100);
        x += xincr;
        y += yincr;
        putpixel(round(x), round(y), WHITE);
    }

    outtextxy(200, 20, "DDA");
    outtextxy(x1 + 5, y1 - 5, "(x1,y1)");
    outtextxy(x2 + 5, y2 + 5, "(x2,y2)");

    getch();
}

float round(float a)
{
    int b = a + 0.5;
    return b;
}
