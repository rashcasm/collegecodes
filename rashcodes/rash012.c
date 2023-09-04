// a program to reverse 3 digit number entered by user

#include<stdio.h>
void main()
{
    int d1, d2, d3, num, ori, rev;
    printf("\nenter any 3 digit number: ");
    scanf("%d", &num);
    ori=num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    rev=100*d1+10*d2+d3;
    printf("\nreverse of number %d is %d", ori, rev);
}
