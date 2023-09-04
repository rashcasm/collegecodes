#include<stdio.h>
main()
{
    int a=10, b=20;
    printf("before swapping a=%d b=%d", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping a=%d b=%d", a, b);
}
