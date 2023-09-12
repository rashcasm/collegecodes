#include <stdio.h>
main()
{
    int i, num, counter;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            counter++;
        }
    }
    if(counter == 2)
    {
        printf("\n%d is a prime number", num);
    }
    else{
        printf("\n%d is not a prime number", num);
    }
}