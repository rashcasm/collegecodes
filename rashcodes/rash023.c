#include<stdio.h>
void main()
{
    int a, b, c, d, e, min;
    printf("enter 5 numbers: ");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    min = a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    if(d<min)
    {
        min=d;
    }
    if(e<min)
    {
        min=e;
    }
    printf("\n min is %d", min);
}


