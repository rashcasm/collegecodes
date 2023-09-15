#include <stdio.h>
int main()
{
    int i, num, counter, meow=0;
    for(num=1; meow<=100; num++)
    {
        counter=0;
        for(i=1; i<=num; i++)
        {
            if(num%i==0)
             {
                 counter++;
             }
        }
        if(counter==2)
        {
            meow++;
            printf("%d ", num);
        }
    }
  return 0;
}
