//TO FIND THE SUM OF NUMBERS PRESENT IN AN ARRAY OF SIZE 5
#include <stdio.h>
void main()
{
    int a[5];
    int i, sum;
    printf("Enter numbers:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    sum = 0;
    for (i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum is %d", sum);
    printf("\nAverage: %.2f", sum/5.0);
}