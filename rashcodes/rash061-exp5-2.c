#include <stdio.h>

void main()
{
    printf("Name: Rashmin Chaudhari\nRoll no: 51\n");
    printf("The prime numbers between 1 to 100 are:\n");
    int i, num, count, pcount;
    num=1;
    do
    {
        count=0;
        i=1;
        do
        {
            if(num%i==0)
            {
                count++;
            }
            i++;
        }while(i<=num);
        if(count==2)
        {
            pcount++;
            printf("%d ", num);
        }
        num++;
    }while(num<=100);
    
}