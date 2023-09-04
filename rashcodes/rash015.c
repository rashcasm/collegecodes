#include<stdio.h>
void main()
{
    int a, b;
    printf("\n enter any 2 number: ");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("\n%d is greater", a);
    }
    else
    {
        if(a<b)
        {
            printf("\n%d is greater", b);
        }
        else
        {
            printf("\nBoth the numbers are equal");
        }
    }
}


