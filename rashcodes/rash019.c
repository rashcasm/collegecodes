#include<stdio.h>
void main()
{
    int a;
    printf("enter any number: ");
    scanf("%d", &a);
    if(a>0)
    {
        printf("\n%d is positive", a);
    }
    else{
        if(0>a)
        {
            printf("\n%d is negative", a);
        }
        else
        {
            printf("\n%d is zero", a);
        }
    }
}


