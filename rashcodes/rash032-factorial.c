#include <stdio.h>
int main()
{
    int i, num, f=1;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        f=f*i;
    }
    printf("\nThe factorial of %d is %d", num, f);
    return 0;
}