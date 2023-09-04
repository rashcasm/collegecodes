// a program to find the sum of digits of 3 digit number entered by user

#include<stdio.h>
void main()
{
    int d1, d2, d3, num, ori, sum;
    printf("\nenter any 3 digit number: ");
    scanf("%d", &num);
    ori=num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    sum=d1+d2+d3;
    printf("\nsum of digits of number %d is %d", ori, sum);
}
