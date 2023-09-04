#include<stdio.h>
void main()
{
    int a, b, c, num;
    printf("\nenter any 3 digit number: ");
    scanf("%d", &num);

    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    
    if(a>b)
    {
        if (a>c)
        {
            printf("\n%d is greater", a);
        }
        else
        {
            printf("\n %d is greater", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is greater", b);
        }
        else
        {
            printf("%d is greater", c);
        }
    }
}


