//EXPERIMENT 10

#include <stdio.h>
void reverse(int num)
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
    printf("\nThe reverse of %d is %d", ori, rev);
}
void main()
{
    printf("Rashmin Chaudhari\nRoll no: 51\n");
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    reverse(num);
}