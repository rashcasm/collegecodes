// write a c program to find the largest and smallest number present in an array of size 15
#include <stdio.h>
void main()
{
    printf("\nRashmin Chaudhari\nRoll No: 51\n");
    int a[15];
    int i, min, max;
    printf("Enter numbers for array:\n");
    for (i=0;i<15;i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i=0;i<15;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    min = a[0];
    for (i=0;i<15;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nLargest value is %d", max);
    printf("\nSmallest value is %d", min);
}