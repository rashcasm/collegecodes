#include <stdio.h>

void main()
{
    printf("Name: Rashmin Chaudhari\nRoll no: 51\n");
    int rev=0, num, ori, d;
    printf("Enter any number: ");
    scanf("%d", &num);
    ori=num;
    while(num>0)
    {
        d=num%10;
        rev=(rev*10)+d;
        num=num/10;
    }
    printf("\nThe reverse of %d is %d", ori, rev);
}