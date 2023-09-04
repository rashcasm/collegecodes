#include<stdio.h>
void main()
{
    int x, y;
    printf("enter x and y coordinates: ");
    scanf("%d%d", &x, &y);
    printf("%d,%d lies in ", x, y);
    if (x>0 &&y>0)
    {
        printf("First quadrant");
    }
    if (x<0 &&y>0)
    {
        printf("second quadrant");
    }
    if (x<0 &&y<0)
    {
        printf("third quadrant");
    }
    if (x>0 &&y<0)
    {
        printf("fourth quadrant");
    }
    if (x==0 && y==0)
    {
        printf("origin");
    }
    if (x==0 && y!=0)
    {
        printf("y axis");
    }
    if (x!=0 && y==0)
    {
        printf("x axis");
    }
}


