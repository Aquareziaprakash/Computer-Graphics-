#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
    int x, y, x1, y1, x2, y2, p, dx, dy;
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Prakash koirala");
    printf("\n");
    printf("Roll no. 117");

    printf("\nEnter the x-coordinate of the first point: ");
    scanf("%d", &x1);

    printf("Enter the y-coordinate of the first point: ");
    scanf("%d", &y1);

    printf("Enter the x-coordinate of the second point: ");
    scanf("%d", &x2);

    printf("Enter the y-coordinate of the second point: ");
    scanf("%d", &y2);

    x = x1;
    y = y1;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    putpixel(x, y, 2);

    if (x1 <= x2)
    {
        if (y1 <= y2)
        {
            p = 2 * dy - dx;
            while (x <= x2)
            {
                if (p < 0)
                {
                    x++;
                    p += 2 * dy;
                }
                else
                {
                    x++;
                    y++;
                    p += 2 * dy - 2 * dx;
                }
                putpixel(x, y, 7);
            }
        }
        else
        {
            p = 2 * dy - dx;
            while (x <= x2)
            {
                if (p < 0)
                {
                    x++;
                    p += 2 * dy;
                }
                else
                {
                    x++;
                    y--;
                    p += 2 * dy - 2 * dx;
                }
                putpixel(x, y, 7);
            }
        }
    }
    else
    {
        if (y1 <= y2)
        {
            p = 2 * dy - dx;
            while (x >= x2)
            {
                if (p < 0)
                {
                    x--;
                    p += 2 * dy;
                }
                else
                {
                    x--;
                    y++;
                    p += 2 * dy - 2 * dx;
                }
                putpixel(x, y, 7);
            }
        }
        else
        {
            p = 2 * dy - dx;
            while (x >= x2)
            {
                if (p < 0)
                {
                    x--;
                    p += 2 * dy;
                }
                else
                {
                    x--;
                    y--;
                    p += 2 * dy - 2 * dx;
                }
                putpixel(x, y, 7);
            }
        }
    }

    getch();
    closegraph();
}
