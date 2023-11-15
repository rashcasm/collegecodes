#include <stdio.h>
int reverse(int num)
{   
    int ori,d,rev;
    ori=num;
    rev=0;
    while(num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    return rev;
}
void main()
{
    printf("Rashmin Chaudhari\nRoll no: 51\n");
    int num, rev;
    printf("Enter any number: ");
    scanf("%d", &num);
    rev = reverse(num);
    printf("\nThe reverse of %d is %d", num, rev);
}
