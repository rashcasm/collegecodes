#include<stdio.h>
main()
{
    int a=10, b=20, temp;
    printf("Before swapping a=%d b=%d", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping, a=%d b=%d", a, b);
}
