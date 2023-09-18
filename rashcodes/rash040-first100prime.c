#include<stdio.h>
main()
{
    int i, num, count, counter=0;
    for(num=1; counter<=100; num++)
    {
        count = 0;
        for(i=1; i<=num; i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
                counter++;
                printf("%d ", num);
        }
    }
}