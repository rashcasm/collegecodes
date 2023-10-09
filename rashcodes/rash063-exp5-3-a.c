#include <stdio.h>

void main()
{
    printf("Rashmin Chaudhari\nRoll No: 51\n");
    int i;
    for(i=1;i<10;i++)
    {
        if(i%3==0)
        {
            break;
        }
        printf("%d\n", i);
    }
}